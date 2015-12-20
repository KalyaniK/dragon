<?php
/**
 * @file
 * dragon_project_related_config.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function dragon_project_related_config_default_rules_configuration() {
  $items = array();
  $items['rules_project_created_mail_admin'] = entity_import('rules_config', '{ "rules_project_created_mail_admin" : {
      "LABEL" : "Project created mail admin",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--project" : { "bundle" : "project" } },
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "4" : "4" } },
            "subject" : "A new quote is created in Dragon",
            "message" : "The newly created quote is from user: [node:author]\\r\\nThe quote link: [node:url]"
          }
        }
      ]
    }
  }');
  return $items;
}
