// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.0.5
// LVGL VERSION: 8.2
// PROJECT: SquareLine_Project

#include "ui.h"
#include "ui_helpers.h"
#include "stdlib.h"
#include "stdio.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Screen1;
lv_obj_t * ui_Header;
lv_obj_t * ui_Header_Date;
lv_obj_t * ui_Header_Time;
lv_obj_t * ui_Label;
lv_obj_t * ui_Arc_Group;
lv_obj_t * ui_Arc2;
lv_obj_t * ui_Temp_Bg;
lv_obj_t * ui_Panel1;
lv_obj_t * ui_Label_Celsius;
lv_obj_t * ui_Deg;
lv_obj_t * ui_Arc_Group1;
lv_obj_t * ui_Arc1;
lv_obj_t * ui_Temp_Bg1;
lv_obj_t * ui_Panel2;
lv_obj_t * ui_Label_Celsius1;
lv_obj_t * ui_Deg1;
lv_obj_t * ui_Label_Slider;
lv_obj_t * ui_Fan_Speed_Control;

/*USER*/
uint32_t arc_val1;
uint32_t arc_val2;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 32
    #error "LV_COLOR_DEPTH should be 32bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "#error LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
static void ui_event_Arc2(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_VALUE_CHANGED) {
        _ui_arc_set_text_value(ui_Label_Celsius, ta, "", "");
        arc_val1 = atoi(lv_label_get_text(ui_Label_Celsius));
        printf("Temperature1: %d\n", arc_val1);
    }
}
static void ui_event_Arc1(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_VALUE_CHANGED) {
        _ui_arc_set_text_value(ui_Label_Celsius1, ta, "", "");
        arc_val2 = atoi(lv_label_get_text(ui_Label_Celsius1));
        printf("Temperature2: %d\n", arc_val2);
    }
}
static void ui_event_Fan_Speed_Control(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_VALUE_CHANGED) {
        fan_speed_value(e);
    }
}

