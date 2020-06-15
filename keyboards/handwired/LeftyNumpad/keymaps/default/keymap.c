/* Copyright 2020 Tom Swartz
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

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _NP,
    _FN
};

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
    QMKBEST = SAFE_RANGE,
    QMKURL,
    KC_00
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_NP] = LAYOUT(
        KC_BSPC,   KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS,
        KC_TAB,    KC_7,    KC_8,   KC_9,   KC_NO,
        TG(_FN),   KC_4,    KC_5,   KC_6,   KC_PPLS,
        KC_PGUP,   KC_1,    KC_2,   KC_3,   KC_NO,
        KC_PGDOWN, KC_00,   KC_0,   KC_PDOT, KC_PENT
    ),
    [_FN] = LAYOUT(
        _______, KC_MPLY, KC_F13,  KC_MPRV, KC_MNXT,
        _______, KC_F14,  KC_F15,  _______, _______,
        TG(_FN), _______, _______, _______, _______,
        KC_U,    KC_B,    _______, _______, _______,
        KC_D,    KC_F,    _______, _______, _______
    ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case QMKBEST:
            if (record->event.pressed) {
                // when keycode QMKBEST is pressed
                SEND_STRING("QMK is the best thing ever!");
            } else {
                // when keycode QMKBEST is released
            }
            break;
        case QMKURL:
            if (record->event.pressed) {
                // when keycode QMKURL is pressed
                SEND_STRING("https://qmk.fm/\n");
            } else {
                // when keycode QMKURL is released
            }
            break;
        case KC_00:
            if (record->event.pressed) {
                // when keycode DOUBLEZERO is pressed
                SEND_STRING("00");
            } else {
                // when keycode QMKURL is released
            }
            break;
    }
    return true;
}

/*
void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool led_update_user(led_t led_state) {
    return true;
}
*/
