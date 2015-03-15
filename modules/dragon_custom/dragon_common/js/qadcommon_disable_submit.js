// $Id:: qadcommon_disable_submit.js 3736 2015-01-12 02:05:54Z mjz             $
/**
 * @file
 * Javascripts to handler views reset button in block using AJAX
 */

(function($) {
  Drupal.behaviors.disable_submit_after_click = {
    attach: function(context, setting) {   
      // Bind to input elements.
      // Exclude the form get submit e.g. views AJAX button, not submitting the form
      $('form:not([method~="GET"]) input.form-submit').click(function (e) {
        var el = $(this);
        el.after('<input type="hidden" class ="qad-add-hidden-input" name="' + el.attr('name') + '" value="' + el.attr('value') + '" />');
        return true;
      });
      
      $('form').submit(function(e){
        if (!e.isPropagationStopped()) {
          $('input.form-submit', this).attr('disabled', 'disabled');
        }
      });
      
      // Reset the submit button to active
      $(document).bind('clientsideValidationFormHasErrors', function(event, form) {
        $('input.form-submit', form).removeAttr('disabled');
        // Remove the hidden input, otherwise it will foil all the AJAX in the form
        $('input.qad-add-hidden-input[type="hidden"]').remove();  
      });
    }
  };
})(jQuery);
