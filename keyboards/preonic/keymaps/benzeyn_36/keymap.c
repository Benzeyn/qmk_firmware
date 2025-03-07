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
#include "muse.h"

enum preonic_layers {
  _QWERTY,
  _COLEMAK,
  _DVORAK,
  _LOWER,
  _RAISE,
  _ADJUST
};

enum preonic_keycodes {
  QWERTY = SAFE_RANGE,
  COLEMAK,
  DVORAK,
  LOWER,
  RAISE,
  BACKLIT
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |   Q  |   W  |   E  |   R  |   T  |      |      |   Y  |   U  |   I  |   O  |   ;  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |   A  |   S  |   D  |   F  |   G  |      |      |   H  |   J  |   K  |   L  |   P  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |   Z  |   X  |   C  |   V  |   B  |      |      |   N  |   M  |   ,  |   .  |   /  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      | GUI  |Lower |             |Raise | Left |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_QWERTY] = LAYOUT_preonic_grid(
  KC_NO,  KC_NO,   KC_NO,  KC_NO,   KC_NO,  KC_NO,  KC_NO,  KC_NO,   KC_NO,    KC_NO,   KC_NO,    KC_NO,
   KC_Q,   KC_W,    KC_E,   KC_R,    KC_T,  KC_NO,  KC_NO,   KC_Y,    KC_U,     KC_I,    KC_O,  KC_SCLN,
   KC_A,   KC_S,    KC_D,   KC_F,    KC_G,  KC_NO,  KC_NO,   KC_H,    KC_J,     KC_K,    KC_L,     KC_P,
   KC_Z,   KC_X,    KC_C,   KC_V,    KC_B,  KC_NO,  KC_NO,   KC_N,    KC_M,  KC_COMM,  KC_DOT,  KC_SLSH,
  KC_NO,  KC_NO,   KC_NO, KC_LGUI,  LOWER,  KC_NO,  KC_NO,  RAISE,  KC_LEFT,   KC_NO,    KC_NO,   KC_NO
),

