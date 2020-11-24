#include "jennykinns_tapDances.h"

/* lower on single, raise on double */
void dance_lower_raise_finished(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        layer_on(_LOWER);
    } else {
        layer_on(_RAISE);
    }
}
void dance_lower_raise_reset(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        layer_off(_LOWER);
    } else {
        layer_off(_RAISE);
    }
}

/* raise on single, lower on double */
void dance_raise_lower_finished(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        layer_on(_RAISE);
    } else {
        layer_on(_LOWER);
    }
}
void dance_raise_lower_reset(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        layer_off(_RAISE);
    } else {
        layer_off(_LOWER);
    }
}


qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_CTLSH] = ACTION_TAP_DANCE_DOUBLE(KC_LCTL, KC_LSFT),
    [TD_LORA] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_lower_raise_finished, dance_lower_raise_reset),
    [TD_RALO] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_raise_lower_finished, dance_raise_lower_reset),
};


