#pragma once

//#define USE_MATRIX_I2C

/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS



#define TAPPING_FORCE_HOLD
#define TAPPING_TERM 200
#define TAPPING_TOGGLE 2 

#define MOUSEKEY_DELAY 0
#define MOUSEKEY_INTERVAL 16
#define MOUSEKEY_MOVE_DELTA 5
#define MOUSEKEY_MAX_SPEED 7
#define MOUSEKEY_TIME_TO_MAX 60
#define MOUSEKEY_WHEEL_DELAY 0
#define MOUSEKEY_WHEEL_INTERVAL 200
#define MOUSEKEY_WHEEL_MAX_SPEED 1
#define MOUSEKEY_WHEEL_TIME_TO_MAX 70


#ifdef OLED_ENABLE
#    define SPLIT_LAYER_STATE_ENABLE
#    define SPLIT_LED_STATE_ENABLE
#    define SPLIT_MODS_ENABLE
#    define SPLIT_WPM_ENABLE
#    define SPLIT_OLED_ENABLE
#    define OLED_FONT_H "keyboards/crkbd/keymaps/soundmonster/glcdfont.c"
#    define OLED_DISABLE_TIMEOUT
#    define OLED_TIMEOUT 30000
#    define OLED_BRIGHTNESS 200
#    define OLED_FADE_OUT
#    define OLED_FADE_OUT_INTERVAL 15
#endif 