#ifndef EEZ_LVGL_UI_SCREENS_H
#define EEZ_LVGL_UI_SCREENS_H

#include <C:\SDP_DIR\project-name\managed_components\lvgl__lvgl\lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _objects_t {
    lv_obj_t *welcome_screen;
    lv_obj_t *difficulty_select;
    lv_obj_t *game;
    lv_obj_t *obj0;
    lv_obj_t *obj1;
    lv_obj_t *diff_return;
    lv_obj_t *easy_mode_btn;
    lv_obj_t *hard_mode_btn;
    lv_obj_t *obj2;
    lv_obj_t *obj3;
    lv_obj_t *btn_1;
    lv_obj_t *btn_2;
    lv_obj_t *btn_3;
    lv_obj_t *btn_4;
    lv_obj_t *btn_5;
    lv_obj_t *btn_6;
    lv_obj_t *btn_7;
    lv_obj_t *btn_8;
    lv_obj_t *btn_9;
    lv_obj_t *player_vs_player;
    lv_obj_t *player_vs_cpu;
    lv_obj_t *return_label;
    lv_obj_t *easy_mode_label;
    lv_obj_t *hard_mode_label;
    lv_obj_t *obj4;
} objects_t;

extern objects_t objects;

enum ScreensEnum {
    SCREEN_ID_WELCOME_SCREEN = 1,
    SCREEN_ID_DIFFICULTY_SELECT = 2,
    SCREEN_ID_GAME = 3,
};

void create_screen_welcome_screen();
void tick_screen_welcome_screen();

void create_screen_difficulty_select();
void tick_screen_difficulty_select();

void create_screen_game();
void tick_screen_game();

void tick_screen_by_id(enum ScreensEnum screenId);
void tick_screen(int screen_index);

void create_screens();


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_SCREENS_H*/