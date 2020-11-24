#pragma once
#include "jennykinns.h"

#if defined(KEYMAP_SAFE_RANGE)
#    define PLACEHOLDER_SAFE_RANGE KEYMAP_SAFE_RANGE
#else
#    define PLACEHOLDER_SAFE_RANGE SAFE_RANGE
#endif

enum userspace_custom_keycodes {
    KL_QWRT = PLACEHOLDER_SAFE_RANGE,
    KL_CLMK,
    KL_DVRK,
    KL_WKMN,
    KL_GAME,
    NEW_SAFE_RANGE
};

bool process_record_keymap(uint16_t keycode, keyrecord_t *record);

#define LOWER  MO(_LOWER)
#define RAISE  MO(_RAISE)
#define ADJUST MO(_ADJUST)

