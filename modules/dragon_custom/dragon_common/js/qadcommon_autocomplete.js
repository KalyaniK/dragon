// $Id:: qadcommon_autocomplete.js 3736 2015-01-12 02:05:54Z mjz               $
/**
 * @file
 * Javascripts to restrict user input invalid letters, according to Drupal auto complete defect
 */

(function($) {
  Drupal.behaviors.qadcommon_autocomplete = {
    attach: function(context, setting) {
      $('input.qad_autocomplete').live('keydown', function(event){
        var content = $(this).val();
            input_element = $(this);
            // Make the pop_error variable global accessable
            Drupal.behaviors.qadcommon_autocomplete.pop_error = false;
            error_content = '';
        // Listen to the keys: . % /
        // Note, the '.' will be stopped only it's the first letter in the search box
        // display different error message content according to the keys
        if(event.shiftKey == 1 && event.which == 53) {
          Drupal.behaviors.qadcommon_autocomplete.pop_error = true;
          error_content = 'Sorry, \'%\' is not supported for search.';
        }
        else if (content == '' && event.which == 190) {
          Drupal.behaviors.qadcommon_autocomplete.pop_error = true;
          error_content = 'Sorry, \'.\' is not supported to be the first character for search.';
        }
        else if (event.which == 191){
          Drupal.behaviors.qadcommon_autocomplete.pop_error = true;
          error_content = 'Sorry, \'/\' is not supported for search.';
        }
        if (Drupal.behaviors.qadcommon_autocomplete.pop_error) {
          $("#unsupport_input_error").remove();
          var error_message = document.createElement('div');
          document.body.appendChild(error_message);
          error_message.id = 'unsupport_input_error';
          error_message.className = 'error_message';
          error_message.title = Drupal.t('Note Please');
          error_message.innerHTML = '<p class="msg">' + Drupal.t(error_content) + '</p>';
          $("#unsupport_input_error").dialog({
            buttons: {
              "OK": function() {
                $(this).dialog( "close" );
                input_element.focus();
                Drupal.behaviors.qadcommon_autocomplete.pop_error = false;
              }
            }
          });
          $("#unsupport_input_error").bind('dialogclose',function(event){
            $("#unsupport_input_error").remove();
          });
        }
      });
    }
  };
})(jQuery);