/* Colemak
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |   Q  |   W  |   E  |   R  |   T  |      |      |   Y  |   U  |   I  |   O  |   ;  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |   A  |   S  |   D  |   F  |   G  |      |      |   H  |   J  |   K  |   L  |   P  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |   Z  |   X  |   C  |   V  |   B  |      |      |   N  |   M  |   ,  |   .  |   /  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      | GUI  |Lower |             |Raise | Left |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_COLEMAK] = LAYOUT_preonic_grid(
  KC_NO,  KC_NO,   KC_NO,  KC_NO,   KC_NO,  KC_NO,  KC_NO,  KC_NO,   KC_NO,    KC_NO,   KC_NO,    KC_NO,
   KC_Q,   KC_W,    KC_E,   KC_R,    KC_T,  KC_NO,  KC_NO,   KC_Y,    KC_U,     KC_I,    KC_O,  KC_SCLN,
   KC_A,   KC_S,    KC_D,   KC_F,    KC_G,  KC_NO,  KC_NO,   KC_H,    KC_J,     KC_K,    KC_L,     KC_P,
   KC_Z,   KC_X,    KC_C,   KC_V,    KC_B,  KC_NO,  KC_NO,   KC_N,    KC_M,  KC_COMM,  KC_DOT,  KC_SLSH,
  KC_NO,  KC_NO,   KC_NO, KC_LGUI,  LOWER,  KC_NO,  KC_NO,  RAISE,  KC_LEFT,   KC_NO,    KC_NO,   KC_NO
),

/* Dvorak
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |   Q  |   W  |   E  |   R  |   T  |      |      |   Y  |   U  |   I  |   O  |   ;  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |   A  |   S  |   D  |   F  |   G  |      |      |   H  |   J  |   K  |   L  |   P  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |   Z  |   X  |   C  |   V  |   B  |      |      |   N  |   M  |   ,  |   .  |   /  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      | GUI  |Lower |             |Raise | Left |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_DVORAK] = LAYOUT_preonic_grid(
  KC_NO,  KC_NO,   KC_NO,  KC_NO,   KC_NO,  KC_NO,  KC_NO,  KC_NO,   KC_NO,    KC_NO,   KC_NO,    KC_NO,
   KC_Q,   KC_W,    KC_E,   KC_R,    KC_T,  KC_NO,  KC_NO,   KC_Y,    KC_U,     KC_I,    KC_O,  KC_SCLN,
   KC_A,   KC_S,    KC_D,   KC_F,    KC_G,  KC_NO,  KC_NO,   KC_H,    KC_J,     KC_K,    KC_L,     KC_P,
   KC_Z,   KC_X,    KC_C,   KC_V,    KC_B,  KC_NO,  KC_NO,   KC_N,    KC_M,  KC_COMM,  KC_DOT,  KC_SLSH,
  KC_NO,  KC_NO,   KC_NO, KC_LGUI,  LOWER,  KC_NO,  KC_NO,  RAISE,  KC_LEFT,   KC_NO,    KC_NO,   KC_NO
),

/* Lower
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |   Q  |   W  |   E  |   R  |   T  |      |      |   Y  |   U  |   I  |   O  |   ;  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |   A  |   S  |   D  |   F  |   G  |      |      |   H  |   J  |   K  |   L  |   P  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |   Z  |   X  |   C  |   V  |   B  |      |      |   N  |   M  |   ,  |   .  |   /  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      | GUI  |Lower |             |Raise | Left |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_LOWER] = LAYOUT_preonic_grid(
  KC_NO,  KC_NO,   KC_NO,  KC_NO,   KC_NO,  KC_NO,  KC_NO,  KC_NO,   KC_NO,    KC_NO,   KC_NO,    KC_NO,
   KC_Q,   KC_W,    KC_E,   KC_R,    KC_T,  KC_NO,  KC_NO,   KC_Y,    KC_U,     KC_I,    KC_O,  KC_SCLN,
   KC_A,   KC_S,    KC_D,   KC_F,    KC_G,  KC_NO,  KC_NO,   KC_H,    KC_J,     KC_K,    KC_L,     KC_P,
   KC_Z,   KC_X,    KC_C,   KC_V,    KC_B,  KC_NO,  KC_NO,   KC_N,    KC_M,  KC_COMM,  KC_DOT,  KC_SLSH,
  KC_NO,  KC_NO,   KC_NO, KC_LGUI,  LOWER,  KC_NO,  KC_NO,  RAISE,  KC_LEFT,   KC_NO,    KC_NO,   KC_NO
),

/* Raise
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |   Q  |   W  |   E  |   R  |   T  |      |      |   Y  |   U  |   I  |   O  |   ;  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |   A  |   S  |   D  |   F  |   G  |      |      |   H  |   J  |   K  |   L  |   P  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |   Z  |   X  |   C  |   V  |   B  |      |      |   N  |   M  |   ,  |   .  |   /  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      | GUI  |Lower |             |Raise | Left |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_RAISE] = LAYOUT_preonic_grid(
  KC_NO,  KC_NO,   KC_NO,  KC_NO,   KC_NO,  KC_NO,  KC_NO,  KC_NO,   KC_NO,    KC_NO,   KC_NO,    KC_NO,
   KC_Q,   KC_W,    KC_E,   KC_R,    KC_T,  KC_NO,  KC_NO,   KC_Y,    KC_U,     KC_I,    KC_O,  KC_SCLN,
   KC_A,   KC_S,    KC_D,   KC_F,    KC_G,  KC_NO,  KC_NO,   KC_H,    KC_J,     KC_K,    KC_L,     KC_P,
   KC_Z,   KC_X,    KC_C,   KC_V,    KC_B,  KC_NO,  KC_NO,   KC_N,    KC_M,  KC_COMM,  KC_DOT,  KC_SLSH,
  KC_NO,  KC_NO,   KC_NO, KC_LGUI,  LOWER,  KC_NO,  KC_NO,  RAISE,  KC_LEFT,   KC_NO,    KC_NO,   KC_NO
),

/* Adjust (Lower + Raise)
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |   Q  |   W  |   E  |   R  |   T  |      |      |   Y  |   U  |   I  |   O  |   ;  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |   A  |   S  |   D  |   F  |   G  |      |      |   H  |   J  |   K  |   L  |   P  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |   Z  |   X  |   C  |   V  |   B  |      |      |   N  |   M  |   ,  |   .  |   /  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      | GUI  |Lower |             |Raise | Left |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_ADJUST] = LAYOUT_preonic_grid(
  KC_NO,  KC_NO,   KC_NO,  KC_NO,   KC_NO,  KC_NO,  KC_NO,  KC_NO,   KC_NO,    KC_NO,   KC_NO,    KC_NO,
   KC_Q,   KC_W,    KC_E,   KC_R,    KC_T,  KC_NO,  KC_NO,   KC_Y,    KC_U,     KC_I,    KC_O,  KC_SCLN,
   KC_A,   KC_S,    KC_D,   KC_F,    KC_G,  KC_NO,  KC_NO,   KC_H,    KC_J,     KC_K,    KC_L,     KC_P,
   KC_Z,   KC_X,    KC_C,   KC_V,    KC_B,  KC_NO,  KC_NO,   KC_N,    KC_M,  KC_COMM,  KC_DOT,  KC_SLSH,
  KC_NO,  KC_NO,   KC_NO, KC_LGUI,  LOWER,  KC_NO,  KC_NO,  RAISE,  KC_LEFT,   KC_NO,    KC_NO,   KC_NO
)

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
        case QWERTY:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_QWERTY);
          }
          return false;
          break;
        case COLEMAK:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_COLEMAK);
          }
          return false;
          break;
        case DVORAK:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_DVORAK);
          }
          return false;
          break;
        case LOWER:
          if (record->event.pressed) {
            layer_on(_LOWER);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
          } else {
            layer_off(_LOWER);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
          }
          return false;
          break;
        case RAISE:
          if (record->event.pressed) {
            layer_on(_RAISE);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
          } else {
            layer_off(_RAISE);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
          }
          return false;
          break;
        case BACKLIT:
          if (record->event.pressed) {
            register_code(KC_RSFT);
            #ifdef BACKLIGHT_ENABLE
              backlight_step();
            #endif
            #ifdef RGBLIGHT_ENABLE
              rgblight_step();
            #endif
            #ifdef __AVR__
            writePinLow(E6);
            #endif
          } else {
            unregister_code(KC_RSFT);
            #ifdef __AVR__
            writePinHigh(E6);
            #endif
          }
          return false;
          break;
      }
    return true;
};

bool muse_mode = false;
uint8_t last_muse_note = 0;
uint16_t muse_counter = 0;
uint8_t muse_offset = 70;
uint16_t muse_tempo = 50;

bool encoder_update_user(uint8_t index, bool clockwise) {
  if (muse_mode) {
    if (IS_LAYER_ON(_RAISE)) {
      if (clockwise) {
        muse_offset++;
      } else {
        muse_offset--;
      }
    } else {
      if (clockwise) {
        muse_tempo+=1;
      } else {
        muse_tempo-=1;
      }
    }
  } else {
    if (clockwise) {
      register_code(KC_PGDN);
      unregister_code(KC_PGDN);
    } else {
      register_code(KC_PGUP);
      unregister_code(KC_PGUP);
    }
  }
    return true;
}

bool dip_switch_update_user(uint8_t index, bool active) {
    switch (index) {
        case 0:
            if (active) {
                layer_on(_ADJUST);
            } else {
                layer_off(_ADJUST);
            }
            break;
        case 1:
            if (active) {
                muse_mode = true;
            } else {
                muse_mode = false;
            }
    }
    return true;
}


void matrix_scan_user(void) {
#ifdef AUDIO_ENABLE
    if (muse_mode) {
        if (muse_counter == 0) {
            uint8_t muse_note = muse_offset + SCALE[muse_clock_pulse()];
            if (muse_note != last_muse_note) {
                stop_note(compute_freq_for_midi_note(last_muse_note));
                play_note(compute_freq_for_midi_note(muse_note), 0xF);
                last_muse_note = muse_note;
            }
        }
        muse_counter = (muse_counter + 1) % muse_tempo;
    } else {
        if (muse_counter) {
            stop_all_notes();
            muse_counter = 0;
        }
    }
#endif
}

bool music_mask_user(uint16_t keycode) {
  switch (keycode) {
    case RAISE:
    case LOWER:
      return false;
    default:
      return true;
  }
}
