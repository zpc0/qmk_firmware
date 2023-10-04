// Copyright 2021 Hayashi (@w_vwbw)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_names {
	BASE = 0,
	LIGHT
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[BASE] = LAYOUT(
		KC_NUM, KC_PSLS, KC_PAST, KC_PMNS,
		KC_P7,  KC_P8,   KC_P9,   KC_PPLS,
		KC_P4,  KC_P5,   KC_P6,   KC_PPLS,
		KC_P1,  KC_P2,   KC_P3,   KC_PENT,
		LT(LIGHT, KC_P0), KC_P0, KC_PDOT, KC_PENT,
		LCTL(KC_WH_D), LCTL(KC_WH_U), LCTL(KC_WH_D), LCTL(KC_WH_U), LCTL(KC_WH_D), LCTL(KC_WH_U),
		LCTL(KC_WH_D), LCTL(KC_WH_U), LCTL(KC_WH_D), LCTL(KC_WH_U)
	),
	[LIGHT] = LAYOUT(
		XXXXXXX, RGB_HUI, RGB_HUD, RGB_TOG,
		XXXXXXX, RGB_SAI, RGB_SAD, XXXXXXX,
		XXXXXXX, RGB_VAI, RGB_VAD, XXXXXXX,
		XXXXXXX, RGB_SPI, RGB_SPD, XXXXXXX,
		LT(LIGHT, KC_P0), RGB_MOD, RGB_RMOD, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
	)
};

keyevent_t encoder1_ccw = {
	.key = (keypos_t){.row = 0, .col = 5},
	.pressed = false
};

keyevent_t encoder1_cw = {
	.key = (keypos_t){.row = 0, .col = 4},
	.pressed = false
};

keyevent_t encoder2_ccw = {
	.key = (keypos_t){.row = 1, .col = 5},
	.pressed = false
};

keyevent_t encoder2_cw = {
	.key = (keypos_t){.row = 1, .col = 4},
	.pressed = false
};

keyevent_t encoder3_ccw = {
	.key = (keypos_t){.row = 2, .col = 5},
	.pressed = false
};

keyevent_t encoder3_cw = {
	.key = (keypos_t){.row = 2, .col = 4},
	.pressed = false
};

keyevent_t encoder4_ccw = {
	.key = (keypos_t){.row = 3, .col = 5},
	.pressed = false
};

keyevent_t encoder4_cw = {
	.key = (keypos_t){.row = 3, .col = 4},
	.pressed = false
};

keyevent_t encoder5_ccw = {
	.key = (keypos_t){.row = 4, .col = 5},
	.pressed = false
};

keyevent_t encoder5_cw = {
	.key = (keypos_t){.row = 4, .col = 4},
	.pressed = false
};

void matrix_scan_user(void) {
	if (encoder1_ccw.pressed) {
		encoder1_ccw.pressed = false;
		encoder1_ccw.time = (timer_read() | 1);
		action_exec(encoder1_ccw);
	}
	if (encoder1_cw.pressed) {
		encoder1_cw.pressed = false;
		encoder1_cw.time = (timer_read() | 1);
		action_exec(encoder1_cw);
	}
	if (encoder2_ccw.pressed) {
		encoder2_ccw.pressed = false;
		encoder2_ccw.time = (timer_read() | 1);
		action_exec(encoder2_ccw);
	}
	if (encoder2_cw.pressed) {
		encoder2_cw.pressed = false;
		encoder2_cw.time = (timer_read() | 1);
		action_exec(encoder2_cw);
	}
	if (encoder3_ccw.pressed) {
		encoder3_ccw.pressed = false;
		encoder3_ccw.time = (timer_read() | 1);
		action_exec(encoder3_ccw);
	}
	if (encoder3_cw.pressed) {
		encoder3_cw.pressed = false;
		encoder3_cw.time = (timer_read() | 1);
		action_exec(encoder3_cw);
	}
	if (encoder4_ccw.pressed) {
		encoder4_ccw.pressed = false;
		encoder4_ccw.time = (timer_read() | 1);
		action_exec(encoder4_ccw);
	}
	if (encoder4_cw.pressed) {
		encoder4_cw.pressed = false;
		encoder4_cw.time = (timer_read() | 1);
		action_exec(encoder4_cw);
	}
	if (encoder5_ccw.pressed) {
		encoder5_ccw.pressed = false;
		encoder5_ccw.time = (timer_read() | 1);
		action_exec(encoder5_ccw);
	}
	if (encoder5_cw.pressed) {
		encoder5_cw.pressed = false;
		encoder5_cw.time = (timer_read() | 1);
		action_exec(encoder5_cw);
	}
}

bool encoder_update_user(uint8_t index, bool clockwise) {
	if (index == 0) {
		if (clockwise) {
			encoder1_cw.pressed = true;
			encoder1_cw.time = (timer_read() | 1);
			action_exec(encoder1_cw);
		} else {
			encoder1_ccw.pressed = true;
			encoder1_ccw.time = (timer_read() | 1);
			action_exec(encoder1_ccw);
		}
	} else if (index == 1) {
		if (clockwise) {
			encoder2_cw.pressed = true;
			encoder2_cw.time = (timer_read() | 1);
			action_exec(encoder2_cw);
		} else {
			encoder2_ccw.pressed = true;
			encoder2_ccw.time = (timer_read() | 1);
			action_exec(encoder2_ccw);
		}
	} else if (index == 2) {
		if (clockwise) {
			encoder3_cw.pressed = true;
			encoder3_cw.time = (timer_read() | 1);
			action_exec(encoder3_cw);
		} else {
			encoder3_ccw.pressed = true;
			encoder3_ccw.time = (timer_read() | 1);
			action_exec(encoder3_ccw);
		}
	} else if (index == 3) {
		if (clockwise) {
			encoder4_cw.pressed = true;
			encoder4_cw.time = (timer_read() | 1);
			action_exec(encoder4_cw);
		} else {
			encoder4_ccw.pressed = true;
			encoder4_ccw.time = (timer_read() | 1);
			action_exec(encoder4_ccw);
		}
	} else if (index == 4) {
		if (clockwise) {
			encoder5_cw.pressed = true;
			encoder5_cw.time = (timer_read() | 1);
			action_exec(encoder5_cw);
		} else {
			encoder5_ccw.pressed = true;
			encoder5_ccw.time = (timer_read() | 1);
			action_exec(encoder5_ccw);
		}
	}
	return true;
}
