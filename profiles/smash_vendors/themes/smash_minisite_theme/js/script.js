/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - http://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {

$(document).ready(function(){

// Place your code here.
  
  var formSelectionView = $('.view-id-application_form.view-display-id-block_1');
  var formView = $('.view-id-application_form.view-display-id-page');
  
  // Toggles active class
  formSelectionView.delegate('.view-content a', 'mouseup', function(e){
    $(this).parents('.views-row').siblings('.views-row').find('.active').removeClass('active');
    $(this).addClass('active');
  });
  
  // Checks if active class should be set
  if ($('.view-content a.active', formSelectionView).length == 0) {
    var title = $('.node > header .node-title', formView).text();
    formSelectionView.find('.view-content a').filter(function(){
      return $(this).find('h2:contains(' + title + ')').length > 0;
    }).addClass('active');
  }
  
  $('#content form textarea').elastic();
  
  // Makes multiple table fields display in dynamic fashion
  $('table.field-multiple-table, table.auto-display-table').each(function(){
    var ctx = this;
    
    var consolidate = function(){
      var values = [];
      $('input[type="text"]', ctx).each(function(){
        if ($(this).val().length > 0) {
          values.push($(this).val());
        }
      });
      
      var index = 0;
      var flipped = false;
      $('input[type="text"]', ctx).each(function(){
        var newval = !!values[index] ? values[index] : '';
        $(this).val(newval);
        if (newval != '') {
          $(this).closest('tr').show();
        }
        else {
          if (!!flipped) {
            $(this).closest('tr').hide();
          }
          flipped = true;
        }
        index++;
      });
    };
    
    $('tbody tr', ctx).not('tr:first-child').hide();
    
    $('input[type="text"]', ctx).keyup(function(){
      var val = $(this).val();
      var next = $(this).closest('tr').next();
      if (val.length > 0) {
        next.show('fast');
      }
      else {
        if (next.length > 0 && next.find('input[type="text"]').val().length == 0) {
          next.hide('fast');
        }
      }
    }).blur(function(){
      consolidate();
    });
  });
  
  // Custom form checks
  var checkTableSelection = function() {
    if ($('#edit-field-table-selection-und-full-table').is(':checked')) {
      $('#edit-field-other-artist-name').show();
    }
    else {
      $('#edit-field-other-artist-name').hide();      
    }
  };
  $('#edit-field-table-selection input[type="radio"]').change(function(){
    checkTableSelection();
  });
  checkTableSelection();

});

})(jQuery, Drupal, this, this.document);
