/* Copyright 2015-2021 Jack Humbert
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
#include "keymap_bepo.h"
#include "muse.h"


enum planck_layers {
  _BASE,
};

enum planck_keycodes {
  BASE = SAFE_RANGE,

};

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Base : Bépo
 * ,-----------------------------------------------------------------------------------.
 * |   W  |   B  |   É  |   P  |   O  |   È  |   ^  |   V  |   D  |   L  |   J  |   Z  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   A  |   U  |   I  |   E  |   ,  |   C  |   T  |   S  |   R  |   N  |   M  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |Ê/Shft|   À  |   Y  |   X  |   .  |   K  |   '  |   Q  |   G  |   H  |   F  |Ç/Shft|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Esc  | Ctrl | Alt  | GUI  |Del/- |  Space      |Ent/Ra| BckSp| AltGr| Ctrl | Win  |
 * `-----------------------------------------------------------------------------------'
 */
[_BASE] = LAYOUT_planck_mit(
          BP_W    , BP_B   , BP_EACU,        BP_P   ,            BP_O    ,  BP_EGRV , BP_DCIR ,            BP_V   , BP_D   , BP_L   ,                BP_J   ,       BP_Z    ,
          KC_TAB  , BP_A   , BP_U   ,        BP_I   ,            BP_E    ,  BP_COMM , BP_C    ,            BP_T   , BP_S   , BP_R   ,                BP_N   ,       BP_M    ,
    SFT_T(BP_ECIR), BP_AGRV, BP_Y   ,        BP_X   ,            BP_DOT  ,  BP_K    , BP_QUOT ,            BP_Q   , BP_G   , BP_H   ,                 BP_F  , SFT_T(BP_CCED),
          KC_ESC  , KC_LCTL, KC_LALT, LGUI_T(BP_SLSH),           BP_MINS ,  KC_SPACE,  KC_ENT , KC_BSPC, KC_RALT,                KC_RCTL,    KC_APP
),

};
