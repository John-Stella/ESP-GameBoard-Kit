#ifndef EEZ_LVGL_UI_STYLES_H
#define EEZ_LVGL_UI_STYLES_H

#include <C:\SDP_DIR\project-name\managed_components\lvgl__lvgl\lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

// Style: Default
lv_style_t *get_style_default_MAIN_DEFAULT();
void add_style_default(lv_obj_t *obj);
void remove_style_default(lv_obj_t *obj);

// Style: X
lv_style_t *get_style_x_MAIN_DEFAULT();
void add_style_x(lv_obj_t *obj);
void remove_style_x(lv_obj_t *obj);

// Style: O
lv_style_t *get_style_o_MAIN_DEFAULT();
void add_style_o(lv_obj_t *obj);
void remove_style_o(lv_obj_t *obj);



#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_STYLES_H*/