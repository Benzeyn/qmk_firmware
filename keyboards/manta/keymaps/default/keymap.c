#include "manta.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	LAYOUT(
		KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
		KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_ENT,
		CTL_T(KC_Z), ALT_T(KC_X), GUI_T(KC_C), KC_V, LT(1, KC_B), KC_LSFT, KC_SPC, LT(2, KC_N), CTL_T(KC_M), KC_COMM, KC_DOT, KC_BSPC)

};

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}
