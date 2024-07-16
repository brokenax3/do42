// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H


enum layers {
  _ART_BASE,
  _ART_NUM,
  _ART_CUS,
  _ART_PUNC,
  _ART_MOU,
  _ART_NAV,
  _ART_SYM,
  _CMK,
  _QWY,
  _LWR,
  _RSE,
  _FUNC,
  _ADJ,
};

#include "aliases.c"
#include "combos.c"

// copied from https://beta.docs.qmk.fm/faqs/faq_debug#which-matrix-position-is-this-keypress
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // If console is enabled, it will print the matrix position and status of each key pressed
#ifdef CONSOLE_ENABLE
    uprintf("KL: kc: 0x%04X, col: %u, row: %u, pressed: %b, time: %u, interrupt: %b, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
#endif
  return true;
}




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_ART_BASE] = LAYOUT(
  KC_NO , KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO ,                   KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO ,
  KC_NO , BASE_1_4 , BASE_1_3 , BASE_1_2 , BASE_1_1 , KC_NO ,                   KC_NO    , BASE_1_1 , BASE_1_2 , BASE_1_3 , BASE_1_4 , KC_NO ,
  KC_NO , BASE_2_4 , BASE_2_3 , BASE_2_2 , BASE_2_1 , KC_NO ,                   KC_NO    , BASE_2_1 , BASE_2_2 , BASE_2_3 , BASE_2_4 , KC_NO ,
  KC_NO , KC_NO    ,                       KC_SPC   , MO(_LWR) ,                MO(_RSE) , ENT_FUNC ,                       KC_NO    , KC_NO ,
                                                     // DPAD Left, Down, Middle, Up, Right,
                                                    KC_WH_L , KC_WH_D , KC_NO , KC_WH_U , KC_WH_R
),
[_ART_NUM] = LAYOUT(
  KC_NO , KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO ,                   KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO ,
  KC_NO , NUM_1_4  , NUM_1_3  , NUM_1_2  , NUM_1_1  , KC_NO ,                   KC_NO    , NUM_1_1  , NUM_1_2  , NUM_1_3  , NUM_1_4  , KC_NO ,
  KC_NO , NUM_2_4  , NUM_2_3  , NUM_2_2  , NUM_2_1  , KC_NO ,                   KC_NO    , NUM_2_1  , NUM_2_2  , NUM_2_3  , NUM_2_4  , KC_NO ,
  KC_NO , KC_NO    ,                       KC_SPC   , MO(_LWR) ,                MO(_RSE) , ENT_FUNC ,                       KC_NO    , KC_NO ,
                                                     // DPAD Left, Down, Middle, Up, Right,
                                                    KC_WH_L , KC_WH_D , KC_NO , KC_WH_U , KC_WH_R
),
[_ART_PUNC] = LAYOUT(
  KC_NO , KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO ,                   KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO ,
  KC_NO , PUNC_1_4 , PUNC_1_3 , PUNC_1_2 , PUNC_1_1 , KC_NO ,                   KC_NO    , PUNC_1_1 , PUNC_1_2 , PUNC_1_3 , PUNC_1_4 , KC_NO ,
  KC_NO , PUNC_2_4 , PUNC_2_3 , PUNC_2_2 , PUNC_2_1 , KC_NO ,                   KC_NO    , PUNC_2_1 , PUNC_2_2 , PUNC_2_3 , PUNC_2_4 , KC_NO ,
  KC_NO , KC_NO    ,                       KC_SPC   , MO(_LWR) ,                MO(_RSE) , ENT_FUNC ,                       KC_NO    , KC_NO ,
                                                     // DPAD Left, Down, Middle, Up, Right,
                                                    KC_WH_L , KC_WH_D , KC_NO , KC_WH_U , KC_WH_R
),
[_ART_SYM] = LAYOUT(
  KC_NO , KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO ,                   KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO ,
  KC_NO , SYM_1_4  , SYM_1_3  , SYM_1_2  , SYM_1_1  , KC_NO ,                   KC_NO    , SYM_1_1  , SYM_1_2  , SYM_1_3  , SYM_1_4  , KC_NO ,
  KC_NO , SYM_2_4  , SYM_2_3  , SYM_2_2  , SYM_2_1  , KC_NO ,                   KC_NO    , SYM_2_1  , SYM_2_2  , SYM_2_3  , SYM_2_4  , KC_NO ,
  KC_NO , KC_NO    ,                       KC_SPC   , MO(_LWR) ,                MO(_RSE) , ENT_FUNC ,                       KC_NO    , KC_NO ,
                                                     // DPAD Left, Down, Middle, Up, Right,
                                                    KC_WH_L , KC_WH_D , KC_NO , KC_WH_U , KC_WH_R
),
[_ART_MOU] = LAYOUT(
  KC_NO , KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO ,                   KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO ,
  KC_NO , MOU_1_4  , MOU_1_3  , MOU_1_2  , MOU_1_1  , KC_NO ,                   KC_NO    , MOU_1_1  , MOU_1_2  , MOU_1_3  , MOU_1_4  , KC_NO ,
  KC_NO , MOU_2_4  , MOU_2_3  , MOU_2_2  , MOU_2_1  , KC_NO ,                   KC_NO    , MOU_2_1  , MOU_2_2  , MOU_2_3  , MOU_2_4  , KC_NO ,
  KC_NO , KC_NO    ,                       KC_SPC   , MO(_LWR) ,                MO(_RSE) , ENT_FUNC ,                       KC_NO    , KC_NO ,
                                                     // DPAD Left, Down, Middle, Up, Right,
                                                    KC_WH_L , KC_WH_D , KC_NO , KC_WH_U , KC_WH_R
),

