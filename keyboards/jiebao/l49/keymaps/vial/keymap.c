// Copyright 2024 SDK (@sdk66)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "rgb_record/rgb_record.h"

enum layers {
    _L0 = 0,
    _L1,
    _L2,
    _L3,
    _L4,
    _L5,
    _L6,
    _LE
};

#define R(kc) RSFT(kc)
#define L(kc) LSFT(kc)
#define G(kc) LGUI(kc)

#ifndef KC_GESC
#define KC_GESC QK_GRAVE_ESCAPE
#endif

#define TS(layer) LT(layer, KC_SPC)
#define TGU(layer) LT(layer, KC_LGUI)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_L0] = LAYOUT(
        KC_GESC,  KC_Q,      KC_W,      KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,      KC_P,     KC_LBRC,  KC_RBRC, KC_BSPC,
        KC_TAB,   KC_A,      KC_S,      KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,      KC_SCLN,  KC_QUOT,           KC_ENT,
        KC_LSFT,  KC_Z,      KC_X,      KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,    KC_SLSH,                     MO(_L5),
        KC_LCTL,  TGU(_L6),  KC_LALT,   KC_SPC,   KC_SPC,   MO(_LE),            TS(_L3),  MO(_L2),  MO(_L1),   MO(_L4),                     KC_DEL
        ),
    [_L1] = LAYOUT(
        KC_GESC , KC_Q,      KC_W,      KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,      KC_P,     KC_UP,    _______, KC_BSPC,
        KC_TAB,   KC_A,      KC_S,      KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,      KC_LEFT,  KC_RIGHT,          KC_ENT,
        KC_LSFT,  KC_Z,      KC_X,      KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,    KC_DOWN,                     MO(_L5),
        KC_LCTL,  MO(_L6),   KC_LALT,   KC_SPC,   KC_SPC,   _______,            TS(_L3),  MO(_L2),  _______,   MO(_L4),                     KC_DEL
        ),

    [_L2] = LAYOUT(
        KC_ESC,   KC_F1,     KC_F2,     KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,     KC_F10,   KC_F11,   KC_F12,  KC_BSPC,
        KC_TAB,   KC_A,      KC_S,      KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,      KC_SCLN,  KC_QUOT,           KC_ENT,
        KC_LSFT,  KC_Z,      KC_X,      KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,    KC_SLSH,                     KC_RSFT,
        KC_LCTL,  KC_LCMD,   KC_LALT,   KC_SPC,   KC_SPC,   _______,            KC_SPC,   _______,  KC_RCMD,   KC_RCTL,                     KC_DEL
        ),

    [_L3] = LAYOUT(
        KC_GRV,   KC_1,      KC_2,      KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,      KC_0,     KC_MINS,  KC_EQL,  KC_MINS,
        KC_TAB,   KC_A,      KC_S,      KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,      KC_SCLN,  KC_QUOT,           R(KC_BSLS),
        KC_LSFT,  KC_Z,      KC_X,      KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,    KC_SLSH,                     KC_RSFT,
        KC_LCTL,  KC_LCMD,   KC_LALT,   KC_SPC,   KC_SPC,   _______,            _______,  KC_RALT,  KC_RCMD,   KC_RCTL,                     KC_DEL
        ),

    [_L4] = LAYOUT(
        R(KC_ESC) ,  R(KC_Q),      R(KC_W),      R(KC_E),     R(KC_R),     R(KC_T),     R(KC_Y),     R(KC_U),     R(KC_I),     R(KC_O),      R(KC_P),     R(KC_LBRC),  R(KC_RBRC), R(KC_BSPC),
        R(KC_TAB),   R(KC_A),      R(KC_S),      R(KC_D),     R(KC_F),     R(KC_G),     R(KC_H),     R(KC_J),     R(KC_K),     R(KC_L),      R(KC_SCLN),  R(KC_QUOT),              R(KC_ENT),
        R(KC_LSFT),  R(KC_Z),      R(KC_X),      R(KC_C),     R(KC_V),     R(KC_B),     R(KC_N),     R(KC_M),     R(KC_COMM),  R(KC_DOT),    R(KC_SLSH),                           R(KC_RSFT),
        R(KC_LCTL),  R(KC_LCMD),   R(KC_LALT),   R(KC_SPC),   R(KC_SPC),   _______,                  R(KC_SPC),   R(KC_RALT),  R(KC_RCMD),   R(KC_RCTL),                           R(KC_DEL)
        ),

    [_L5] = LAYOUT(
        R(KC_GRV) ,  R(KC_1),      R(KC_2),      R(KC_3),     R(KC_4),     R(KC_5),     R(KC_6),     R(KC_7),     R(KC_8),     R(KC_9),      R(KC_0),     R(KC_MINS),  R(KC_EQL),  R(KC_MINS),
        R(KC_TAB),   R(KC_A),      R(KC_S),      R(KC_D),     R(KC_F),     R(KC_G),     R(KC_H),     R(KC_J),     R(KC_K),     R(KC_L),      R(KC_SCLN),  R(KC_QUOT),              KC_BSLS,
        R(KC_LSFT),  R(KC_Z),      R(KC_X),      R(KC_C),     R(KC_V),     R(KC_B),     R(KC_N),     R(KC_M),     R(KC_COMM),  R(KC_DOT),    R(KC_SLSH),                           _______,
        R(KC_LCTL),  R(KC_LCMD),   R(KC_LALT),   R(KC_SPC),   R(KC_SPC),   _______,     R(KC_SPC),   R(KC_RALT),  R(KC_RCMD),  R(KC_RCTL),                                         R(KC_DEL)
        ),

    [_L6] = LAYOUT(
        G(KC_ESC),   G(KC_Q),      G(KC_W),      G(KC_E),     G(KC_R),     G(KC_T),     G(KC_Y),     G(KC_U),     G(KC_I),     G(KC_O),      G(KC_P),     KC_PGUP, _______,        G(KC_BSPC),
        G(KC_TAB),   G(KC_A),      G(KC_S),      G(KC_D),     G(KC_F),     G(KC_G),     G(KC_H),     G(KC_J),     G(KC_K),     G(KC_L),      KC_HOME,     KC_END,                  G(KC_ENT),
        G(KC_LSFT),  G(KC_Z),      G(KC_X),      G(KC_C),     G(KC_V),     G(KC_B),     G(KC_N),     G(KC_M),     G(KC_COMM),  G(KC_DOT),    KC_PGDN,                              G(KC_RSFT),
        G(KC_LCTL),  _______,      G(KC_LALT),   G(KC_SPC),   G(KC_SPC),   _______,                  G(KC_SPC),   G(KC_RALT),  _______,      G(KC_RCTL),                           G(KC_DEL)
        ),

    [_LE] = LAYOUT(
        TO(_L0),  _______,   _______,   _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,   RGB_VAD,  RGB_VAI, QK_BOOT,
        KC_USB,   KC_BT1,    KC_BT2,    KC_BT3,   KC_2G4,   _______,  _______,  _______,  _______,  _______,   _______,   _______,           RGB_TOG,
        _______,  _______,   ________,  KC_CAPS,  _______,  _______,   _______, _______,  _______,  _______,   _______,                      UG_NEXT,
        ________, ________,  ________,  TO(_L5),  _______, ________,            TO(_L3),  TO(_L2),  TO(_L1),   TO(_L4),                      _______
        ),
};

