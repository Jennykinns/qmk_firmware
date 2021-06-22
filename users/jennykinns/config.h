#pragma once

#define FORCE_NKRO

// HOMEROW MODS
#ifdef TAPPING_TERM
#    undef TAPPING_TERM
#endif
#define TAPPING_TERM 150
#define IGNORE_MOD_TAP_INTERRUPT
#define PERMISSIVE_HOLD


#ifdef LEADER_ENABLE
#    undef LEADER_TIMEOUT
#    define LEADER_PER_KEY_TIMING
#    define LEADER_TIMEOUT 250
#endif // LEADER
