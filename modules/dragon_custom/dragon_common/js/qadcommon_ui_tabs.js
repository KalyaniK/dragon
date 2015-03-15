// $Id:: qadcommon_ui_tabs.js 3736 2015-01-12 02:05:54Z mjz                    $
/**
 * @file
 * Javascripts to enable ui tabs
 */

(function($) {
  Drupal.behaviors.enable_ui_tabs = {
    attach: function(context, setting) {   
      $(function() {
        $("#tabs").tabs();
      });
    }
  };
})(jQuery);
