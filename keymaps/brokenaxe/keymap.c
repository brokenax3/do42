#include QMK_KEYBOARD_H

enum do42_layers {
    _CMK,
    _QWY,
    _LWR,
    _RSE,
    _FUNC,
    _ADJ,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_CMK] = LAYOUT(
  KC_ESC,   KC_Q,   KC_W,    KC_F,    KC_P,    KC_B,                      KC_J,    KC_L,    KC_U,     KC_Y,    KC_SCLN,   KC_BSPC,
  KC_TAB,   KC_A,   KC_R,    KC_S,    KC_T,    KC_G,                      KC_M,    KC_N,    KC_E,     KC_I,    KC_O,      KC_QUOT,
  KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_D,    KC_V,                      KC_K,    KC_H, KC_COMM,   KC_DOT,    KC_SLSH,   KC_RSFT,
  KC_LCTL,   KC_LGUI,                  KC_SPC, MO(_LWR),                   MO(_RSE), LT(_FUNC, KC_ENT),         KC_LALT,   KC_RGUI,
// DPAD Left Down Middle Up Right
                                             KC_MPRV, KC_VOLD, KC_MUTE, KC_VOLU, KC_MNXT
  ),
[_QWY] = LAYOUT(
  KC_ESC,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,     KC_P,      KC_BSPC,
  KC_TAB,   KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L,     KC_SCLN,   KC_QUOT,
  KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,                      KC_N,    KC_M, KC_COMM,  KC_DOT,     KC_SLSH,   KC_RSFT,
  KC_LCTL,   KC_LGUI,                  KC_SPC, MO(_LWR),                   MO(_RSE), LT(_FUNC, KC_ENT),        KC_LALT,   KC_RGUI,
                                             KC_MPRV, KC_VOLD, KC_MUTE, KC_VOLU, KC_MNXT
  ),
[_LWR] = LAYOUT(
  KC_GRV,   KC_LBRC,  KC_7,    KC_8,    KC_9, KC_RBRC,                   KC_NO,     KC_NO,    KC_NO,    KC_NO,     KC_NO,   KC_BSPC,
  KC_TAB,   KC_DOT,   KC_4,    KC_5,    KC_6, KC_EQL,                    KC_LEFT,   KC_DOWN,  KC_UP,    KC_RIGHT,  KC_NO,   KC_NO,
  KC_LSFT,  KC_0,     KC_1,    KC_2,    KC_3, KC_BSLS,                   KC_NO,     KC_MINS,  KC_UNDS,  KC_NO,     KC_NO,   KC_NO,
  KC_LCTL,  KC_NO,                   KC_TRNS, KC_TRNS,                   MO(_ADJ),  KC_SPC,                        KC_LALT, KC_RGUI,
                                             KC_HOME, KC_PGUP, KC_MPLY, KC_PGDN, KC_END
  ),
[_RSE] = LAYOUT(
  KC_GRV,     KC_LCBR,   KC_AMPR,   KC_ASTR, KC_LPRN,  KC_RCBR,             KC_TILD,   KC_LCBR,   KC_RCBR,  KC_NO,  KC_NO,   KC_BSPC,
  KC_TAB,     KC_TILD,   KC_DLR,    KC_PERC, KC_CIRC,  KC_PLUS,             KC_MINS,   KC_LBRC,   KC_RBRC,  KC_NO,  KC_NO,   KC_NO,
  KC_LSFT,    KC_RPRN,   KC_EXLM,   KC_AT,   KC_HASH,  KC_PIPE,             KC_UNDS,   KC_LPRN,   KC_RPRN,  KC_NO,  KC_NO,   KC_NO,
  KC_LCTL,     KC_NO,                         KC_NO,  MO(_ADJ) ,             KC_TRNS, KC_SPC,                        KC_NO,   KC_NO,
                                             KC_MPRV, KC_VOLD, KC_MUTE, KC_VOLU, KC_MNXT
  ),
[_FUNC] = LAYOUT(
  KC_ESC,    KC_NO,   KC_F7,    KC_F8,  KC_F9,   KC_F10,                   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_DEL,
  KC_TAB,    KC_NO,   KC_F4,    KC_F5,  KC_F6,   KC_F11,                   KC_BTN3, KC_BTN1, KC_BTN2,  KC_BTN4, KC_NO,   KC_NO,
  KC_LSFT,   KC_NO,   KC_F1,    KC_F2,  KC_F3,   KC_F12,                   KC_WH_L, KC_WH_D, KC_WH_U,  KC_WH_R, KC_NO,   KC_NO,
  KC_LCTL,   KC_LGUI,                   KC_TRNS, KC_NO,                    KC_TRNS, KC_SPC,                     KC_LALT, KC_NO,
                                             KC_MPRV, KC_VOLD, KC_MUTE, KC_VOLU, KC_MNXT
  ),

[_ADJ] = LAYOUT(
  KC_NO,    DF(0),   DF(1),    KC_NO,  KC_NO,    KC_NO,                   KC_NO,    KC_NO,    KC_NO,  KC_NO,   KC_NO,  KC_NO,
  KC_NO,    KC_NO,   KC_NO,    KC_NO,  KC_NO,    QK_BOOT,                 QK_BOOT,  KC_NO,    KC_NO,  KC_NO,   KC_NO,  KC_NO,
  KC_NO,    KC_NO,   KC_NO,    KC_NO,  KC_NO,    KC_NO,                   KC_NO,    KC_NO,    KC_NO,  KC_NO,   KC_NO,  KC_NO,
  KC_NO,    KC_NO,                     KC_NO,    KC_NO,                   KC_NO,  KC_NO,                       KC_NO,  KC_NO,
                                             KC_MPRV, KC_VOLD, KC_MUTE, KC_VOLU, KC_MNXT

  )
};
// void keyboard_post_init_user(void) {
//   // Customise these values to desired behaviour
//   debug_enable=true;
//   // debug_matrix=true;
//   //debug_keyboard=true;
//   debug_mouse=true;
// }
