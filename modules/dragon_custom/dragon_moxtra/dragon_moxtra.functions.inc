<?php
module_load_include('inc', 'dragon_moxtra', 'dragon_moxtra.config');

function dragon_moxtra_get_access_token($user) {
  global $CLIENT_ID, $CLIENT_SECRET, $USER_INITIALIZE_GRANT_TYPE, $OAUTH_ENDPOINT_DOMAIN;
  //Get current UTC timestamp in milliseconds
  date_default_timezone_set('UTC'); 
  $timestamp = time()*1000;

  //Post data to setup/initialize user
  $mail = $user->mail;
  $username = array(
    'firstname' => $user->name,
  );
  $data_string = "client_id=".$CLIENT_ID."&client_secret=".$CLIENT_SECRET."&grant_type=".$USER_INITIALIZE_GRANT_TYPE."&uniqueid=".$mail."&timestamp=".$timestamp;
  if ($username) {
    foreach ($username as $key => $name) {
      $data_string .= "&$key=$name";
    }
  }
  $uri = $OAUTH_ENDPOINT_DOMAIN."/oauth/token";
  $ch = curl_init();
  curl_setopt($ch, CURLOPT_URL,$uri);
  curl_setopt($ch, CURLOPT_POST, 1);
  curl_setopt($ch, CURLOPT_POSTFIELDS,$data_string);
  curl_setopt($ch, CURLOPT_RETURNTRANSFER, true);
  $result = curl_exec($ch);
  $result = json_decode($result, true);

  if (!isset($result['access_token'])) {
    watchdog('dragon_moxtra', 'User setup failed for user: %uid', array('%uid' => $user->uid), WATCHDOG_ERROR);
    return;
  }
  //Get Access Token on Successful Setup & Initialization of the User
  $access_token = $result['access_token'];
  return $access_token;
}
