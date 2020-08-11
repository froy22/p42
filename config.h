#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x6666
#define PRODUCT_ID      0x6670
#define DEVICE_VER      0x0001
#define MANUFACTURER    Pabile
#define PRODUCT         P42 Keyboard
#define DESCRIPTION     42-Key Ortho-linear keyboard

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 11

/* pin-out for PROMICRO */
#define MATRIX_ROW_PINS { D1, D0, D4, C6 }
#define MATRIX_COL_PINS { D7, E6, B4, B5, D2, D3, F7, B1, B3, B2, B6 }

/* pin-out for BLUEFRUIT 
#define MATRIX_ROW_PINS { F7, F6, F5, F4 }
#define MATRIX_COL_PINS { F1, F0, B1, B2, B3, D2, C7, D6, B7, B6, B5 }
*/

#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW
