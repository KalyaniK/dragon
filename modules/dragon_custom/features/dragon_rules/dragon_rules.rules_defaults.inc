<?php
/**
 * @file
 * dragon_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function dragon_rules_default_rules_configuration() {
  $items = array();
  $items['rules_send_create_user_by_binder_notification'] = entity_import('rules_config', '{ "rules_send_create_user_by_binder_notification" : {
      "LABEL" : "Send create user by binder notification",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_i18n" ],
      "USES VARIABLES" : { "mail_address" : { "label" : "Mail address", "type" : "text" } },
      "ACTION SET" : [
        { "mail" : {
            "to" : "[mail-address:value]",
            "subject" : "An invitation from DragonAsia!",
            "message" : "Hi [mail-address:value],\\r\\nYou\\u0027re invited to DragonAsia for a chat. An account has been created for you with username: [mail-address:value] and default password: dragonasia\\r\\nPlease visit [site:url]chat to take a look!\\r\\n--  [site:name] team",
            "from" : "info@dragonasiahk.net",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_send_message_notification'] = entity_import('rules_config', '{ "rules_send_message_notification" : {
      "LABEL" : "Send message notification",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_i18n" ],
      "USES VARIABLES" : {
        "mail_address" : { "label" : "Mail address", "type" : "text" },
        "user_name" : { "label" : "User Name", "type" : "text" },
        "message_number" : { "label" : "Message Number", "type" : "integer" }
      },
      "ACTION SET" : [
        { "mail" : {
            "to" : "[mail-address:value]",
            "subject" : "New message for you in DragonAsia!",
            "message" : "Hi [user-name:value],\\r\\nNew message for you in DragonAsia!\\r\\nPlease visit [site:url]chat to take a look!\\r\\n--  [site:name] team",
            "from" : "info@dragonasiahk.net",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