///////////////////// SCREENS ////////////////////
void ui_Screen1_screen_init(void)
{

    // ui_Screen1

    ui_Screen1 = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Screen1, lv_color_hex(0x464B55), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Screen1, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Screen1, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Header

    ui_Header = lv_obj_create(ui_Screen1);

    lv_obj_set_height(ui_Header, 50);
    lv_obj_set_width(ui_Header, lv_pct(100));

    lv_obj_set_x(ui_Header, 0);
    lv_obj_set_y(ui_Header, -135);

    lv_obj_set_align(ui_Header, LV_ALIGN_CENTER);

    lv_obj_clear_flag(ui_Header, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_Header, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Header, lv_color_hex(0x14191E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Header, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Header, lv_color_hex(0x14191E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Header, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Header_Date

    ui_Header_Date = lv_label_create(ui_Header);

    lv_obj_set_width(ui_Header_Date, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Header_Date, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Header_Date, -8);
    lv_obj_set_y(ui_Header_Date, -4);

    lv_label_set_text(ui_Header_Date, "Friday,Marc 11,2022");

    lv_obj_set_style_text_color(ui_Header_Date, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Header_Date, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Header_Time

    ui_Header_Time = lv_label_create(ui_Header);

    lv_obj_set_width(ui_Header_Time, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Header_Time, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Header_Time, 10);
    lv_obj_set_y(ui_Header_Time, -3);

    lv_obj_set_align(ui_Header_Time, LV_ALIGN_TOP_RIGHT);

    lv_label_set_text(ui_Header_Time, "AM 7:45");

    lv_obj_set_style_text_color(ui_Header_Time, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Header_Time, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label

    ui_Label = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_Label, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label, 19);
    lv_obj_set_y(ui_Label, 4);

    lv_obj_set_align(ui_Label, LV_ALIGN_TOP_MID);

    lv_label_set_text(ui_Label, "Temperature\n Control");

    lv_obj_set_style_text_color(ui_Label, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Arc_Group

    ui_Arc_Group = lv_obj_create(ui_Screen1);

    lv_obj_set_width(ui_Arc_Group, 220);
    lv_obj_set_height(ui_Arc_Group, 220);

    lv_obj_set_x(ui_Arc_Group, -127);
    lv_obj_set_y(ui_Arc_Group, 3);

    lv_obj_set_align(ui_Arc_Group, LV_ALIGN_CENTER);

    lv_obj_clear_flag(ui_Arc_Group, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_Arc_Group, 360, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Arc_Group, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc_Group, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Arc_Group, lv_color_hex(0xD1E1EA), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Arc_Group, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Arc_Group, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Arc_Group, lv_color_hex(0xA7CDE5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Arc_Group, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_Arc_Group, 60, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_Arc_Group, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui_Arc_Group, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui_Arc_Group, 7, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Arc2

    ui_Arc2 = lv_arc_create(ui_Arc_Group);

    lv_obj_set_width(ui_Arc2, 190);
    lv_obj_set_height(ui_Arc2, 190);

    lv_obj_set_x(ui_Arc2, 0);
    lv_obj_set_y(ui_Arc2, 0);

    lv_obj_set_align(ui_Arc2, LV_ALIGN_CENTER);

    lv_arc_set_range(ui_Arc2, -40, 80);
    lv_arc_set_value(ui_Arc2, 50);
    lv_arc_set_bg_angles(ui_Arc2, 120, 60);

    lv_obj_add_event_cb(ui_Arc2, ui_event_Arc2, LV_EVENT_ALL, NULL);

    lv_obj_set_style_radius(ui_Arc2, 350, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Arc2, lv_color_hex(0x1E232D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Arc2, 7, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Arc2, 7, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Arc2, 7, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Arc2, 7, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_Arc2, lv_color_hex(0x0F1215), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Arc2, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_Arc2, lv_color_hex(0x36B9F6), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc2, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Arc2, 10, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Arc2, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc2, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    // ui_Temp_Bg

    ui_Temp_Bg = lv_obj_create(ui_Arc_Group);

    lv_obj_set_width(ui_Temp_Bg, 130);
    lv_obj_set_height(ui_Temp_Bg, 130);

    lv_obj_set_x(ui_Temp_Bg, 2);
    lv_obj_set_y(ui_Temp_Bg, 0);

    lv_obj_set_align(ui_Temp_Bg, LV_ALIGN_CENTER);

    lv_obj_clear_flag(ui_Temp_Bg, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_Temp_Bg, 280, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Temp_Bg, lv_color_hex(0x646464), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Temp_Bg, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Temp_Bg, lv_color_hex(0x3C414B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Temp_Bg, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Temp_Bg, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Temp_Bg, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Temp_Bg, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Temp_Bg, lv_color_hex(0x050A0F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Temp_Bg, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_Temp_Bg, 80, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_Temp_Bg, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui_Temp_Bg, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui_Temp_Bg, 30, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Panel1

    ui_Panel1 = lv_obj_create(ui_Temp_Bg);

    lv_obj_set_width(ui_Panel1, 120);
    lv_obj_set_height(ui_Panel1, 120);

    lv_obj_set_x(ui_Panel1, 0);
    lv_obj_set_y(ui_Panel1, 0);

    lv_obj_set_align(ui_Panel1, LV_ALIGN_CENTER);

    lv_obj_clear_flag(ui_Panel1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_Panel1, 200, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel1, lv_color_hex(0x0C191E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Panel1, lv_color_hex(0x191C26), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Panel1, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel1, lv_color_hex(0x5A646E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Celsius

    ui_Label_Celsius = lv_label_create(ui_Panel1);

    lv_obj_set_width(ui_Label_Celsius, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Celsius, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Celsius, -5);
    lv_obj_set_y(ui_Label_Celsius, 0);

    lv_obj_set_align(ui_Label_Celsius, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label_Celsius, "-");

    lv_obj_set_style_text_color(ui_Label_Celsius, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Celsius, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Celsius, &ui_font_number_60, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Deg

    ui_Deg = lv_label_create(ui_Panel1);

    lv_obj_set_width(ui_Deg, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Deg, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Deg, 7);
    lv_obj_set_y(ui_Deg, 7);

    lv_obj_set_align(ui_Deg, LV_ALIGN_TOP_RIGHT);

    lv_label_set_text(ui_Deg, "°");

    lv_obj_set_style_text_color(ui_Deg, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Deg, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Deg, &lv_font_montserrat_42, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Arc_Group1

    ui_Arc_Group1 = lv_obj_create(ui_Screen1);

    lv_obj_set_width(ui_Arc_Group1, 220);
    lv_obj_set_height(ui_Arc_Group1, 220);

    lv_obj_set_x(ui_Arc_Group1, 127);
    lv_obj_set_y(ui_Arc_Group1, 3);

    lv_obj_set_align(ui_Arc_Group1, LV_ALIGN_CENTER);

    lv_obj_clear_flag(ui_Arc_Group1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_Arc_Group1, 360, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Arc_Group1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc_Group1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Arc_Group1, lv_color_hex(0xD1E1EA), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Arc_Group1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Arc_Group1, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Arc_Group1, lv_color_hex(0xA7CDE5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Arc_Group1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_Arc_Group1, 60, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_Arc_Group1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui_Arc_Group1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui_Arc_Group1, 7, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Arc1

    ui_Arc1 = lv_arc_create(ui_Arc_Group1);

    lv_obj_set_width(ui_Arc1, 190);
    lv_obj_set_height(ui_Arc1, 190);

    lv_obj_set_x(ui_Arc1, 1);
    lv_obj_set_y(ui_Arc1, 0);

    lv_obj_set_align(ui_Arc1, LV_ALIGN_CENTER);

    lv_arc_set_range(ui_Arc1, 0, 50);
    lv_arc_set_value(ui_Arc1, 10);
    lv_arc_set_bg_angles(ui_Arc1, 120, 60);

    lv_obj_add_event_cb(ui_Arc1, ui_event_Arc1, LV_EVENT_ALL, NULL);

    lv_obj_set_style_radius(ui_Arc1, 350, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Arc1, lv_color_hex(0x1E232D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Arc1, lv_color_hex(0xA7CDE5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Arc1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_Arc1, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_Arc1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Arc1, 7, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Arc1, 7, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Arc1, 7, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Arc1, 7, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_Arc1, lv_color_hex(0x0F1215), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Arc1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_Arc1, lv_color_hex(0x36B9F6), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Arc1, 10, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Arc1, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc1, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    // ui_Temp_Bg1

    ui_Temp_Bg1 = lv_obj_create(ui_Arc_Group1);

    lv_obj_set_width(ui_Temp_Bg1, 130);
    lv_obj_set_height(ui_Temp_Bg1, 130);

    lv_obj_set_x(ui_Temp_Bg1, 2);
    lv_obj_set_y(ui_Temp_Bg1, 0);

    lv_obj_set_align(ui_Temp_Bg1, LV_ALIGN_CENTER);

    lv_obj_clear_flag(ui_Temp_Bg1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_Temp_Bg1, 280, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Temp_Bg1, lv_color_hex(0x646464), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Temp_Bg1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Temp_Bg1, lv_color_hex(0x3C414B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Temp_Bg1, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Temp_Bg1, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Temp_Bg1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Temp_Bg1, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Temp_Bg1, lv_color_hex(0x050A0F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Temp_Bg1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_Temp_Bg1, 80, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_Temp_Bg1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui_Temp_Bg1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui_Temp_Bg1, 30, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Panel2

    ui_Panel2 = lv_obj_create(ui_Temp_Bg1);

    lv_obj_set_width(ui_Panel2, 120);
    lv_obj_set_height(ui_Panel2, 120);

    lv_obj_set_x(ui_Panel2, 0);
    lv_obj_set_y(ui_Panel2, 0);

    lv_obj_set_align(ui_Panel2, LV_ALIGN_CENTER);

    lv_obj_clear_flag(ui_Panel2, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_Panel2, 200, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel2, lv_color_hex(0x0C191E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Panel2, lv_color_hex(0x191C26), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Panel2, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel2, lv_color_hex(0x5A646E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Celsius1

    ui_Label_Celsius1 = lv_label_create(ui_Panel2);

    lv_obj_set_width(ui_Label_Celsius1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Celsius1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Celsius1, -5);
    lv_obj_set_y(ui_Label_Celsius1, 0);

    lv_obj_set_align(ui_Label_Celsius1, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label_Celsius1, "-");



    lv_obj_set_style_text_color(ui_Label_Celsius1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Celsius1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Celsius1, &ui_font_number_60, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Deg1

    ui_Deg1 = lv_label_create(ui_Panel2);

    lv_obj_set_width(ui_Deg1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Deg1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Deg1, 7);
    lv_obj_set_y(ui_Deg1, 7);

    lv_obj_set_align(ui_Deg1, LV_ALIGN_TOP_RIGHT);

    lv_label_set_text(ui_Deg1, "°");

    lv_obj_set_style_text_color(ui_Deg1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Deg1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Deg1, &lv_font_montserrat_42, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Slider

    ui_Label_Slider = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_Label_Slider, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Slider, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Slider, -177);
    lv_obj_set_y(ui_Label_Slider, 135);

    lv_obj_set_align(ui_Label_Slider, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label_Slider, "Fan Speed\nControl");

    lv_obj_set_style_text_color(ui_Label_Slider, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Slider, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Fan_Speed_Control

    ui_Fan_Speed_Control = lv_slider_create(ui_Screen1);
    lv_slider_set_range(ui_Fan_Speed_Control, 0, 100);

    lv_obj_set_width(ui_Fan_Speed_Control, 200);
    lv_obj_set_height(ui_Fan_Speed_Control, 10);

    lv_obj_set_x(ui_Fan_Speed_Control, 6);
    lv_obj_set_y(ui_Fan_Speed_Control, -20);

    lv_obj_set_align(ui_Fan_Speed_Control, LV_ALIGN_BOTTOM_MID);

    lv_obj_add_event_cb(ui_Fan_Speed_Control, ui_event_Fan_Speed_Control, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_Fan_Speed_Control, lv_color_hex(0x0F1215), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Fan_Speed_Control, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_Fan_Speed_Control, lv_color_hex(0x1E242D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Fan_Speed_Control, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Fan_Speed_Control, 7, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Fan_Speed_Control, 2, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Fan_Speed_Control, lv_color_hex(0x37B9F5), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Fan_Speed_Control, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Fan_Speed_Control, lv_color_hex(0x1464F0), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Fan_Speed_Control, LV_GRAD_DIR_HOR, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Fan_Speed_Control, lv_color_hex(0x0F1215), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Fan_Speed_Control, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Fan_Speed_Control, 1, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_Fan_Speed_Control, LV_BORDER_SIDE_NONE, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Fan_Speed_Control, lv_color_hex(0x5F6464), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Fan_Speed_Control, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Fan_Speed_Control, lv_color_hex(0x3C424B), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Fan_Speed_Control, LV_GRAD_DIR_VER, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_Fan_Speed_Control, lv_color_hex(0x373C46), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Fan_Speed_Control, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Fan_Speed_Control, 2, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Fan_Speed_Control, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Fan_Speed_Control, lv_color_hex(0x000000), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Fan_Speed_Control, 150, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_Fan_Speed_Control, 20, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_Fan_Speed_Control, 2, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Fan_Speed_Control, 7, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Fan_Speed_Control, 7, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Fan_Speed_Control, 7, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Fan_Speed_Control, 7, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Fan_Speed_Control, lv_color_hex(0x0096FF), LV_PART_KNOB | LV_STATE_PRESSED);
    lv_obj_set_style_border_opa(ui_Fan_Speed_Control, 255, LV_PART_KNOB | LV_STATE_PRESSED);
    lv_obj_set_style_border_width(ui_Fan_Speed_Control, 5, LV_PART_KNOB | LV_STATE_PRESSED);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    lv_disp_load_scr(ui_Screen1);
}

