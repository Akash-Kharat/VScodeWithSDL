// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.2
// LVGL version: 8.3.6
// Project name: VScodeWithSDL

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
void fan_Animation( lv_obj_t *TargetObject, int delay);


// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
void ui_event_Screen1( lv_event_t * e);
lv_obj_t *ui_Screen1;
lv_obj_t *ui_Panel1;
lv_obj_t *ui_Label1;
lv_obj_t *ui_Label2;


// SCREEN: ui_Screen2
void ui_Screen2_screen_init(void);
void ui_event_Screen2( lv_event_t * e);
lv_obj_t *ui_Screen2;
lv_obj_t *ui_Panel2;
lv_obj_t *ui_Label3;
lv_obj_t *ui_Label4;
lv_obj_t *ui_Image2;
lv_obj_t *ui_fan;
lv_obj_t *ui____initial_actions0;
const lv_img_dsc_t *ui_imgset_circle_[1] = {&ui_img_circle_7_png};
const lv_img_dsc_t *ui_imgset_circle[1] = {&ui_img_circle1_png};
const lv_img_dsc_t *ui_imgset_747467521[1] = {&ui_img_1595049576};
const lv_img_dsc_t *ui_imgset_particle_[3] = {&ui_img_particle_1_png, &ui_img_particle_2_png, &ui_img_particle_3_png};
const lv_img_dsc_t *ui_imgset_square[1] = {&ui_img_square1_png};
const lv_img_dsc_t *ui_imgset_1509942940[1] = {&ui_img_741955754};
const lv_img_dsc_t *ui_imgset_1280799780[1] = {&ui_img_732171207};
const lv_img_dsc_t *ui_imgset_uqoxj[1] = {&ui_img_uqoxj1_png};
const lv_img_dsc_t *ui_imgset_water_[2] = {&ui_img_water_1_png, &ui_img_water_2_png};

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////
void fan_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 1000);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_image_angle );
lv_anim_set_values(&PropertyAnimation_0, 0, 3600 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_linear);
lv_anim_set_delay( &PropertyAnimation_0, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_0, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_0, 0);
lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
 lv_anim_set_repeat_count(&PropertyAnimation_0, LV_ANIM_REPEAT_INFINITE );
lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
lv_anim_set_early_apply( &PropertyAnimation_0, false );
 lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_image_angle );
lv_anim_start(&PropertyAnimation_0);

}

///////////////////// FUNCTIONS ////////////////////
void ui_event_Screen1( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_SCREEN_LOADED) {
      _ui_screen_change( &ui_Screen2, LV_SCR_LOAD_ANIM_FADE_ON, 500, 5000, &ui_Screen2_screen_init);
}
}
void ui_event_Screen2( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_SCREEN_LOADED) {
      fan_Animation(ui_fan, 0);
}
}

///////////////////// SCREENS ////////////////////

void ui_init( void )
{
lv_disp_t *dispp = lv_disp_get_default();
lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), false, LV_FONT_DEFAULT);
lv_disp_set_theme(dispp, theme);
ui_Screen1_screen_init();
ui_Screen2_screen_init();
ui____initial_actions0 = lv_obj_create(NULL);
lv_disp_load_scr( ui_Screen1);
}