// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.2
// LVGL version: 8.3.6
// Project name: VScodeWithSDL

#include "../ui.h"

void ui_Screen2_screen_init(void)
{
ui_Screen2 = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Screen2, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Panel2 = lv_obj_create(ui_Screen2);
lv_obj_set_width( ui_Panel2, 515);
lv_obj_set_height( ui_Panel2, 179);
lv_obj_set_x( ui_Panel2, 2 );
lv_obj_set_y( ui_Panel2, 0 );
lv_obj_set_align( ui_Panel2, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_Panel2, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_border_width(ui_Panel2, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label3 = lv_label_create(ui_Panel2);
lv_obj_set_width( ui_Label3, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label3, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label3, -8 );
lv_obj_set_y( ui_Label3, -40 );
lv_obj_set_align( ui_Label3, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label3,"TRANSM    NK");
lv_obj_set_style_text_font(ui_Label3, &ui_font_RB72, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label4 = lv_label_create(ui_Panel2);
lv_obj_set_width( ui_Label4, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label4, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label4, -115 );
lv_obj_set_y( ui_Label4, 22 );
lv_obj_set_align( ui_Label4, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label4,"");
lv_obj_set_style_text_font(ui_Label4, &ui_font_RB32, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Image2 = lv_img_create(ui_Screen2);
lv_img_set_src(ui_Image2, &ui_img_974852030);
lv_obj_set_width( ui_Image2, LV_SIZE_CONTENT);  /// 24
lv_obj_set_height( ui_Image2, LV_SIZE_CONTENT);   /// 24
lv_obj_set_x( ui_Image2, 94 );
lv_obj_set_y( ui_Image2, -43 );
lv_obj_set_align( ui_Image2, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image2, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image2, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_fan = lv_img_create(ui_Screen2);
lv_img_set_src(ui_fan, &ui_img_974849980);
lv_obj_set_width( ui_fan, LV_SIZE_CONTENT);  /// 64
lv_obj_set_height( ui_fan, LV_SIZE_CONTENT);   /// 64
lv_obj_set_x( ui_fan, 93 );
lv_obj_set_y( ui_fan, -44 );
lv_obj_set_align( ui_fan, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_fan, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_fan, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

lv_obj_add_event_cb(ui_Screen2, ui_event_Screen2, LV_EVENT_ALL, NULL);

}
