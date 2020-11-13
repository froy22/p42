#include QMK_KEYBOARD_H

#define CK_LPRT LSFT(KC_9)              // Left Parentheses
#define CK_RPRT LSFT(KC_0)              // Right Parentheses
#define CK_LCBR LSFT(KC_LBRC)           // Left Curly Brace
#define CK_RCBR LSFT(KC_RBRC)           // Right Curly Brace

#define CK_LASLCT LALT(LSFT(KC_LEFT))   // Move and select to start of word
#define CK_RASLCT LALT(LSFT(KC_RGHT))   // Move and select to end of word

#define CK_LAMV LALT(KC_LEFT)           // Move to start of word
#define CK_RAMV LALT(KC_RGHT)           // Move to end of word
#define CK_LBMV LGUI(KC_LEFT)           // Move to start of line
#define CK_RBMV LGUI(KC_RGHT)           // Move to end of line

#define CK_SWAPP LGUI(KC_TAB)           // Switch app
#define CK_SWWNW LGUI(KC_ZKHK)          // Switch window

#define CK_UDMV LCTL(KC_UP)             // Switch desktop - Up
#define CK_DDMV LCTL(KC_DOWN)           // Switch desktop - Down
#define CK_LWMV LCTL(KC_LEFT)           // Switch desktop - Left
#define CK_RWMV LCTL(KC_RGHT)           // Switch desktop - Right

#define CK_SMBS LALT(KC_BSPC)           // Delete to start of word
#define CK_BGBS LGUI(KC_BSPC)           // Delete line
#define CK_SMDL LALT(KC_DEL)            // Delete to end of word

#define CK_UNDO LGUI(KC_Z)              // Redo
#define CK_REDO LGUI(LSFT(KC_Z))        // Undo

#define CK_BACK LGUI(KC_LBRC)           // Back
#define CK_FRWD LGUI(KC_RBRC)           // Forward

// IntelliJ Utils
#define IJ_RFCTR LSFT(KC_F6)            // Rename

// Tabs
#define CK_LTAB LGUI(LSFT(KC_LBRC))     // Next tab
#define CK_RTAB LGUI(LSFT(KC_RBRC))     // Previous tab

// Screen Capture
#define CK_CAPW LGUI(LSFT(KC_3))        // Capture whole screen
#define CK_CPYW LGUI(LSFT(LCTL(KC_3)))  // Copy whole screen
#define CK_CAPP LGUI(LSFT(KC_4))        // Capture portion of screen
#define CK_CPYP LGUI(LSFT(LCTL(KC_4)))  // Copy portion of screen
#define CK_CPRC LGUI(LSFT(KC_5))        // Record screen


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_default(
    KC_Q,    KC_W,    KC_E,    KC_R,  KC_T,          KC_Y,   KC_U,    KC_I,    KC_O,   KC_P,
    KC_A,    KC_S,    KC_D,    KC_F,  KC_G,          KC_H,   KC_J,    KC_K,    KC_L,   KC_SCLN,
    KC_Z,    KC_X,    KC_C,    KC_V,  KC_B,          KC_N,   KC_M,    KC_COMM, KC_DOT, KC_SLSH, MO(5),
    KC_LCTL, KC_LALT, KC_LGUI, MO(1), LT(7, KC_ENT), KC_SPC, KC_LSFT, MO(2),   MO(6),  MO(4),   MO(8)
  ),

  [1] = LAYOUT_default(
    KC_1,    KC_2,    KC_3,    KC_4,     KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
    KC_LCTL, KC_LALT, KC_LGUI, KC_ESC,   KC_TAB,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_BSPC,
    KC_LSFT, XXXXXXX, CK_LTAB, CK_RTAB,  XXXXXXX, XXXXXXX, KC_ENT,  XXXXXXX, KC_DOT,  KC_RSFT, XXXXXXX,
    XXXXXXX, XXXXXXX, KC_SPC,  XXXXXXX,  XXXXXXX, KC_SPC,  KC_LGUI, KC_LALT, KC_LCTL, XXXXXXX, XXXXXXX
  ),

  [2] = LAYOUT_default(
    KC_ESC,  KC_ZKHK, KC_UP,   XXXXXXX, XXXXXXX, XXXXXXX, CK_LPRT, CK_RPRT, KC_MINS, KC_EQL,
    KC_TAB,  KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, XXXXXXX, CK_LCBR, CK_RCBR, KC_QUOT, KC_BSLS,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LBRC, KC_RBRC, KC_LGUI, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, KC_LGUI, KC_LSFT, KC_SPC,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, MO(3)
  ),

  [3] = LAYOUT_default(
    RESET,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    TG(9),   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  ),

  [4] = LAYOUT_default(
    CK_CAPW, CK_CPYW,  CK_CAPP, CK_CPYP, CK_CPRC, XXXXXXX, XXXXXXX,     XXXXXXX,   XXXXXXX, XXXXXXX,
    XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BRMD,     KC_BRMU,   XXXXXXX, XXXXXXX,
    XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC__VOLDOWN, KC__VOLUP, KC_MPLY, XXXXXXX, XXXXXXX,
    XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MRWD,     KC_MFFD,   XXXXXXX, XXXXXXX, XXXXXXX
  ),

  [5] = LAYOUT_default(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, CK_BACK, CK_FRWD, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BTN1, KC_MS_U, KC_BTN2,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MS_L, KC_MS_D, KC_MS_R, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_ESC,  XXXXXXX, XXXXXXX, XXXXXXX
  ),

  [6] = LAYOUT_default(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_ESC,   CK_LBMV,   CK_RBMV,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, IJ_RFCTR, CK_LAMV,   CK_RAMV,
    KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BSPC,  CK_LASLCT, CK_RASLCT, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_DEL,  XXXXXXX,  XXXXXXX,   XXXXXXX,   XXXXXXX
  ),

  [7] = LAYOUT_default(
    CK_SWWNW, CK_BACK, CK_FRWD, KC_BSPC, KC_DEL,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, CK_BGBS,
    CK_SWAPP, CK_UDMV, CK_UDMV, CK_UNDO, CK_REDO, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, CK_SMBS,
    XXXXXXX,  CK_LWMV, CK_DDMV, CK_RWMV, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_ENT,  XXXXXXX,
    XXXXXXX,  XXXXXXX, XXXXXXX, KC_LGUI, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  ),

  [8] = LAYOUT_default(
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,
    KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, XXXXXXX, XXXXXXX, KC_LSFT, KC_LGUI, KC_LALT, KC_LCTL,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_WH_D, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_WH_R, KC_WH_U, KC_WH_L, XXXXXXX
  ),

  [9] = LAYOUT_default(
    KC_ESC,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_UP,   XXXXXXX, XXXXXXX,
    KC_ZKHK, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, KC_ENT,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, TG(9),
    KC_D,    KC_F,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_J,    KC_K,    XXXXXXX
  )
};
