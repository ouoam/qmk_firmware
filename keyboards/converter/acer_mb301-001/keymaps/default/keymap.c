/*
Copyright 2012,2013 Jun Wako <wakojun@gmail.com>

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


// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BASE 0
#define _FN 1

const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * .--------------------------------------------------------------------------------------------------------------------------------------------.
 * | ESC    | F1    | F2    | F3     | F4    | F5     | F6    | F7    | F8     | F9    | F10   | F11   | F12   | PRTSC  | PAUSE | INS   | DEL   |
 * |--------------------------------------------------------------------------------------------------------------------------------------------|
 * | GRAV | 1      | 2      | 3      | 4      | 5      | 6      | 7      | 8      | 9      | 0      | -      | =      | BACKSP         | HOME   |
 * |--------------------------------------------------------------------------------------------------------------------------------------------|
 * | TAB      | Q      | W      | E      | R      | T      | Y      | U      | I      | O      | P      | [      | ]      | \          | PGUP   |
 * |--------------------------------------------------------------------------------------------------------------------------------------------|
 * | CAP LK      | A      | S      | D      | F      | G      | H      | J      | K      | L      | ;      | '      | ENTER            | PGDN   |
 * |--------------------------------------------------------------------------------------------------------------------------------------------|
 * | LSHIFT          | Z      | X      | C      | V      | B      | N      | M      | ,      | .      | /      | RSHIFT       | UP     | END    |
 * |--------------------------------------------------------------------------------------------------------------------------------------------|
 * | LCTRL  | FN     | WIN    | LALT   |                       SPACE                      | RALT   | MENU   | RCTRL  | LEFT   | DOWN   | RIGH   |
 * '--------------------------------------------------------------------------------------------------------------------------------------------'
 *
 *
  ESC| F1 | F2 | F3 | F4 | F5 | F6 | F7 | F8 | F9 | F10| F11| F12| PSC| PAU| INS| DEL
  GRA| 1  | 2  | 3  | 4  | 5  | 6  | 7  | 8  | 9  | 0  | -  | =  |     BCKS     | HOM
  TAB| Q  | W  | E  | R  | T  | Y  | U  | I  | O  | P  | [  | ]  |       \      | PUP
  CAP| A  | S  | D  | F  | G  | H  | J  | K  | L  | ;  | '  |       ENTER       | PDN
   LSHIF  | Z  | X  | C  | V  | B  | N  | M  | ,  | .  | /  |     RSHIF    | UP | END
  LCT| FN | WIN|LALT|               SPACE              |RALT|MENU| RCT| LEF| DOW| RIG
 */

  [_BASE] = LAYOUT_acer_ansi( /* QWERTY */
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR, KC_PAUS, KC_INS,  KC_DEL, \
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,           KC_BSPC,          KC_HOME, \
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,          KC_BSLS,          KC_PGUP, \
    KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,                    KC_PGDOWN, \
    KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT,          KC_UP,   KC_END, \
    KC_LCTL, MO(_FN), KC_LWIN, KC_LALT,                            KC_SPC,                             KC_RALT, KC_APP,  KC_RCTL, KC_LEFT, KC_DOWN, KC_RIGHT
  ),

/* FUNCTION
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * | F1     | F2     | F3     | F4     | F5     | F6     | NUM LK | P/     | P*     | F7     | F8     | F9     | F10    | F11    | F12    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | SELECT | CALC   | MYCOMP | MAIL   | RGB HD | RGB HI | P7     | P8     | P9     | -      |        |        | PR SCR | SCR LK | PAUSE  |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | PREV   | PLAY   | NEXT   | STOP   | RGB SD | RGB SI | P4     | P5     | P6     | +      |        | RESET  |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | VOL-   | MUTE   | VOL+   | APP    | RGB VD | RGB VI | P1     | P2     | P3     | PENT   |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        | RGB TG | FN     | RGB RMD| RGB MD | P0     |        | P.     | PENT   | PENT   | FN     |        |        |        |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

  [_FN] = LAYOUT_acer_ansi( /* FUNCTION */
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR, KC_PAUS, KC_INS,  KC_END, \
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,           KC_BSPC,          KC_HOME, \
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,          KC_BSLS,          KC_PGUP, \
    KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,                    KC_PGDOWN, \
    KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT,          KC_UP,   KC_END, \
    KC_LCTL, MO(_FN), KC_LWIN, KC_LALT,                            KC_SPC,                             KC_RALT, KC_APP,  KC_RCTL, KC_LEFT, KC_DOWN, KC_RIGHT
  )
};
