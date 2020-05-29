/* Copyright 2019 Ryota Goto
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
    _FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	/* 
	* ,-----------------------------------------------------------------------------------------.
	* | Esc |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |  \  |  `  |
	* |-----------------------------------------------------------------------------------------+
	* | Tab    |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |  Bkspc |
	* |-----------------------------------------------------------------------------------------+
	* | Control |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |    Enter    |
	* |-----------------------------------------------------------------------------------------+
	* |LShift| NO |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  |  RShift   | Fn  |
	* |-----------------------------------------------------------------------------------------|
	* |  Ctrl  |  Win  |  Alt  |    Space    |  Space  |   Space   | Left | Down |  Up  | Right |
	* `-----------------------------------------------------------------------------------------'
	*/
	[_BASE] = LAYOUT_all(
		KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_GRV,
		KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,          KC_BSPC,
		KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,                   KC_ENT,
		KC_LSFT, KC_BSLS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, MO(_FN),
		KC_LCTL, KC_LGUI, KC_LALT,          KC_SPC,           KC_SPC,           KC_SPC,                    KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
	),
	/* 
	* ,-----------------------------------------------------------------------------------------.
	* |     | F1  | F2  | F3  | F4  | F5  | F6  | F7  | F8  | F9  | F10 | F11 | F12 | Vol-| Vol+|
	* |-----------------------------------------------------------------------------------------+
	* |RGB  >  | ON  |Cycle|Hue+ |Hue- |Sat+ |Sat- |Val+ |Val- |     |     |Bri- |Bri+ |   Del  |
	* |-----------------------------------------------------------------------------------------+
	* |  Caps   |Prev |Play |Next | (F) |     |     | (J) |     |Sleep|     |     |             |
	* |-----------------------------------------------------------------------------------------+
	* |RGB > |     | No |Breat|Rbow |Swirl|Snake|Knight|Xmax|SGrad|Test |     |           |     |
	* |-----------------------------------------------------------------------------------------|
	* | Reset  |       |       |             |         |             | Home | PgDn | PgUp | End |
	* `-----------------------------------------------------------------------------------------'
	*/
	[_FN] = LAYOUT_all( /* FN */
		_______,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_VOLD,  KC_VOLU,
		_______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______, KC_BRID, KC_BRIU,           KC_DEL,
		KC_CAPS, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______, _______, _______, KC_PAUS, KC_SLEP, _______, _______,                   _______,
		_______, RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW,RGB_M_SN,RGB_M_K, RGB_M_X, RGB_M_G, RGB_M_T, _______, _______,          _______, _______,
		RESET,   _______, _______,          _______,          _______,          _______,                   KC_HOME, KC_PGDN, KC_PGUP, KC_END
	)
};

