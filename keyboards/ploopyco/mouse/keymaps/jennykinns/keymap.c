/* Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
 * Copyright 2019 Sunjun Kim
 * Copyright 2020 Ploopy Corporation
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

// safe range starts at `PLOOPY_SAFE_RANGE` instead.
enum custom_layers {
    _MAIN,
    _MEDIA
};
enum custom_keycodes {
    MAIN = PLOOPY_SAFE_RANGE,
    MEDIA,
    ULCKSCL
};


/*
	  +---+ +---+
	+-+ 1 +-+ 3 +-+
	|0|   |2|   |4|
	| |   | |   | |
	|     +-+     |
	|     |7|     |
	+-+   +-+     |
	|6|           |
	+-+           |
	|5|           |
	+-+           |
	|             |
	+-------------+
*/


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_MAIN] = LAYOUT( \
      KC_LOCK, KC_BTN1, KC_BTN3, KC_BTN2, KC_F23, \
      KC_DEL, \
      MO(1), \
      DPI_CONFIG \
    ),
    [_MEDIA] = LAYOUT( \
      KC_F24, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, \
      XXXXXXX, \
      _______, \
      XXXXXXX \
    )
};

void process_wheel_user(report_mouse_t* mouse_report, int16_t h, int16_t v) {
    mouse_report->h = h * h * h;
    mouse_report->v = v * v * v;
}

/*bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MAIN:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_MAIN);
          }
          return false;
          break;
        case MEDIA:
          if (record->event.pressed) {
            layer_on(_MEDIA);
          } else {
            layer_off(_MEDIA);
          }
          return false;
          break;
    }
    return true;
}*/