const uint16_t PROGMEM rgbrec_default_effects[RGBREC_CHANNEL_NUM][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        ________, ________,  HS_GREEN,  ________, ________, ________, ________, ________, ________, ________,  ________,  ________, ________,________,
        ________, HS_GREEN,  HS_GREEN,  HS_GREEN, ________, ________, ________, ________, ________, ________,  ________,  ________,          ________,
        ________, ________,  ________,  ________, ________, ________, ________, ________, ________, ________,  HS_GREEN,                     ________,
        ________, ________,  ________,  ________, ________, ________,           ________, HS_GREEN, HS_GREEN,  HS_GREEN,                     ________
        ),

    [1] = LAYOUT(
        ________, ________,  HS_RED,    ________, ________, ________, ________, ________, ________, ________,  ________,  ________, ________,________,
        ________, HS_RED,    HS_RED,    HS_RED,   ________, ________, ________, ________, ________, ________,  ________,  ________,          ________,
        ________, ________,  ________,  ________, ________, ________, ________, ________, ________, ________,  HS_RED,                       ________,
        ________, ________,  ________,  ________, ________, ________,           ________, HS_RED,   HS_RED,    HS_RED,                       ________
        ),

    [2] = LAYOUT(
        ________, ________,  HS_BLUE,   ________, ________, ________, ________, ________, ________, ________,  ________,  ________, ________,________,
        ________, HS_BLUE,   HS_BLUE,   HS_BLUE,  ________, ________, ________, ________, ________, ________,  ________,  ________,          ________,
        ________, ________,  ________,  ________, ________, ________, ________, ________, ________, ________,  HS_BLUE,                      ________,
        ________, ________,  ________,  ________, ________, ________,           ________, HS_BLUE,  HS_BLUE,   HS_BLUE,                      ________
        ),
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [1] = {ENCODER_CCW_CW(_______, _______)},
    [2] = {ENCODER_CCW_CW(_______, _______)},
    [3] = {ENCODER_CCW_CW(_______, _______)},
    [4] = {ENCODER_CCW_CW(_______, _______)},
    [5] = {ENCODER_CCW_CW(_______, _______)},
    [6] = {ENCODER_CCW_CW(_______, _______)},
    [7] = {ENCODER_CCW_CW(_______, _______)}
};
#endif
// clang-format on
