/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

enum layer_names {
    _CK = 0,
    _NAV,
    _SYM,
    _MK
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_CK] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_LGUI  ,    KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                         KC_J,    KC_L,    KC_U,    KC_Y, KC_SCLN,KC_LGUI  ,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    KC_LSFT,ALT_T(KC_A),GUI_T(KC_R),CTL_T(KC_S),SFT_T(KC_T),KC_G,                KC_M,SFT_T(KC_N),CTL_T(KC_E),GUI_T(KC_I),ALT_T(KC_O),KC_LSFT ,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL  ,    KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,                         KC_K,    KC_H, KC_COMM,  KC_DOT, KC_SLSH, KC_LCTL ,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                        KC_BSPC, MO(_NAV), KC_SPC,     KC_ENT,   MO(_SYM), MO(_MK)
                                      //`--------------------------'  `--------------------------'
    ),

  [_NAV] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_LGUI  ,    KC_1,    KC_2,    KC_3,    KC_4,  KC_5  ,                         KC_6,    KC_7,    KC_8,    KC_9,  KC_0  , KC_LGUI  ,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT  , CAPS_WORD, KC_NO, KC_NO, KC_DOT, KC_NO  ,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, KC_NO  , KC_LSFT  ,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL , S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5),                      S(KC_6), S(KC_7), S(KC_8), KC_MINS, KC_EQL , KC_LCTL  ,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_NO , KC_TRNS, KC_NO ,    KC_TAB , KC_ESC , KC_NO
                                      //`--------------------------'  `--------------------------'
  ),

  [_SYM] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_LGUI  ,S(KC_5),KC_LBRC,S(KC_2),KC_RBRC, S(KC_8) ,                      S(KC_SLSH),S(KC_EQL),KC_MINS,S(KC_MINS),KC_NUHS,KC_LGUI,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT  , S(KC_6), S(KC_9), KC_QUOT, S(KC_0), S(KC_7),                   S(KC_1), S(KC_COMM), KC_EQL, S(KC_DOT),S(KC_QUOT),KC_LSFT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL , S(KC_4) ,S(KC_LBRC),KC_GRV,S(KC_RBRC), S(KC_NUBS),                KC_NUBS,S(KC_NUHS),KC_NO,S(KC_3),KC_SLSH,KC_LCTL,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                    KC_CAPS_LOCK,C(KC_BSPC),KC_DEL,    KC_NO,KC_TRNS, KC_NO
                                      //`--------------------------'  `--------------------------'
  ),

   [_MK] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_LGUI  ,KC_NO ,KC_NO ,KC_MS_U ,KC_WH_U ,KC_ACL2 ,                      KC_NO  ,KC_NO ,KC_NO ,KC_NO ,KC_NO , KC_LGUI ,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT  ,KC_NO ,KC_MS_L ,KC_MS_D ,KC_MS_R ,KC_ACL1 ,                      KC_NO ,KC_BTN1 ,KC_BTN2 ,KC_BTN3 ,KC_NO,  KC_LSFT ,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL  ,KC_NO ,KC_NO ,KC_NO ,KC_WH_D ,KC_ACL0 ,                      KC_NO  ,KC_NO ,KC_NO ,KC_NO ,KC_NO , KC_LCTL ,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_NO  , KC_TRNS, KC_TRNS,    KC_NO, KC_NO,  KC_TRNS
                                      //`--------------------------'  `--------------------------'
  ),

  // Blank layer template
  //[_LABEL] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
  //  KC_NO  ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,                    KC_TRNS  ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,  KC_NO ,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
  //  KC_NO  ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,                    KC_TRNS  ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,  KC_NO ,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
  //  KC_NO  ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,                    KC_TRNS  ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,  KC_NO ,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
  //                                        KC_NO  , KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS,  KC_NO
                                      //`--------------------------'  `--------------------------'
  //),
};
