// $Id: beautytips.js,v 1.2.2.5 2010/06/16 20:35:47 kleinmp Exp $

/**
 * Defines the default beautytip and adds them to the content on the page
 */ 
Drupal.behaviors.beautytips = function() {
  jQuery.bt.options.closeWhenOthersOpen = true;
  beautytips = Drupal.settings.beautytips;

  // Add the the tooltips to the page
  for (var key in beautytips) {
    // Build array of options that were passed to beautytips_add_beautyips
    var bt_options = new Array();
    if (beautytips[key]['list']) {
      for ( var k = 0; k < beautytips[key]['list'].length; k++) {
        bt_options[beautytips[key]['list'][k]] = beautytips[key][beautytips[key]['list'][k]];
      }
    }
    if (beautytips[key]['cssSelect']) {
      // Run any java script that needs to be run when the page loads
      if (beautytips[key]['contentSelector'] && beautytips[key]['preEval']) {
        $(beautytips[key]['cssSelect']).each(function() {
          eval(beautytips[key]['contentSelector']);
        });
      }
      if (beautytips[key]['text']) {
        $(beautytips[key]['cssSelect']).each(function() {
          $(this).bt(beautytips[key]['text'], bt_options);
        });
      }
      else if (beautytips[key]['ajaxPath']) {
        $(beautytips[key]['cssSelect']).each(function() {
          $(this).bt(bt_options);
          if (beautytips[key]['ajaxDisableLink']) {
            $(beautytips[key]['ajaxDisableLink']).click(function() {
              return false;
            });
          }
        });
      }
      else { 
        $(beautytips[key]['cssSelect']).each(function() {
          $(this).bt(bt_options);
        });
      }
    }
    bt_options.length = 0;
  }
}
