/* Copyright 2022 ziptyze
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

#define pin_BLK_KBD GP5
#define pin_BLK_TP GP6

enum layer_names {
    _BASE,
    _FN,
    _1,
    _2
};

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)


extern bool isScrollMode;
extern bool isBoostMode;
extern bool isSlowMode;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_BSPC,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_ENT,
        KC_LCTL, KC_LGUI, KC_LALT,          KC_SPC,           LOWER,   KC_RCTL, RAISE
    ),

    [_FN] = LAYOUT(
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_BSPC,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_ENT,
        KC_LCTL, KC_LGUI, KC_LALT,          KC_SPC,           LOWER,   KC_RCTL, RAISE
    ),

    [_1] = LAYOUT(
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_BSPC,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_ENT,
        KC_LCTL, KC_LGUI, KC_LALT,          KC_SPC,           LOWER,   KC_RCTL, RAISE
    ),

    [_2] = LAYOUT(
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_BSPC,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_ENT,
        KC_LCTL, KC_LGUI, KC_LALT,          KC_SPC,           LOWER,   KC_RCTL, RAISE
    ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    /*case KC_LSFT:
      if (record->event.pressed) {
        isScrollMode = true;
        tap_code(KC_LSFT);
      }
      else {
        isScrollMode = false;
      }
      return false;   */
    case KC_LCTL:
      if (record->event.pressed) {
        isBoostMode  = true;
        register_code(KC_LCTL);
      }
      else {
        isBoostMode = false;
        unregister_code(KC_LCTL);
      }
      return false;
    case KC_LALT:
      if (record->event.pressed) {
        isSlowMode = true;
        register_code(KC_LALT);
      }
      else {
        isSlowMode = false;
        unregister_code(KC_LALT);
      }
      return false;
  }
  return true;
}



