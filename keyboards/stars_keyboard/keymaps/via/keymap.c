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

enum layer_names {
    _BASE,
    _FN,
    _1,
    _2
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_65_ansi_blocker(
 /*         1           2               3               4                 5             6                       7             8             9             10 */

        KC_NO,        LCTL(KC_F1),    LCTL(KC_F2),    LCTL(KC_F11),     KC_NO,       LCTL(LSFT(KC_F12)),     LCTL(KC_F3),  LCTL(KC_F4),    LCTL(KC_F5),  LCTL(KC_F7),
        LCTL(KC_F8),  LCTL(KC_F9),    LCTL(KC_F10),   KC_NO,            KC_INSERT,   LCTL(KC_F12),           MO(_FN),       MO(_1),        MO(_2),       KC_NO,
                      KC_ESC,         KC_BSPC,                          KC_SPC,                                                            KC_ENT,
        KC_F3,        KC_F2,          KC_NO,          KC_F4,            KC_F5,       KC_F6,                  KC_F7,         KC_F8,         KC_GRV,       KC_DOT,
        KC_F9,        KC_F10,         KC_F11,         KC_F12,           KC_F13,      KC_F14,                 KC_F15,        KC_F16,        KC_PPLS,      KC_SLSH,
        KC_A,         KC_B,           KC_C,           KC_D,             KC_E,        KC_F,                   KC_G,          KC_1,          KC_2,         KC_3,
        KC_H,         KC_I,           KC_J,           KC_K,             KC_L,        KC_M,                   KC_N,          KC_4,          KC_5,         KC_6,
        KC_O,         KC_P,           KC_Q,           KC_R,             KC_S,        KC_T,                   KC_U,          KC_7,          KC_8,         KC_9,
        KC_V,         KC_W,           KC_X,           KC_Y,             KC_Z,        KC_PAST,                KC_END,        KC_LSFT,       KC_0,         KC_LCTL
    ),

    [_FN] = LAYOUT_65_ansi_blocker(
        KC_NO,        LCTL(KC_F1),    LCTL(KC_F2),    LCTL(KC_F11),     KC_NO,       LCTL(LSFT(KC_F12)),     LCTL(KC_F3),  LCTL(KC_F4),    LCTL(KC_F5),  LCTL(KC_F7),
        LCTL(KC_F8),  LCTL(KC_F9),    LCTL(KC_F10),   KC_NO,            KC_INSERT,   LCTL(KC_F12),           KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_NO,
                      KC_ESC,         KC_BSPC,                          KC_SPC,                                                            KC_ENT,
        KC_F3,        KC_F2,          KC_NO,          KC_F4,            KC_F5,       KC_F6,                  KC_F7,         KC_F8,         KC_GRV,       KC_DOT,
        KC_F9,        KC_F10,         KC_F11,         KC_F12,           KC_F13,      KC_F14,                 KC_F15,        KC_F16,        KC_PPLS,      KC_SLSH,
        KC_A,         KC_B,           KC_C,           KC_D,             KC_E,        KC_F,                   KC_G,          KC_1,          KC_2,         KC_3,
        KC_H,         KC_I,           KC_J,           KC_K,             KC_L,        KC_M,                   KC_N,          KC_4,          KC_5,         KC_6,
        KC_O,         KC_P,           KC_Q,           KC_R,             KC_S,        KC_T,                   KC_U,          KC_7,          KC_8,         KC_9,
        KC_V,         KC_W,           KC_X,           KC_Y,             KC_Z,        KC_PAST,                KC_END,        KC_LSFT,       KC_0,         KC_LCTL
    ),

    [_1] = LAYOUT_65_ansi_blocker(
        KC_NO,        LCTL(KC_F1),    LCTL(KC_F2),    LCTL(KC_F11),     KC_NO,       LCTL(LSFT(KC_F12)),     LCTL(KC_F3),  LCTL(KC_F4),    LCTL(KC_F5),  LCTL(KC_F7),
        LCTL(KC_F8),  LCTL(KC_F9),    LCTL(KC_F10),   KC_NO,            KC_INSERT,   LCTL(KC_F12),           KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_NO,
                      KC_ESC,         KC_BSPC,                          KC_SPC,                                                            KC_ENT,
        KC_F3,        KC_F2,          KC_NO,          KC_F4,            KC_F5,       KC_F6,                  KC_F7,         KC_F8,         KC_GRV,       KC_DOT,
        KC_F9,        KC_F10,         KC_F11,         KC_F12,           KC_F13,      KC_F14,                 KC_F15,        KC_F16,        KC_PPLS,      KC_SLSH,
        KC_A,         KC_B,           KC_C,           KC_D,             KC_E,        KC_F,                   KC_G,          KC_1,          KC_2,         KC_3,
        KC_H,         KC_I,           KC_J,           KC_K,             KC_L,        KC_M,                   KC_N,          KC_4,          KC_5,         KC_6,
        KC_O,         KC_P,           KC_Q,           KC_R,             KC_S,        KC_T,                   KC_U,          KC_7,          KC_8,         KC_9,
        KC_V,         KC_W,           KC_X,           KC_Y,             KC_Z,        KC_PAST,                KC_END,        KC_LSFT,       KC_0,         KC_LCTL
    ),

    [_2] = LAYOUT_65_ansi_blocker(
        KC_NO,        LCTL(KC_F1),    LCTL(KC_F2),    LCTL(KC_F11),     KC_NO,       LCTL(LSFT(KC_F12)),     LCTL(KC_F3),  LCTL(KC_F4),    LCTL(KC_F5),  LCTL(KC_F7),
        LCTL(KC_F8),  LCTL(KC_F9),    LCTL(KC_F10),   KC_NO,            KC_INSERT,   LCTL(KC_F12),           KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_NO,
                      KC_ESC,         KC_BSPC,                          KC_SPC,                                                            KC_ENT,
        KC_F3,        KC_F2,          KC_NO,          KC_F4,            KC_F5,       KC_F6,                  KC_F7,         KC_F8,         KC_GRV,       KC_DOT,
        KC_F9,        KC_F10,         KC_F11,         KC_F12,           KC_F13,      KC_F14,                 KC_F15,        KC_F16,        KC_PPLS,      KC_SLSH,
        KC_A,         KC_B,           KC_C,           KC_D,             KC_E,        KC_F,                   KC_G,          KC_1,          KC_2,         KC_3,
        KC_H,         KC_I,           KC_J,           KC_K,             KC_L,        KC_M,                   KC_N,          KC_4,          KC_5,         KC_6,
        KC_O,         KC_P,           KC_Q,           KC_R,             KC_S,        KC_T,                   KC_U,          KC_7,          KC_8,         KC_9,
        KC_V,         KC_W,           KC_X,           KC_Y,             KC_Z,        KC_PAST,                KC_END,        KC_LSFT,       KC_0,         KC_LCTL
    )
};