[_ART_NAV] = LAYOUT(
  KC_NO , KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO ,                   KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO ,
  KC_NO , NAV_1_4  , NAV_1_3  , NAV_1_2  , NAV_1_1  , KC_NO ,                   KC_NO    , NAV_1_1  , NAV_1_2  , NAV_1_3  , NAV_1_4  , KC_NO ,
  KC_NO , NAV_2_4  , NAV_2_3  , NAV_2_2  , NAV_2_1  , KC_NO ,                   KC_NO    , NAV_2_1  , NAV_2_2  , NAV_2_3  , NAV_2_4  , KC_NO ,
  KC_NO , KC_NO    ,                       KC_SPC   , MO(_LWR) ,                MO(_RSE) , ENT_FUNC ,                       KC_NO    , KC_NO ,
                                                     // DPAD Left, Down, Middle, Up, Right,
                                                    KC_WH_L , KC_WH_D , KC_NO , KC_WH_U , KC_WH_R
),
[_CMK] = LAYOUT(
  KC_ESC  , KC_Q         , KC_W         , KC_F         , KC_P         , KC_B     ,                   KC_J    , KC_L            , KC_U         , KC_Y         , KC_SCLN      , KC_BSPC ,
  KC_TAB  , KC_A         , KC_R         , KC_S         , KC_T         , KC_G     ,                   KC_M    , KC_N            , KC_E         , KC_I         , KC_O         , KC_QUOT ,
  KC_LSFT , KC_Z         , KC_X         , KC_C         , KC_D         , KC_V     ,                   KC_K    , KC_H            , KC_COMM      , KC_DOT       , KC_SLSH      , KC_RSFT ,
  KC_LCTL , KC_LGUI      ,                               KC_SPC       , MO(_LWR) ,                   MO(_RSE), LT(_FUNC,KC_ENT),                               KC_LALT      , KC_RGUI ,
                                                                         // DPAD Left, Down, Middle, Up, Right,
                                                                    KC_WH_L , KC_WH_D , KC_NO , KC_WH_U , KC_WH_R
  ),
[_QWY] = LAYOUT(
  KC_ESC  , KC_Q         , KC_W         , KC_E         , KC_R         , KC_T     ,                   KC_Y    , KC_U             , KC_I         , KC_O         , KC_P            , KC_BSPC ,
  KC_TAB  , KC_A         , KC_S         , KC_D         , KC_F         , KC_G     ,                   KC_H    , KC_J             , KC_K         , KC_L         , KC_SCLN         , KC_QUOT ,
  KC_LSFT , KC_Z         , KC_X         , KC_C         , KC_V         , KC_B     ,                   KC_N    , KC_M             , KC_COMM      , KC_DOT       , KC_SLSH         , KC_RSFT ,
  KC_LCTL , KC_LGUI      ,                               KC_SPC       , MO(_LWR) ,                   MO(_RSE), LT(_FUNC,KC_ENT) ,                               KC_LALT         , KC_RGUI ,
                                                                    KC_MPRV , KC_VOLD  , KC_MUTE , KC_VOLU  , KC_MNXT
  ),
