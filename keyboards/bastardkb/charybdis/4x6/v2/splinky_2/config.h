#pragma once

#include "config_common.h"

#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x3060
#define DEVICE_VER      0x0001
#define MANUFACTURER    BastardKB
#define PRODUCT         Charybdis 4x6
#define DESCRIPTION     4x6 split keyboard

#define MATRIX_ROWS 4
#define MATRIX_COLS 6
#define MATRIX_ROW_PINS { D7, E6, B4, B5 }
#define MATRIX_COL_PINS { F6, F7, B1, B3, B2, B6 }

#define DIODE_DIRECTION COL2ROW

#define SPLIT_HAND_PIN F4
#define SPLIT_HAND_PIN_LOW_IS_LEFT  // Comment out if your board has the opposite orientation

#define RGB_DI_PIN D3
#define RGBLED_NUM 58
#define RGB_MATRIX_SPLIT { 29, 29 }

#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES

#define TAPPING_TERM 150
#define PERMISSIVE_HOLD
#define ONESHOT_TAP_TOGGLE 2
#define ONESHOT_TIMEOUT 1000

#ifdef RGB_MATRIX_ENABLE
#   define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_SOLID_COLOR
#   define RGB_MATRIX_STARTUP_HUE 0
#   define RGB_MATRIX_STARTUP_SAT 255
#   define RGB_MATRIX_STARTUP_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS
#endif

#define DYNAMIC_KEYMAP_LAYER_COUNT 3
