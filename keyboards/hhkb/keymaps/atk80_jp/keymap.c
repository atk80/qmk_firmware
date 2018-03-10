#include "hhkb.h"

#define _______ KC_TRNS

/* Ctrl+Alt+L to lock screen */
#define LCK LALT(LCTL(KC_L))
/* TMUX leader key */
#define TMXL LCTL(KC_A)

// Layers
#define BASE 0
#define LOWER 1
#define RAISE 2

/* Layer 0: HHKB JP
 * ,-----------------------------------------------------------.
 * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9| 10|  -|  =| \ |Bsp|
 * |-----------------------------------------------------------|
 * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|     |
 * |------------------------------------------------------` Ent|
 * |Ctrl  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|  `|    |
 * |-----------------------------------------------------------|
 * |Shft   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|PgD| Up|PgU|
 * |-----------------------------------------------------------|
 * |Lwr||Lck|Alt|Cmd|Lwr|   Spc   |Rse|TMX|Alt|Rse||Lft|Dwn|Rgh|
 * `-----------------------------------------------------------'
 */

/* Layer 1: HHKB mode (HHKB Fn)
 * ,-----------------------------------------------------------.
 * |Pwr| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
 * |-----------------------------------------------------------|
 * |Caps |   |   |   |   |   |   |   |Psc|Slk|Pus|Up |   |     |
 * |------------------------------------------------------`    |
 * |      |VoD|VoU|Mut|Ply|   |Lft|Dwn| Up|Rgh|   |   |   |    |
 * |-----------------------------------------------------------|
 * |       |   |   |   |   |   |   |   |   |   |   |   |   |   |
 * |-----------------------------------------------------------|
 * |   ||   |   |   |   |         |   |   |   |   ||   |   |   |
 * `-----------------------------------------------------------'
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = KEYMAP_JP(
    KC_ESC,   KC_1,    KC_2,    KC_3,    KC_4,     KC_5,    KC_6,    KC_7,     KC_8,    KC_9,    KC_0, KC_MINS,  KC_EQL, KC_BSLS,  KC_BSPC,
    KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,     KC_T,    KC_Y,    KC_U,     KC_I,    KC_O,    KC_P, KC_LBRC, KC_RBRC,
    KC_LCTL,  KC_A,    KC_S,    KC_D,    KC_F,     KC_G,    KC_H,    KC_J,     KC_K,    KC_L, KC_SCLN, KC_QUOT,  KC_GRV, KC_ENT,
    KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,     KC_B,    KC_N,    KC_M,  KC_COMM,  KC_DOT, KC_SLSH, KC_PGDN,   KC_UP, KC_PGUP,
    MO(LOWER), LCK, KC_LGUI, KC_LALT,MO(LOWER),         KC_SPC,    MO(RAISE),    TMXL, KC_RALT,   MO(RAISE),  KC_LEFT, KC_DOWN, KC_RGHT
  ),

  [LOWER] = KEYMAP_JP(
    KC_PWR,    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12, _______,  KC_DEL,
    KC_CAPS, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, KC_VOLD, KC_VOLU, KC_MUTE, KC_MPLY, _______, KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_HOME, _______,
    _______, _______, _______, _______, _______,     KC_BSPC     , _______, _______, _______, _______, _______,  KC_END, _______
  ),

  [RAISE] = KEYMAP_JP(
    KC_PWR,    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12, _______,  KC_DEL,
    KC_CAPS, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, KC_VOLD, KC_VOLU, KC_MUTE, KC_MPLY, _______, KC_HOME, KC_PGDN, KC_PGUP,  KC_END, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,     _______     , _______, _______, _______, _______, _______, _______, _______
  )
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t macro_id, uint8_t opt) {
  return MACRO_NONE;
}

const uint16_t PROGMEM fn_actions[] = {

};
