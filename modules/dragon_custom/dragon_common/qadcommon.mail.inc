<?php
// $Id: qadcommon.mail.inc 3736 2015-01-12 02:05:54Z mjz $

/**
 * @file
 * Utility class definition.
 */

/**
 * Modifies the Drupal mail system to send HTML emails.
 */
class QADMailSystem extends DefaultMailSystem {

  /**
   * Concatenates and wraps the e-mail body for plain-text mails.
   *
   * @param $message
   *   A message array, as described in hook_mail_alter().
   *
   * @return
   *   The formatted $message.
   */
  public function format(array $message) {
    $message['body'] = implode("\n\n", $message['body']);
    return $message;
  }

}
