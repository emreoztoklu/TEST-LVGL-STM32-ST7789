// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.0.5
// LVGL VERSION: 8.2
// PROJECT: Thermostat

#include "ui.h"
#include <stdio.h>


void fan_speed_value(lv_event_t * e){

	lv_obj_t *slider = lv_event_get_target(e);
	int32_t val = lv_slider_get_value(slider);
	printf("Fan Speed: %d\n",val);

}


