#include "manta.h"

enum my_layers {
	_QWERTY,
	_COLEMAKDH,
	_NUMBER,
	_NAV,
	_MEDIA,
	_FUNC,
	_KBCTRL
};

enum my_keycodes {
	K_SPACE = LT(0, KC_K),
	N_SPACE = LT(0, KC_N)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_QWERTY] = LAYOUT(
				KC_Q,		 KC_W, 		  KC_E, KC_R, 		          KC_T, 					KC_Y,  	     KC_U,    KC_I,   KC_O,      KC_P,
		LCTL_T(KC_A),        KC_R,        KC_S, KC_T,                 KC_G,                     KC_M,        KC_N,    KC_E,   KC_I,      KC_O,
		LSFT_T(KC_Z), GUI_T(KC_X), ALT_T(KC_C), KC_V, LT(_COLEMAKDH, KC_B), KC_BSPC, KC_SPC, N_SPACE, CTL_T(KC_H), KC_COMM, KC_DOT, KC_SFTENT),

	[_COLEMAKDH] = LAYOUT(
				KC_Q,		 KC_W, 		  KC_F, KC_P, 		 KC_B, 					   KC_J, 		KC_L,    KC_U,   KC_Y, KC_SCLN,
		LCTL_T(KC_A),        KC_R,        KC_S, KC_T,        KC_G,                     KC_M,        KC_N,    KC_E,   KC_I,    KC_O,
		LSFT_T(KC_Z), GUI_T(KC_X), ALT_T(KC_C), KC_D, LT(_QWERTY, KC_V), KC_BSPC, KC_SPC, K_SPACE, CTL_T(KC_H), KC_COMM, KC_DOT, KC_SFTENT),

	[_NUMBER] = LAYOUT(
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,               KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,               KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
	),

	[_NAV] = LAYOUT(
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,               KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,               KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
	),

	[_MEDIA] = LAYOUT(
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,               KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,               KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
	),

	[_FUNC] = LAYOUT(
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,               KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,               KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
	),

	[_KBCTRL] = LAYOUT(
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,               KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,               KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
	)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case K_SPACE: //Z on hold, space on tap
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_SPC);
			} else if (record->event.pressed){
				tap_code16(KC_Z);
			}
            return false;
		case N_SPACE: //N on hold, space on tap
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_SPC);
			} else if (record->event.pressed){
				tap_code16(KC_N);
			}
            return false;
    }
    return true;
}