[_LWR] = LAYOUT(
  KC_GRV  , KC_1    , KC_2    , KC_3    , KC_4     , KC_5    ,                                       KC_6    , KC_7    , KC_8  , KC_9     , KC_0    , KC_BSPC ,
  KC_TAB  , KC_NO   , KC_BSLS , KC_UNDS , KC_MINUS , KC_PIPE ,                                       KC_LEFT , KC_DOWN , KC_UP , KC_RIGHT , KC_NO   , KC_NO   ,
  KC_LSFT , KC_NO   , KC_CIRC , KC_EQL  , KC_PLUS  , KC_TILD ,                                       KC_NO   , KC_NO   , KC_NO , KC_NO    , KC_NO   , KC_NO   ,
  KC_LCTL , KC_LGUI ,                     KC_TRNS  , KC_TRNS ,                                       MO(_ADJ), KC_SPC  ,                    KC_LALT , KC_RGUI ,
                                                                          KC_HOME , KC_PGUP , KC_MPLY , KC_PGDN  , KC_END
  ),
[_RSE] = LAYOUT(
  KC_GRV  , KC_EXLM , KC_AT , KC_HASH  , KC_DLR  , KC_PERC ,                                         KC_CIRC , KC_AMPR , KC_ASTR , KC_LPRN , KC_RPRN , KC_DEL ,
  KC_TAB  , KC_NO   , KC_NO , KC_LCBR  , KC_RCBR , KC_GRV  ,                                         KC_NO   , KC_LBRC , KC_RBRC , KC_LPRN , KC_RPRN , KC_NO  ,
  KC_LSFT , KC_NO   , KC_NO , KC_NO    , KC_NO   , KC_NO   ,                                         KC_NO   , KC_LCBR , KC_RCBR , KC_NO   , KC_NO   , KC_NO  ,
  KC_LCTL , KC_LGUI ,                    KC_NO   , MO(_ADJ),                                         KC_TRNS , KC_SPC  ,                     KC_NO   , KC_NO  ,
                                                                          KC_MPRV , KC_VOLD  , KC_MUTE , KC_VOLU  , KC_MNXT
  ),
[_FUNC] = LAYOUT(
  KC_ESC  , KC_F1   , KC_F2  , KC_F3 , KC_F4 , KC_F5 ,                                               KC_F6   , KC_F7   , KC_F8   , KC_F9   , KC_F10 , KC_DEL ,
  KC_TAB  , KC_F11  , KC_F12 , KC_NO , KC_NO , KC_NO ,                                               KC_BTN3 , KC_BTN1 , KC_BTN2 , KC_BTN4 , KC_NO  , KC_NO  ,
  KC_LSFT , KC_NO   , KC_NO  , KC_NO , KC_NO , KC_NO ,                                               KC_WH_L , KC_WH_D , KC_WH_U , KC_WH_R , KC_NO  , KC_NO  ,
  KC_LCTL , KC_LGUI ,                  KC_NO , KC_NO ,                                               KC_NO   , KC_NO   ,                     KC_LALT, KC_NO  ,
                                                                          KC_MPRV , KC_VOLD  , KC_MUTE , KC_VOLU  , KC_MNXT
  ),

[_ADJ] = LAYOUT(
  KC_NO   , DF(_CMK), DF(_QWY), DF(_ART_BASE), KC_NO, KC_NO    ,                                     KC_NO   , KC_NO   , KC_NO   , KC_NO      , KC_NO   , KC_NO   ,
  KC_NO   , KC_NO   , KC_NO   , KC_NO    , KC_NO    , QK_BOOT  ,                                     QK_BOOT , KC_NO   , KC_NO   , KC_NO      , KC_NO   , KC_NO   ,
  KC_NO   , KC_NO   , KC_NO   , KC_NO    , KC_NO    , KC_NO    ,                                     KC_NO   , KC_NO   , KC_NO   , KC_NO      , KC_NO   , KC_NO   ,
  KC_NO   , KC_NO   ,                      KC_NO    , KC_NO    ,                                     KC_NO   , KC_NO   ,                        KC_NO   , KC_NO   ,
                                                                          KC_MPRV , KC_VOLD  , KC_MUTE , KC_VOLU  , KC_MNXT
  )
};
