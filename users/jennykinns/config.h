#pragma once

#define FORCE_NKRO

#ifdef TAPPING_TERM
#    undef TAPPING_TERM
#    define TAPPING_TERM 200
#endif  // TAPPING_TERM

#ifdef LEADER_ENABLE
#    undef LEADER_TIMEOUT
#    define LEADER_PER_KEY_TIMING
#    define LEADER_TIMEOUT 250
#endif // LEADER
