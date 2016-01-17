
(function($) {
  Drupal.behaviors.dragon_moxtra = {
    attach: function(context, setting) {
      var options = {
          mode: "sandbox", 
          client_id: Drupal.settings.dragon_moxtra.client_id, //
          access_token: Drupal.settings.dragon_moxtra.access_token,
          invalid_token: function(event) {
              //Triggered when the access token is expired or invalid
              console.log("Access Token expired, please generate a new access token!");
          }
      };
      Moxtra.init(options);
      function start_chat (contact_id) {
          $.ajax( Drupal.settings.dragon_moxtra.rest_api_end_point + "/me/binders?access_token=" + options.access_token, {
              type: 'POST',
              data: JSON.stringify({name: 'Dragon Asia', conversation: true}),
              processData: false,
              contentType: 'application/json',
              crossDomain: true,
              success: function (data) {
                  add_user_to_chat(data.data.id, contact_id);
              }
          });
      }
      function add_user_to_chat (binder_id, contact_id) {
          $.ajax( Drupal.settings.dragon_moxtra.rest_api_end_point + "/" + binder_id + "/inviteuser?access_token=" + options.access_token, {
              type: 'POST',
              data: JSON.stringify({users: [{user: {unique_id: contact_id}}]}),
              processData: false,
              contentType: 'application/json',
              crossDomain: true,
              success: function (data) {
                  console.log(data);
              }
          });
      }
      function init_binders () {
          $.ajax( Drupal.settings.dragon_moxtra.rest_api_end_point + "/me/binders?filter=all&access_token=" + options.access_token, {
              type: 'GET',
              contentType: 'application/json',
              crossDomain: true,
              success: function (data) {
                  console.log(data);
                  if (data.data.binders.length === 0) {
                    var contact_id = Drupal.settings.dragon_moxtra.default_contact;
                    start_chat(contact_id);
                  }
                  start_timeline();
              }
          });
      }
      init_binders();
      function start_timeline() {
          var options = {
              iframe: true,
              tagid4iframe: "timeline_container",
              iframewidth: "100%",
              iframeheight: "600px",                
              autostart_meet: true,
              autostart_note: true,
              extension: { "show_dialogs": {
                  "meet_invite": false,
                  "member_invite": false,
                  "share": false
              } },
              start_timeline: function(event) {
                  console.log("Timeline started session Id: " + event.session_id + " binder id: " + event.binder_id);
              },
              view_binder: function(event) {
                  console.log("Binder switched session Id: " + event.session_id + " binder id: " + event.binder_id);
              },
              create_binder: function(event) {
                  console.log("Create binder with session Id: " + event.session_id);
              },
              invite_member: function(event) {
                  console.log("Invite member into binder Id: " + event.binder_id);
              },
              start_meet: function(event) {
                  console.log("Meet started session key: " + event.session_key + " session id: " + event.session_id);
              },
              end_meet: function(event) {
                  console.log("Meet end event");
              },
              save_meet: function(event) {
                  console.log("Meet saved on binder: " + event.binder_id);
              },
              start_note: function(event) {
                  console.log("session key: " + event.session_key + " session id: " + event.session_id);
              },
              save_note: function(event) {
                  console.log("Note saved on binder: " + event.destination_binder_id);
              },
              cancel_note: function(event) {
                  console.log("Note cancelled");
              },
              error: function(event) {
                  console.log("Timeline error code: " + event.error_code + " error message: " + event.error_message);
              }
          };            
          Moxtra.timeline(options);
      }
    }
  };
})(jQuery);
