<?php
// $Id:: qadcommon.settings.inc 3764 2015-02-28 10:37:03Z j8h                  $

/**
 * @file
 * Administrative page callbacks for the qadcommon module.
 */

/**
 * Display QAD Common Settings group page.
 */
function qadcommon_group_page() {
  $menu = menu_get_item('admin/config/qad');
  $content = system_admin_menu_block($menu);

  $build['menu'] = array(
    '#theme' => 'admin_block_content',
    '#content' => $content,
  );

  return $build;
}

/**
 * Displays QAD Common Settings configuration page.
 */
function qadcommon_configuration_page() {
  $menu = menu_get_item('admin/config/qad/settings');
  $content = system_admin_menu_block($menu);

  $build['menu'] = array(
    '#theme' => 'admin_block_content',
    '#content' => $content,
  );

  return $build;
}

/**
 * Displays QAD Common Settings configuration page.
 */
function _qadcommon_generate_variables_section_form($container, $title, $variable_infos) {
  $form[$container] = array(
    '#type' => 'fieldset',
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  
  $form[$container]['#title'] = isset($title)? t($title): t(_qadcommon_env_variable_infos($variable_infos[0]['variable']));

  foreach ($variable_infos as $variable_info) {
    $form[$container] += _qadcommon_generate_variable_form($variable_info, TRUE);
    $form[$container] += _qadcommon_generate_variable_form($variable_info, FALSE);
  }
  
  return $form;
}

/**
 * Displays QAD Common Settings configuration page.
 */
function _qadcommon_generate_variable_form($variable_info, $is_prod) {
  $env = $is_prod? 'prod' : 'test';
  $variable = 'qadcommon_env_' . $env . '_' . $variable_info['variable'];
  $form[$variable] = array(
    '#type' => 'textfield',
    '#title' => $env . ': ' .  t(_qadcommon_env_variable_infos($variable_info['variable'])),
    '#default_value' => variable_get($variable),
    '#size' => 150,
    '#maxlength' => 255,
  );
  
  if (isset($variable_info['description'])) {
    $form[$variable]['#description'] = $variable_info['description'];
  }
  
  return $form;
}

/**
 * QAD Common Server Settings.
 *
 * @return
 * Form for server configuration options.
 */
function qadcommon_server_settings($form, &$form_state) {
  $variables_info = _qadcommon_env_variable_infos();
  $form = array();
  $form += _qadcommon_generate_variables_section_form('qadcommon_trinity_soap_server', NULL, array(
    array(
      'variable' => 'qadcommon_trinity_soap_server',
      'description' => 'The URL to access the instance of Trinity\'s API.',
    ),
  ));
  
  $form += _qadcommon_generate_variables_section_form('qadcommon_vector_rest_validate_contract_url', NULL, array(
    array(
      'variable' => 'qadcommon_vector_rest_validate_contract_url',
      'description' => 'URL to validate contract on Vector REST API, the [%enduser_number] is a token for Enduser number.',
    ),
  ));
  
  $form += _qadcommon_generate_variables_section_form('site_name', NULL, array(
    array(
      'variable' => 'site_name',
    ),
  ));
  
  $form += _qadcommon_generate_variables_section_form('uc_file_base_dir', NULL, array(
    array(
      'variable' => 'uc_file_base_dir',
    ),
  ));

  $form += _qadcommon_generate_variables_section_form('uc_credit_encryption_path', NULL, array(
    array(
      'variable' => 'uc_credit_encryption_path',
    ),
  ));
  
  $form += _qadcommon_generate_variables_section_form('jira', 'Jira variables', array(
    array(
      'variable' => 'qad_ers_wsdl',
      'description' => 'URL of the Jira WSDL file',
    ),
    array(
      'variable' => 'qad_ers_team',
      'description' => 'Categories Name & Addresses of the PM\'s assocaited with the Enhancement System',
    ),
    array(
      'variable' => 'qad_ers_attachment_url',
      'description' => 'URL to access the Jira',
    ),
  ));
  // Note keeping the prefix qad_env_varname to minimize required code changes during the merge of qad_env_settings & qad_common

  $form += _qadcommon_generate_variables_section_form('qad_ppa_rest_server_uri', NULL, array(
    array(
      'variable' => 'qad_ppa_rest_server_uri',
    ),
  ));
  
  $form += _qadcommon_generate_variables_section_form('ubercart_notifications', 'Ubercart notifications', array(
    array(
      'variable' => 'qc_email_new_email_cc_address',
    ),
    array(
      'variable' => 'qc_email_admin_notification_checkout',
    ),
    array(
      'variable' => 'qc_email_admin_notification_checkout_paypal',
      'description' => 'Admin notification email for store orders (Paid using Paypal)',
    ),
  ));

  $form += _qadcommon_generate_variables_section_form('qadcommon_base_url', NULL, array(
    array(
      'variable' => 'qadcommon_base_url',
      'description' => 'Set the base url used when calling the store webservice',
    ),
  ));
  
  $form += _qadcommon_generate_variables_section_form('bounce_report_setting', 'QAD Store download center bounce report settings', array(
    array(
      'variable' => 'bounce_mail_header_return_path',
    ),
    array(
      'variable' => 'bounce_connector_login',
    ),
    array(
      'variable' => 'bounce_connector_password',
    ),
    array(
      'variable' => 'qc_bounce_report_notify_addresses',
    ),
  ));

  $form += _qadcommon_generate_variables_section_form('amazon_s3_setting', 'QAD Store Amazon S3 Setting', array(
    array(
      'variable' => 'aws_key',
    ),
    array(
      'variable' => 'aws_secret',
    ),
    array(
      'variable' => 'qc_file_amazon_s3_bucket_us',
    ),
    array(
      'variable' => 'qc_file_amazon_s3_bucket_us_log',
    ),
    array(
      'variable' => 'qc_file_amazon_s3_bucket_eu',
    ),
    array(
      'variable' => 'qc_file_amazon_s3_bucket_eu_log',
    ),
  ));

  $form += _qadcommon_generate_variables_section_form('swreq_setting', 'Software Update Request Setting', array(
    array(
      'variable' => 'qad_swreq_receiver_email_address',
    ),
    array(
      'variable' => 'qad_swreq_bi_manager_email_address',
    ),
  ));

  return system_settings_form($form);
}

/**
 * Trinity Vector Settings
 */
function qadcommon_trinity_vector_form($form, &$form_state) {
  $form['trinity_vector_setting'] = array(
    '#type' => 'fieldset',
    '#title' => t('QAD Trintiy/Vector Settings'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );

  $form['trinity_vector_setting']['qadcommon_trinity_soap_server'] = array(
    '#type' => 'textfield',
    '#title' => t('Trinity SOAP API Server'),
    '#default_value' => variable_get('qadcommon_trinity_soap_server'),
    '#size' => 150,
    '#maxlength' => 255,
  );

  $form['trinity_vector_setting']['qadcommon_vector_rest_validate_contract_url'] = array(
    '#type' => 'textfield',
    '#title' => t('Vector REST API Validate Contract URL'),
    '#description' => t('URL to validate contract on Vector REST API, the [%enduser_number] is a token for Enduser number.'),
    '#default_value' => variable_get('qadcommon_vector_rest_validate_contract_url'),
    '#size' => 150,
    '#maxlength' => 255,
  );

  return system_settings_form($form);
}

/**
 * User LDAP Settings
 */
function qadcommon_ldap_form($form, &$form_state) {
  $form['ldap_setting'] = array(
    '#type' => 'fieldset',
    '#title' => t('QAD User LDAP Settings'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );

  $form['ldap_setting']['qadcommon_ldap_host_name'] = array(
    '#type' => 'textfield',
    '#title' => t('LDAP host name'),
    '#default_value' => variable_get('qadcommon_ldap_host_name'),
    '#size' => 150,
    '#maxlength' => 255,
  );

  $form['ldap_setting']['qadcommon_ldap_host_port'] = array(
    '#type' => 'textfield',
    '#title' => t('LDAP host port'),
    '#default_value' => variable_get('qadcommon_ldap_host_port'),
    '#size' => 150,
    '#maxlength' => 255,
  );

  $form['ldap_setting']['qadcommon_ldap_bind_rdn'] = array(
    '#type' => 'textfield',
    '#title' => t('LDAP bind rdn'),
    '#default_value' => variable_get('qadcommon_ldap_bind_rdn'),
    '#size' => 150,
    '#maxlength' => 255,
  );

  $form['ldap_setting']['qadcommon_ldap_password'] = array(
    '#type' => 'textfield',
    '#title' => t('LDAP password'),
    '#default_value' => variable_get('qadcommon_ldap_password'),
    '#size' => 150,
    '#maxlength' => 255,
  );

  return system_settings_form($form);
}

/**
 * QAD Admin notice email settings
 */
function qadcommon_admin_notice_settings_form($form, &$form_state) {
  $form['admin_notice'] = array(
    '#type' => 'fieldset',
    '#title' => t('Admin Notice Email'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );

  $form['admin_notice']['qadcommon_admin_notice_recipients'] = array(
    '#type' => 'textfield',
    '#title' => t('Watchdog Admin Notice Email Recipients'),
    '#default_value' => variable_get('qadcommon_admin_notice_recipients'),
    '#description' => t('The email address which the system will always send watchdog notice emails to.'),
  );

  return system_settings_form($form);
}

function _qadcommon_prefix_variable($variable_name, $is_production){
  $env = $is_production? 'prod' : 'test';
  return 'qadcommon_env_' . $env . '_' . $variable_name;
}
/**
 *  Generate a row for the settings table & update the setting if required.
 *
 * @param $title : Title of the Setting, Value in the first column
 *        $var_name : The variable that needs to be updated e.g. site_name or qad_ers_jira_wsdl
 *        $var_suffix : the part of the qad_env variable after the qad_env_prod or qad_env_test (you did use this convention right?)
 *
 * @return $row
 *   A formatted row for use in a standard Drupal table.
 *
 */
function _qadcommon_update_variables($variable_infos){
  $is_production = qadcommon_verify_environment();
  $results = array();
  
  foreach ($variable_infos as $variable_name => $description) {
    $old_value = variable_get($variable_name);
    $new_value = variable_get(_qadcommon_prefix_variable($variable_name, $is_production));
    
    if($old_value != $new_value && !empty($new_value)){
      //variable_set($variable_name, $new_value);
      $changed = TRUE;
    } else {
      $changed = FALSE;
      $new_value = $old_value;
    }
    
    $results[$variable_name] = array(
      'title' => $description,
      'updated' => $changed,
      'new_value' => $new_value
    );
  }
  
  return $results;
}

/**
 * Takes $Vars array as input returns formatted row for standard Drupal table. Seperated from
 * Update settings to remove formatting logic from variable setting logic.
 *
 * @param $vars
 *   $vars['title']: Name of the Setting e.g. Site Name
 *   $vars['changed']: Boolean Indicating if the variable has changed. If true adds a class to the Value cell. Making
 *                     it Stand out more.
 *   $vars['new_value']: The value of the Variable e.g. "Production Site Name"
 * @return $row
 *   A formatted row for use in a standard drupal table.
 *
 */
function _qadcommon_generate_variable_table_row($results){
  $rows = array();
  foreach ($results as $variable_name => $info) {
    $rows[$variable_name] = array(
      'title' => array('data' => $info['title']),
      'new_value' => array('data' => $info['new_value'])
    );
    
    if($info['updated']){
      $rows[$variable_name]['new_value']['class'] = 'setting-updated';
    }
  }

  return $rows;
}

/**
 * Disable webtrends module on test and dev env
 */
function _qadcommon_disable_webtrends_on_non_production() {
  if(!qadcommon_verify_environment()) {
    if(qadcommon_get_module_status('webtrends')){
      module_disable(array('webtrends'));
    }
  }
}

/**
 * Disable webtrends module on test and dev env
 */
function _qadcommon_env_variable_infos($variable_name = NULL) {
  $variable_infos =  array(
    'qadcommon_trinity_soap_server' => 'Trinity API Server URL',
    'qadcommon_vector_rest_validate_contract_url' => 'Vector REST API Validate Contract URL',
    'site_name' => 'Site Name',
    'uc_file_base_dir' => 'Download File Path',
    'uc_credit_encryption_path' => 'Encryption Key Path',
    'qad_ers_wsdl' => 'Jira WSDL URL',
    'qad_ers_team' => 'Jira Team Contacts',
    'qad_ers_attachment_url' => 'Attachment URL',
    'qad_ppa_rest_server_uri' => 'Compatibility Guide REST URI',
    'qc_email_new_email_cc_address' => 'New Order Email CC Address',
    'qc_email_admin_notification_checkout' => 'Admin notification email for store orders',
    'qc_email_admin_notification_checkout_paypal' => 'Admin notification email for store orders (Paid using Paypal)',
    'bounce_mail_header_return_path' => 'Bounce Report Return Address',
    'bounce_connector_login' => 'Bounce Report Return Address Login',
    'bounce_connector_password' => 'Bounce Report Return Address Password',
    'qc_bounce_report_notify_addresses' => 'Bounce Report Notify Addresses',
    'qadcommon_base_url' => 'Store Webservice base URL',
    'qc_bounce_report_notify_addresses' => 'QAD Store download center bounce email notify addresses',
    'aws_key' => 'Amazon Web Services Key',
    'aws_secret' => 'Amazon Web Services Secret Key',
    'qc_file_amazon_s3_bucket_us' => 'Amazon S3 US Bucket',
    'qc_file_amazon_s3_bucket_us_log' => '',
    'qc_file_amazon_s3_bucket_us_log' => 'Amazon S3 US Log Bucket',
    'qc_file_amazon_s3_bucket_eu' => 'Amazon S3 EU Bucket',
    'qc_file_amazon_s3_bucket_eu_log' => 'Amazon S3 EU Log Bucket',
    'qad_swreq_receiver_email_address' => 'Software Update Request Receiver Email Address',
    'qad_swreq_bi_manager_email_address' => 'Software Update Request BI Manager Email Address',
  );
  
  if ($variable_name) {
    return $variable_infos[$variable_name];
  }
  
  return $variable_infos;
}

/**
 * Page callback function of the check settings
 */
function qadcommon_update_vars(){
	_qadcommon_disable_webtrends_on_non_production();

  $header = array(
    array('data' => t('Variable')),
    array('data' => t('Value')),
  );
  
  $vars = _qadcommon_env_variable_infos();
  $results = _qadcommon_update_variables($vars);
  $rows = _qadcommon_generate_variable_table_row($results);

  $rows[] = array(t('Webtrends Status'), qadcommon_module_status('webtrends'));

  $table = array(
    '#header' => $header,
    '#rows'=> $rows,
    '#attributes' => array('class' => array('table table-bordered table-striped table-condensed')),
    '#theme' => 'table',
  );

  $html = array(
  '#type' => 'container',
  '#attributes' => array(
    'class' => array('bootstrap'),
  ),
  'table' => $table,
  );

  return drupal_render($html);
}
