// $Id:: qadcommon_views_reset_button.js 3736 2015-01-12 02:05:54Z mjz         $
/**
 * @file
 * Javascripts to handler views reset button in block using AJAX
 */

(function($) {
  Drupal.behaviors.views_reset_button = {
    attach: function(context, setting) {
      $('.views-reset-button .btn').click(function(e) {
        e.preventDefault();
        $('.views-exposed-form :input')
        .not(':button, :submit, :reset, :hidden')
        .val('')
        .removeAttr('checked')
        .removeAttr('selected');
        
        $('.views-submit-button .btn').trigger('click');
      });
    }
  };
})(jQuery);
