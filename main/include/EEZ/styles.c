#include "styles.h"
#include "images.h"
#include "fonts.h"

#include "ui.h"
#include "screens.h"

//
// Style: Default
//

void init_style_default_MAIN_DEFAULT(lv_style_t *style) {
    lv_style_set_bg_color(style, lv_color_hex(0xff2196f3));
};

lv_style_t *get_style_default_MAIN_DEFAULT() {
    static lv_style_t *style;
    if (!style) {
        style = lv_malloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_default_MAIN_DEFAULT(style);
    }
    return style;
};

void add_style_default(lv_obj_t *obj) {
    (void)obj;
    lv_obj_add_style(obj, get_style_default_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

void remove_style_default(lv_obj_t *obj) {
    (void)obj;
    lv_obj_remove_style(obj, get_style_default_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

//
// Style: X
//

void init_style_x_MAIN_DEFAULT(lv_style_t *style) {
    lv_style_set_bg_color(style, lv_color_hex(0xfff32121));
};

lv_style_t *get_style_x_MAIN_DEFAULT() {
    static lv_style_t *style;
    if (!style) {
        style = lv_malloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_x_MAIN_DEFAULT(style);
    }
    return style;
};

void add_style_x(lv_obj_t *obj) {
    (void)obj;
    lv_obj_add_style(obj, get_style_x_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

void remove_style_x(lv_obj_t *obj) {
    (void)obj;
    lv_obj_remove_style(obj, get_style_x_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

//
// Style: O
//

void init_style_o_MAIN_DEFAULT(lv_style_t *style) {
    lv_style_set_bg_color(style, lv_color_hex(0xff56f321));
};

lv_style_t *get_style_o_MAIN_DEFAULT() {
    static lv_style_t *style;
    if (!style) {
        style = lv_malloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_o_MAIN_DEFAULT(style);
    }
    return style;
};

void add_style_o(lv_obj_t *obj) {
    (void)obj;
    lv_obj_add_style(obj, get_style_o_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

void remove_style_o(lv_obj_t *obj) {
    (void)obj;
    lv_obj_remove_style(obj, get_style_o_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

//
//
//

void add_style(lv_obj_t *obj, int32_t styleIndex) {
    typedef void (*AddStyleFunc)(lv_obj_t *obj);
    static const AddStyleFunc add_style_funcs[] = {
        add_style_default,
        add_style_x,
        add_style_o,
    };
    add_style_funcs[styleIndex](obj);
}

void remove_style(lv_obj_t *obj, int32_t styleIndex) {
    typedef void (*RemoveStyleFunc)(lv_obj_t *obj);
    static const RemoveStyleFunc remove_style_funcs[] = {
        remove_style_default,
        remove_style_x,
        remove_style_o,
    };
    remove_style_funcs[styleIndex](obj);
}

