/* Copyright 2019 Adularescence
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	/* Layer 0
	 * ,-----------------------------------------------------------------------------------.
	 * | Esc  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
	 * |------+------+------+------+------+-------------+------+------+------+------+------|
	 * | Ctrl |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
	 * |------+------+------+------+------+------|------+------+------+------+------+------|
	 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Layer3|
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * | Ctrl |  GUI | Alt  |Layer1|Layer2|    Space    |Enter | Left | Down |  Up  |Right |
	 * `-----------------------------------------------------------------------------------'
	 */
	[0] = LAYOUT_planck_mit(
		KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,  KC_T,   KC_Y,   KC_U,  KC_I,    KC_O,    KC_P,    KC_BSPC,
		KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,  KC_G,   KC_H,   KC_J,  KC_K,    KC_L,    KC_SCLN, KC_QUOT,
		KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,  KC_B,   KC_N,   KC_M,  KC_COMM, KC_DOT,  KC_SLSH, MO(3),
		KC_LCTL, KC_LGUI, KC_LALT, MO(1)  , MO(2),     KC_SPC,     KC_ENT,KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
  ),

  /* Layer 1
	 * ,-----------------------------------------------------------------------------------.
	 * |      |      |      |      |      |      |      |   7  |   8  |   9  |   -  |   /  |
	 * |------+------+------+------+------+-------------+------+------+------+------+------|
	 * |      |      |      |      |      |      |      |   4  |   5  |   6  |   +  |   *  |
	 * |------+------+------+------+------+------|------+------+------+------+------+------|
	 * |      |      |      |      |      |      |      |   1  |   2  |   3  |Enter |NumLk |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * |      |      |      |      |      |             |   0  |   ,  |   .  |      |      |
	 * `-----------------------------------------------------------------------------------'
	 */
	[1] = LAYOUT_planck_mit(
		_______, _______, _______, _______, _______, _______, _______, KC_P7,   KC_P8,   KC_P9,   KC_PMNS, KC_PAST,
		_______, _______, _______, _______, _______, _______, _______, KC_P4,   KC_P5,   KC_P6,   KC_PPLS, KC_PSLS,
		_______, _______, _______, _______, _______, _______, _______, KC_P1,   KC_P2,   KC_P3,   KC_PENT, KC_NLCK,
		_______, _______, _______, _______, _______,     _______,      KC_P0,   KC_PCMM, KC_PDOT, _______, _______
	),

	/* Layer 2
	 * ,-----------------------------------------------------------------------------------.
	 * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Del  |
	 * |------+------+------+------+------+-------------+------+------+------+------+------|
	 * | Tab  |      |      |      |      |      |      |   -  |   =  |   [  |   ]  |Enter |
	 * |------+------+------+------+------+------|------+------+------+------+------+------|
	 * |      |      |      |      |      |      |      |      |      |      |   \  | Ins  |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * | Caps |      |      |      |      |             |      | Home | PgDn | PgUp | End  |
	 * `-----------------------------------------------------------------------------------'
	 */
	[2] = LAYOUT_planck_mit(
		KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
		KC_TAB,  _______, _______, _______, _______, _______, _______, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_ENT,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_BSLS, KC_INS,
		KC_CAPS, _______, _______, _______, _______,     _______,      _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END
	),

  /* Layer 3 (r_ Indicates RGB Controls)
	 * ,-----------------------------------------------------------------------------------.
	 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |
	 * |------+------+------+------+------+-------------+------+------+------+------+------|
	 * |      |On    |Tog   |Hue+  |Hue-  |Sat+  |Sat-  |Bri+  |Bri-  |      |      |      |
	 * |------+------+------+------+------+------|------+------+------+------+------+------|
	 * |      |      |      |      |      |      |      |      |      |      |      |      |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * |Reset |      |      |      |      |             |      | Mute |VolDn |VolUp |      |
	 * `-----------------------------------------------------------------------------------'
	 */
	[3] = LAYOUT_planck_mit(
		KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
		_______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		RESET,   _______, _______, _______, _______,     _______,      _______, KC_MUTE, KC_VOLD, KC_VOLU, _______
  )
};