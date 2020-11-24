#pragma once
#include "jennykinns.h"

typedef struct {
  bool is_press_action;
  int state;
} tap;

enum tapdance_types{
  SINGLE_TAP = 1,
  SINGLE_HOLD = 2,
  DOUBLE_TAP = 3,
  DOUBLE_HOLD = 4,
  DOUBLE_SINGLE_TAP = 5, //send two single taps
  TRIPLE_TAP = 6,
  TRIPLE_HOLD = 7
};

#ifdef TAP_DANCE_ENABLE
// clang-format off
enum {
    TD_CTLSH = 0,
    TD_LORA,
    TD_RALO,
};
// clang-format on
#endif  // TAP_DANCE_ENABLE

