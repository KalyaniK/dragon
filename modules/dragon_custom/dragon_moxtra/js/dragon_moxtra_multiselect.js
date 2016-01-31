
(function($) {
  Drupal.behaviors.dragon_moxtra_multiselect = {
    attach: function(context, setting) {
      $('#edit-accounts').multiselect({
        buttonWidth: '100%',
        enableCaseInsensitiveFiltering: true,
        filterBehavior: 'both',
        maxHeight: 400
      });
    }
  };
})(jQuery);
