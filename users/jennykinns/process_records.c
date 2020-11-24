#include "jennykinns.h"

__attribute__((weak)) bool process_record_keymap(uint16_t keycode, keyrecord_t *record) { return true; }

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    // If console is enabled, it will print the matrix position and status of each key pressed
#ifdef KEYLOGGER_ENABLE
    xprintf("KL: kc: %u, col: %u, row: %u, pressed: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed);
#endif  // KEYLOGGER_ENABLE

    if (process_record_keymap(keycode, record)
    ) {
        switch (keycode) {
            /* Set the default key layout */
            case KL_QWRT ... KL_GAME:
                if (record->event.pressed) {
                    set_single_persistent_default_layer(keycode - KL_QWRT);
                }
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
        }
    }
    return true;
}
