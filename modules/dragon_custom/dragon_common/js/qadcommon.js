// $Id:: $
/**
 * @file
 * Javascripts to handler the terms of service popup dialog
 */

(function($) {
  Drupal.behaviors.qaductermsofservice = {
    attach: function(context, setting) {
      $('#qad-uctermsofservice-popup-content-container').dialog({
        autoOpen: false,
        dialogClass: 'qad-jquery-ui-dialog',
        modal: true,
        title: setting.qadcommon['title'],
        show: 'fade',
        hide: 'fade',
        resizable: false,
        draggable: false,
        width: setting.qadcommon['tos_dialog_width'],
        height: setting.qadcommon['tos_dialog_height'],
        buttons: [
          {
            text: setting.qadcommon['agree'],
            click: function() {
              // Check the agree box
              $(':input[name="' + setting.qadcommon['tos_checkbox'] + '"]').attr('checked', true);
              $(this).dialog('close');
            }
          },
          {
            text: setting.qadcommon['disagree'],
            click: function() {
              $(':input[name="' + setting.qadcommon['tos_checkbox'] + '"]').attr('checked', false);
              $(this).dialog('close');
            }
          }
        ],
        // Work around the issue the jQuer dialog auto focus on the first link in the dialog
        open: function(event, ui) {$(this).scrollTop(0);}
      });
      $('.qad-uctermsofservice-popup-controller-container .node-readmore  a').click(function() {
        $('#qad-uctermsofservice-popup-content-container').dialog('open');
        return false;
      });
    }
  }
})(jQuery);
