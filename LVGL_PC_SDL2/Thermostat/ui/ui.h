// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.0.5
// LVGL VERSION: 8.2
// PROJECT: Thermostat

#ifndef _THERMOSTAT_UI_H
#define _THERMOSTAT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if __has_include("lvgl.h")
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

extern lv_obj_t * ui_Screen1;
extern lv_obj_t * ui_Header;
extern lv_obj_t * ui_Header_Date;
extern lv_obj_t * ui_Header_Time;
extern lv_obj_t * ui_Label2;
extern lv_obj_t * ui_Arc_Group;
extern lv_obj_t * ui_Arc1;
extern lv_obj_t * ui_Temp_Bg;
extern lv_obj_t * ui_Temp_Num_Bg;
extern lv_obj_t * ui_Label_Celsius;
extern lv_obj_t * ui_Label_Slider;
extern lv_obj_t * ui_Fan_Speed_Control;

void fan_speed_value(lv_event_t * e);



LV_FONT_DECLARE(ui_font_Number);


void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
