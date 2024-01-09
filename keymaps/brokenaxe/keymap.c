#include QMK_KEYBOARD_H

/* 		 Layers 		 */
enum do42_layers {
    _CMK,
    _QWY,
    _LWR,
    _RSE,
    _FUNC,
    _ADJ,
};

/* 		 Keymap 		 */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_CMK] = LAYOUT(
  KC_ESC  , KC_Q         , KC_W         , KC_F         , KC_P         , KC_B     ,                   KC_J    , KC_L            , KC_U         , KC_Y         , KC_SCLN      , KC_BSPC ,
  KC_TAB  , LGUI_T(KC_A) , LALT_T(KC_R) , LSFT_T(KC_S) , LCTL_T(KC_T) , KC_G     ,                   KC_M    , RCTL_T(KC_N)    , RSFT_T(KC_E) , RALT_T(KC_I) , RGUI_T(KC_O) , KC_QUOT ,
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
  KC_GRV  , KC_1          , KC_2            , KC_3            , KC_4             , KC_5    ,         KC_6    , KC_7            , KC_8          , KC_9             , KC_0          , KC_BSPC ,
  KC_TAB  , LGUI_T(KC_NO) , LALT_T(KC_BSLS) , LSFT_T(KC_UNDS) , LCTL_T(KC_MINUS) , KC_PIPE ,         KC_LEFT , RCTL_T(KC_DOWN) , RSFT_T(KC_UP) , RALT_T(KC_RIGHT) , RGUI_T(KC_NO) , KC_NO   ,
  KC_LSFT , KC_NO         , KC_CIRC         , KC_EQL          , KC_PLUS          , KC_TILD ,         KC_NO   , KC_NO           , KC_NO         , KC_NO            , KC_NO         , KC_NO   ,
  KC_LCTL , KC_LGUI       ,                                     KC_TRNS          , KC_TRNS ,         MO(_ADJ), KC_SPC          ,                                    KC_LALT       , KC_RGUI ,
                                                                          KC_HOME , KC_PGUP , KC_MPLY , KC_PGDN  , KC_END
  ),
[_RSE] = LAYOUT(
  KC_GRV  , KC_EXLM       , KC_AT         , KC_HASH         , KC_DLR          , KC_PERC ,            KC_CIRC , KC_AMPR         , KC_ASTR         , KC_LPRN         , KC_RPRN         , KC_DEL ,
  KC_TAB  , LGUI_T(KC_NO) , LALT_T(KC_NO) , LSFT_T(KC_LCBR) , LCTL_T(KC_RCBR) , KC_GRV  ,            KC_NO   , RCTL_T(KC_LBRC) , RSFT_T(KC_RBRC) , RALT_T(KC_LPRN) , RGUI_T(KC_RPRN) , KC_NO  ,
  KC_LSFT , KC_NO         , KC_NO         , KC_NO           , KC_NO           , KC_NO   ,            KC_NO   , KC_LCBR         , KC_RCBR         , KC_NO           , KC_NO           , KC_NO  ,
  KC_LCTL , KC_LGUI       ,                                   KC_NO           , MO(_ADJ),            KC_TRNS , KC_SPC          ,                                     KC_NO           , KC_NO  ,
                                                                          KC_MPRV , KC_VOLD  , KC_MUTE , KC_VOLU  , KC_MNXT
  ),
[_FUNC] = LAYOUT(
  KC_ESC  , KC_F1          , KC_F2          , KC_F3         , KC_F4         , KC_F5 ,                KC_F6   , KC_F7           , KC_F8           , KC_F9           , KC_F10        , KC_DEL ,
  KC_TAB  , LGUI_T(KC_F11) , LALT_T(KC_F12) , LSFT_T(KC_NO) , LCTL_T(KC_NO) , KC_NO ,                KC_BTN3 , RCTL_T(KC_BTN1) , RSFT_T(KC_BTN2) , RALT_T(KC_BTN4) , RGUI_T(KC_NO) , KC_NO  ,
  KC_LSFT , KC_NO          , KC_NO          , KC_NO         , KC_NO         , KC_NO ,                KC_WH_L , KC_WH_D         , KC_WH_U         , KC_WH_R         , KC_NO         , KC_NO  ,
  KC_LCTL , KC_LGUI        ,                                  KC_NO         , KC_NO ,                KC_NO   , KC_NO           ,                                     KC_LALT       , KC_NO  ,
                                                                          KC_MPRV , KC_VOLD  , KC_MUTE , KC_VOLU  , KC_MNXT
  ),

[_ADJ] = LAYOUT(
  KC_NO   , DF(0)   , DF(1)   , KC_NO    , KC_NO    , KC_NO    ,                 KC_NO   , KC_NO   , KC_NO   , KC_NO      , KC_NO   , KC_NO   ,
  KC_NO   , KC_NO   , KC_NO   , KC_NO    , KC_NO    , QK_BOOT  ,                 QK_BOOT , KC_NO   , KC_NO   , KC_NO      , KC_NO   , KC_NO   ,
  KC_NO   , KC_NO   , KC_NO   , KC_NO    , KC_NO    , KC_NO    ,                 KC_NO   , KC_NO   , KC_NO   , KC_NO      , KC_NO   , KC_NO   ,
  KC_NO   , KC_NO   ,                      KC_NO    , KC_NO    ,                 KC_NO   , KC_NO   ,                        KC_NO   , KC_NO   ,
                                                                    KC_MPRV , KC_VOLD  , KC_MUTE , KC_VOLU  , KC_MNXT
  )
};
/* 		 Debug Stuff 		 */
// void keyboard_post_init_user(void) {
//   // Customise these values to desired behaviour
//   debug_enable=true;
//   // debug_matrix=true;
//   //debug_keyboard=true;
//   debug_mouse=true;
// }
