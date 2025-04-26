#ifndef EEZ_LVGL_UI_VARS_H
#define EEZ_LVGL_UI_VARS_H

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

// enum declarations

typedef enum {
    Player_state_Red = 0,
    Player_state_Green = 1
} Player_state;

// Flow global variables

enum FlowGlobalVariables {
    FLOW_GLOBAL_VARIABLE_PLAYER = 0,
    FLOW_GLOBAL_VARIABLE_BTN_LOCK_1 = 1,
    FLOW_GLOBAL_VARIABLE_BTN_LOCK_2 = 2,
    FLOW_GLOBAL_VARIABLE_BTN_LOCK_3 = 3,
    FLOW_GLOBAL_VARIABLE_BTN_LOCK_4 = 4,
    FLOW_GLOBAL_VARIABLE_BTN_LOCK_5 = 5,
    FLOW_GLOBAL_VARIABLE_BTN_LOCK_6 = 6,
    FLOW_GLOBAL_VARIABLE_BTN_LOCK_7 = 7,
    FLOW_GLOBAL_VARIABLE_BTN_LOCK_8 = 8,
    FLOW_GLOBAL_VARIABLE_BTN_LOCK_9 = 9,
    FLOW_GLOBAL_VARIABLE_USE_MODEL = 10,
    FLOW_GLOBAL_VARIABLE_O_WIN_TAG = 11,
    FLOW_GLOBAL_VARIABLE_X_WIN_TAG = 12
};

// Native global variables

extern int32_t get_var_btn_state_1();
extern void set_var_btn_state_1(int32_t value);
extern int32_t get_var_btn_state_2();
extern void set_var_btn_state_2(int32_t value);
extern int32_t get_var_btn_state_3();
extern void set_var_btn_state_3(int32_t value);
extern int32_t get_var_btn_state_4();
extern void set_var_btn_state_4(int32_t value);
extern int32_t get_var_btn_state_5();
extern void set_var_btn_state_5(int32_t value);
extern int32_t get_var_btn_state_6();
extern void set_var_btn_state_6(int32_t value);
extern int32_t get_var_btn_state_7();
extern void set_var_btn_state_7(int32_t value);
extern int32_t get_var_btn_state_8();
extern void set_var_btn_state_8(int32_t value);
extern int32_t get_var_btn_state_9();
extern void set_var_btn_state_9(int32_t value);
extern int32_t get_var_maj_ver();
extern void set_var_maj_ver(int32_t value);
extern int32_t get_var_min_ver();
extern void set_var_min_ver(int32_t value);
extern int32_t get_var_winner();
extern void set_var_winner(int32_t value);
extern bool get_var_use_easy_model();
extern void set_var_use_easy_model(bool value);
extern bool get_var_use_hard_model();
extern void set_var_use_hard_model(bool value);
extern bool get_var_cpu_move_complete();
extern void set_var_cpu_move_complete(bool value);
extern bool get_var_reqst_1();
extern void set_var_reqst_1(bool value);
extern bool get_var_reqst_2();
extern void set_var_reqst_2(bool value);
extern bool get_var_reqst_3();
extern void set_var_reqst_3(bool value);
extern bool get_var_reqst_4();
extern void set_var_reqst_4(bool value);
extern bool get_var_reqst_5();
extern void set_var_reqst_5(bool value);
extern bool get_var_reqst_6();
extern void set_var_reqst_6(bool value);
extern bool get_var_reqst_7();
extern void set_var_reqst_7(bool value);
extern bool get_var_reqst_8();
extern void set_var_reqst_8(bool value);
extern bool get_var_reqst_9();
extern void set_var_reqst_9(bool value);
extern bool get_var_reqst_cpu();
extern void set_var_reqst_cpu(bool value);


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_VARS_H*/