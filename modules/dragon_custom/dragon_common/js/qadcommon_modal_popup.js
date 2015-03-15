// $Id:: qadcommon_mod#$

//jQuery wrapper
(function($) {
    Drupal.behaviors.modal_popup = {
        attach: function(context, setting) {
        	var is_search = true;
	        $('.popup-dialog:not(.use-ajax)').click(function(){
	            $('.modal').modal('show');
	        });
	        
	        $('.popup-dialog.use-ajax').click(function(){
	            is_search = false;
	        });
	        
	        $('a.popup-dialog.use-ajax.ajax-processed').ajaxComplete(function( event, xhr, settings ) {
	        	if(is_search == false){
	        		$('.modal').modal('show');
	        	}
			});
        }
   };
})(jQuery);
