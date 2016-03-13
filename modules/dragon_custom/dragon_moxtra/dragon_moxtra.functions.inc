<?php
module_load_include('inc', 'dragon_moxtra', 'dragon_moxtra.config');

function dragon_moxtra_get_access_token($use_cache = TRUE, $user = NULL) {
  if($user == null){
    global $user;
  }
  $cache_id = __FUNCTION__.':'.$user->uid;
  $cached_response = cache_get($cache_id);
  if($use_cache && $cached_response) return $cached_response->data->access_token;

  global $CLIENT_ID, $CLIENT_SECRET, $USER_INITIALIZE_GRANT_TYPE, $OAUTH_ENDPOINT_DOMAIN;
  // Get current UTC timestamp in milliseconds
  date_default_timezone_set('UTC'); 
  $timestamp = time()*1000;

  // Post data to setup/initialize user
  $mail = $user->mail;
  $userdata = array(
    'client_id' => $CLIENT_ID,
    'client_secret' => $CLIENT_SECRET,
    'grant_type' => $USER_INITIALIZE_GRANT_TYPE,
    'uniqueid' => $mail,
    'timestamp' => $timestamp,
    'email' => $mail,
    'firstname' => $user->name,
  );
  $data_string = '';
  if ($userdata) {
    foreach ($userdata as $key => $name) {
      $data_string .= "&$key=$name";
    }
  }
  $uri = $OAUTH_ENDPOINT_DOMAIN."/oauth/token";
  $response = dragon_moxtra_api_post_json($uri, $data_string, 'application/x-www-form-urlencoded'); 

  if (!isset($response->access_token)) {
    watchdog('dragon_moxtra', 'User setup failed for user: %uid', array('%uid' => $user->uid), WATCHDOG_ERROR);
    return;
  }
  // Get Access Token on Successful Setup & Initialization of the User
  $access_token = $response->access_token;
  cache_set($cache_id, $response, 'cache', $response->expires_in);
  return $access_token;
}

/**
 * Post request with values and decode json response
 *
 * @param string $uri
 * @param string $data_string
 *
 * @return StdClass
 *
 */
function dragon_moxtra_api_post_json($uri, $data_string, $content_type = 'application/json') {
  $channel = curl_init();
  curl_setopt($channel, CURLOPT_URL, $uri);
  curl_setopt($channel, CURLOPT_POST, 1);
  curl_setopt($channel, CURLOPT_POSTFIELDS, $data_string);
  curl_setopt($channel, CURLOPT_RETURNTRANSFER, true);
  curl_setopt($channel, CURLOPT_SSL_VERIFYPEER, false);
  curl_setopt($channel, CURLOPT_HTTPHEADER, array('Content-Type: ' . $content_type));
  $response = curl_exec($channel);
  $http_code = curl_getinfo($channel, CURLINFO_HTTP_CODE);

  if ($response === false)
    watchdog('dragon_moxtra', 'Curl error in '. __FUNCTION__ .':<br />' .
      'Sent this url: '. $uri .'<br />' .
      'Error: <pre>'. curl_error($channel) .'</pre><br />' .
      'Data sent:<pre>'. $data_string .'</pre>', array(), WATCHDOG_ERROR);
  else {
    // Add the http response code in the $response object
    $responseDecoded = json_decode($response, TRUE);
    $response = (object) array_merge(array('http_code' => $http_code), (empty($responseDecoded) ? array() : (array) $responseDecoded));
  }

  curl_close($channel);
  return $response;
}

/* Get request and decode json response
 *
 * @param string $uri
 *
 * @return StdClass
 *
 */
function dragon_moxtra_api_get_json($uri) {
  $channel = curl_init();
  curl_setopt($channel, CURLOPT_URL, $uri);
  curl_setopt($channel, CURLOPT_RETURNTRANSFER, true);
  curl_setopt($channel, CURLOPT_SSL_VERIFYPEER, false);
  $response = curl_exec($channel);
  $http_code = curl_getinfo($channel, CURLINFO_HTTP_CODE);

  if ($response === false)
    watchdog('dragon_moxtra', 'Curl error in '. __FUNCTION__ .':<br />' .
      'Sent this url: '. $uri .'<br />' .
      'Error: <pre>'. curl_error($channel) .'</pre>', array(), WATCHDOG_ERROR);
  else {
    // Add the http response code in the $response object
    $responseDecoded = json_decode($response, TRUE);
    $response = (object) array_merge(array('http_code' => $http_code), (empty($responseDecoded) ? array() : (array) $responseDecoded));
  }

  curl_close($channel);
  return $response;
}

function dragon_moxtra_create_binder($name, $accounts) {
  watchdog('dragon_moxtra', 'create binder %name, request: %request', array('%name'=>$name, '%request' => print_r($accounts, TRUE)));
  $access_token = dragon_moxtra_get_access_token();
  global $REST_API_END_POINT;
  $uri = $REST_API_END_POINT . '/me/binders?access_token='.$access_token;
  $data = array(
    'name' => $name,
  );
  $response = dragon_moxtra_api_post_json($uri, json_encode($data));
  if ($response->http_code != 200 || isset($response->error_code))
    return dragon_moxtra_api_request_error($response->http_code, $response);

  $uri = $REST_API_END_POINT . '/' . $response->data['id'] . '/inviteuser?access_token='.$access_token;
  $data = array(
    'users' => $accounts,
    'email_off' => TRUE,
  );
  $response = dragon_moxtra_api_post_json($uri, json_encode($data));
  if ($response->http_code != 200 || isset($response->error_code))
    return dragon_moxtra_api_request_error($response->http_code, $response);
  return $response;
}

function dragon_moxtra_get_binders() {
  $access_token = dragon_moxtra_get_access_token();
  global $REST_API_END_POINT;
  $uri = $REST_API_END_POINT . '/me/binders?access_token='.$access_token;
  $data = array();
  $response = dragon_moxtra_api_get_json($uri, json_encode($data));
  if ($response->http_code != 200 || isset($response->error_code))
    return dragon_moxtra_api_request_error($response->http_code, $response);

  return $response;
}
          
function dragon_moxtra_get_user($user_id) {
  $access_token = dragon_moxtra_get_access_token();
  global $REST_API_END_POINT;
  $uri = $REST_API_END_POINT . '/' . $user_id . '?access_token='.$access_token;
  $data = array();
  $response = dragon_moxtra_api_get_json($uri, json_encode($data));
  if ($response->http_code != 200 || isset($response->error_code))
    return dragon_moxtra_api_request_error($response->http_code, $response);

  return $response;
}

function dragon_moxtra_api_request_error($error_code, $response) {
  watchdog('dragon_moxtra', 'moxtra api request %error response: %response', array('%error' => $error_code, '%response' => print_r($response, TRUE)));
}
