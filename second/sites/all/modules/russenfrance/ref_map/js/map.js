/**
 * @file
 * Some basic behaviors and utility functions for Views.
 */
//(function ($) {

/**
 * jQuery UI tabs, Views integration component
 */
Drupal.behaviors.viewsTabs = {
  attach: function (context) {
    var MAP_WIDTH  = 585;
    var MAP_HEIGHT = 555;
  
    var mapContainer = document.getElementById("ref-map");
    var map = new Raphael(mapContainer, MAP_WIDTH, MAP_HEIGHT);

    var style = {
      fill: "#3e78ac",
      stroke: "#ddd",
      "stroke-width": 1,
      "stroke-linejoin": "round",
      cursor: "pointer"
    };
    
    var animationSpeed = 200;
    var hoverStyle = {
      fill: "#114C80"
    }
    
    var regions = {};
    for(var i in Drupal.settings.ref_map.regions) {
      regions[i] = map.path(Drupal.settings.ref_map.regions[i].coordinates);
      regions[i].attr(style);
      
      (function (region, key) {
          //departments.attr(style);
          
          region.attr({
            href: Drupal.settings.ref_map.regions[i].url, 
            title: Drupal.settings.ref_map.regions[i].name
          });

          region[0].addEventListener("mouseover", function() {
              region.animate(hoverStyle, animationSpeed);
              jQuery('#ref-map-wrapper .regions-names a[data-region='+key+']').addClass('active');
          }, true);

          region[0].addEventListener("mouseout", function() {
            region.animate(style, animationSpeed);
            jQuery('#ref-map-wrapper .regions-names a[data-region='+key+']').removeClass('active');
          }, true);
          
          //jQuery('#ref-map-wrapper .regions-names a[data-region="'+key+'"]').on('mouseenter mouseover', function(e) {
            ////console.log(jQuery('#ref-map a[href="'+jQuery(this).attr('href')+'"]').html());
            //console.log(map));
            ////console.log('hover: '+key);
          //});

      })(regions[i], i);
    }
    
    //// this staff for map with islands
    //var newWeight = 1900;
    //var newHeight = 1900;
    //map.setViewBox(0, 0, newWeight, newHeight);



    //map.setSize(newWeight, newHeight);
    //map.canvas.setAttribute('preserveAspectRatio', 'none');
    
    //jQuery('#ref-map').attr('width', newWeight).attr('height', newHeight);
    
    //jQuery('#ref-map-wrapper .regions-names a').on('mouseenter mouseleave', function(e) {
      ////console.log('#ref-map a[href="'+jQuery(this).attr('href')+'"]');
      ////console.log(jQuery('#ref-map a[href="'+jQuery(this).attr('href')+'"]').html());
      //console.log(jQuery('#ref-map a').html());
      ////console.log(map.events);
    //});

  }
};

//})(jQuery);




