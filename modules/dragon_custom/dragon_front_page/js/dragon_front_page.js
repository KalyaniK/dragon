// $Id:: qad_ppa_select.js 2633 2014-03-26 02:34:39Z mjz                       $

//jQuery wrapper
(function($) {
  Drupal.behaviors.auto_adjust_silder_height = {
    attach: function(context, setting) {
      function resize_images() {
      	var images = $('.flexslider img');
        var browser_width = $(window).width(),
            browser_height = $(window).height() - $('#toolbar').height() - $('#header-top').height() - $('#main-navigation').height();
        if( browser_height/1080 >= browser_width/1920) {
          images.height(browser_height).width('auto');
        } 
        else{
          images.width(browser_width).height('auto');
        }
      }
      $(window).bind('resize', function() { resize_images(); });
      $( document ).ready(resize_images);
    }
  };
})(jQuery);