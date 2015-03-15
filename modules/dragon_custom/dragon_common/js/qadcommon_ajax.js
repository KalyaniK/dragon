// $Id: qadcommon_ajax.js 3736 2015-01-12 02:05:54Z mjz $

//jQuery wrapper
(function($) {
  $( document ).ajaxStart(function() {
    // disable submit button when ajax req starts
    $("input[type='submit']").prop('disabled','disabled');
  });

  $( document ).ajaxStop(function() {
    // enable submit button when all Ajax requests have completed
    $("input[type='submit']").prop('disabled',false);
  });
})(jQuery);
