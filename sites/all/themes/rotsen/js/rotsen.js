/**
 * @file
 * dwyer.js
 *
 * Provides general enhancements to the Dwyer theme.
 */

 var Drupal = Drupal || {};

 (function($, Drupal){
	"use strict";

	/**
	* General theming fixes.
	*/
	Drupal.behaviors.rotsenThemeFixes = {
		attach: function (context) {
			// Sticky menu only for desktop
			if ($(document).width() < 769) {
				$("#navbar", context).removeClass("navbar-fixed-top");
				$("body.navbar-is-fixed-top", context).removeClass("navbar-is-fixed-top");
			}
		}
	};

	/**
   * Mobile Menu accordion
   */
	Drupal.behaviors.mobileMenuAccordion = {
		attach: function (context) {
			var documentWidth = $(document).width();
			$(document).resize(function() {
				documentWidth = $(document).width();
			});

			if (documentWidth <= 769) {
				var $menu = $('.navbar-collapse .mega > .navbar-nav', context);

				$("li.dropdown > a", $menu).click(function(event) {
					event.preventDefault();
				});

				$("li.dropdown", $menu).click(function() {
					if($(this).hasClass('active') || $(this).hasClass('active-trail')){
						var newURL = window.location.origin + $("> a", this).attr("href");
						$(location).attr("href", newURL);
					} else {
						$(this).parent().find("li.dropdown").removeClass("active active-trail");
						$(this).addClass("active");
					}
				});

			}
		}
	};

})(jQuery, Drupal);
