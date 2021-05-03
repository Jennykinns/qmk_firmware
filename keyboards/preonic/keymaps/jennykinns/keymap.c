#include "jennykinns.h"

#include "muse.h"

/*
 * The `LAYOUT_preonic_base` macro is a template to allow the use of identical
 * modifiers for the default layouts (eg QWERTY, Colemak, Dvorak, etc), so
 * that there is no need to set them up for each layout, and modify all of
 * them if I want to change them.  This helps to keep consistency and ease
 * of use. K## is a placeholder to pass through the individual keycodes
 *
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |      |      |      |      |      |      |      |      |      |      | Del  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |      |      |      |      |      |      |      |      |      |      | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Enter|      |      |      |      |      |      |      |      |      |      |Enter |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|      |      |      |      |      |      |      |      |      |      |RShift|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Fn0  | Super| Alt  | Ctrl |Raise |    Space    |Lower | Ctrl | RAlt | Cmd  |Leader|
 * `-----------------------------------------------------------------------------------'
*/
#define LAYOUT_preonic_base( \
    K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, \
    K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, \
    K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A,  \
    K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A  \
    ) \
    LAYOUT_preonic_1x2uC( \
    KC_ESC,  K01,     K02,     K03,     K04,     K05,     K06,     K07,     K08,     K09,     K0A,     KC_DEL, \
    KC_TAB,  K11,     K12,     K13,     K14,     K15,     K16,     K17,     K18,     K19,     K1A,     KC_BSPC,  \
    KC_ENT,  K21,     K22,     K23,     K24,     K25,     K26,     K27,     K28,     K29,     K2A,     KC_ENT,   \
    KC_LSFT, K31,     K32,     K33,     K34,     K35,     K36,     K37,     K38,     K39,     K3A,     KC_RSFT,  \
    XXXXXXX, KC_LGUI, KC_LALT, KC_LCTL, TD(TD_RALO), KC_SPC,   TD(TD_LORA), KC_RCTL, KC_RALT, KC_APP,  KC_LEAD  \
    )
/* Re-pass though to allow templates to be used */
#define LAYOUT_preonic_base_wrapper(...)    LAYOUT_preonic_base(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_QWERTY] = LAYOUT_preonic_base_wrapper(
	____NUMBER_LEFT____________________________, ____NUMBER_RIGHT___________________________,
        ____QWERTY_LEFT_1__________________________, ____QWERTY_RIGHT_1_________________________,
        ____QWERTY_LEFT_2__________________________, ____QWERTY_RIGHT_2_________________________,
        ____QWERTY_LEFT_3__________________________, ____QWERTY_RIGHT_3_________________________
    ),
    [_COLEMAK] = LAYOUT_preonic_base_wrapper(
	____NUMBER_LEFT____________________________, ____NUMBER_RIGHT___________________________,
        ____COLEMAK_DH_LEFT_1______________________, ____COLEMAK_DH_LEFT_1______________________,
        ____COLEMAK_DH_LEFT_2______________________, ____COLEMAK_DH_LEFT_2______________________,
        ____COLEMAK_DH_LEFT_3______________________, ____COLEMAK_DH_LEFT_3______________________
    ),
    [_DVORAK] = LAYOUT_preonic_base_wrapper(
	____NUMBER_LEFT____________________________, ____NUMBER_RIGHT___________________________,
        ____DVORAK_LEFT_1__________________________, ____DVORAK_RIGHT_1_________________________,
        ____DVORAK_LEFT_2__________________________, ____DVORAK_RIGHT_2_________________________,
        ____DVORAK_LEFT_3__________________________, ____DVORAK_RIGHT_3_________________________
    ),
    [_WORKMAN] = LAYOUT_preonic_base_wrapper(
	____NUMBER_LEFT____________________________, ____NUMBER_RIGHT___________________________,
        ____WORKMAN_LEFT_1_________________________, ____WORKMAN_RIGHT_1________________________,
        ____WORKMAN_LEFT_2_________________________, ____WORKMAN_RIGHT_2________________________,
        ____WORKMAN_LEFT_3_________________________, ____WORKMAN_RIGHT_3________________________
    ),
        

/* 
 * Lower Layer: Number keys, navigation
 * ,-----------------------------------------------------------------------------------.
 * |      |   ____NUMBER_LEFT_____________   |   ____NUMBER_RIGHT____________   |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Del  |   ____LOWER_LEFT_1____________   |   ____LOWER_RIGHT_1___________   |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |   ____LOWER_LEFT_2____________   |   ____LOWER_RIGHT_2___________   |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |   ____LOWER_LEFT_3____________   |   ____LOWER_RIGHT_3___________   |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |######|      |Insert| Caps | Lock |
 * `-----------------------------------------------------------------------------------'
 */
[_LOWER] = LAYOUT_preonic_1x2uC_wrapper( \
  _______, ____NUMBER_LEFT____________________________, ____NUMBER_RIGHT___________________________, _______, \
  KC_DEL,  ____LOWER_LEFT_1___________________________, ____LOWER_RIGHT_1__________________________, _______, \
  _______, ____LOWER_LEFT_2___________________________, ____LOWER_RIGHT_2__________________________, _______, \
  _______, ____LOWER_LEFT_3___________________________, ____LOWER_RIGHT_3__________________________, _______, \
  _______, _______, _______, _______, _______, _______,          _______, _______, KC_INS,  KC_CAPS, KC_LOCK  \
),

/* 
 * Raise Layer: Symbols
 * ,-----------------------------------------------------------------------------------.
 * |      |   ____NUMBER_LEFT_____________   |   ____NUMBER_RIGHT____________   |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Del  |   ____RAISE_LEFT_1____________   |   ____RAISE_RIGHT_1___________   |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |   ____RAISE_LEFT_2____________   |   ____RAISE_RIGHT_2___________   |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |   ____RAISE_LEFT_3____________   |   ____RAISE_RIGHT_3___________   |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |######|             |      |      |      |NumLck|PrntSc|
 * `-----------------------------------------------------------------------------------'
 */
[_RAISE] = LAYOUT_preonic_1x2uC_wrapper( \
  _______, ____NUMBER_LEFT____________________________, ____NUMBER_RIGHT___________________________, _______, \
  KC_DEL,  ____RAISE_LEFT_1___________________________, ____RAISE_RIGHT_1__________________________, _______, \
  _______, ____RAISE_LEFT_2___________________________, ____RAISE_RIGHT_2__________________________, _______,  \
  _______, ____RAISE_LEFT_3___________________________, ____RAISE_RIGHT_3__________________________, _______, \
  _______, _______, _______, _______, _______, _______,          _______, _______, _______, KC_NLCK, KC_PSCR  \
),

/* 
 * Adjust Layer: RGB, Media, Default layout
 * ,-----------------------------------------------------------------------------------.
 * |  F11 |   ____FUNCTION_LEFT___________   |   ____FUNCTION_RIGHT__________   |  F12 |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Debug|Aud  0|Aud  1|Midi 0|Midi 1|Mus MD|      |      |      |      |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Reset|Mus  0|Mus  1|Voice-|Voice+|      |   ____MEDIA___________________   | Mute |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |DefMap|      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |######|             |######|      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_ADJUST] = LAYOUT_preonic_1x2uC_wrapper( \
  KC_F11,  ____FUNCTION_LEFT__________________________, ____FUNCTION_RIGHT_________________________,   KC_F12,   \
  DEBUG,   AU_OFF,  AU_ON,   MI_OFF,  MI_ON,   MU_MOD,  ____BLANK__________________________________,   XXXXXXX,  \
  RESET,   MU_OFF,  MU_ON,   MUV_DE,  MUV_IN,  XXXXXXX, ____MEDIA__________________________________,   KC_MUTE, \
  _______, ____BLANK__________________________________, XXXXXXX, OSL(_MAP), ____BLANK________________, _______, \
  _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______,   _______  \
),

/* MAP - Setting the Default Keymap Layer: QWERTY, DVORAK, ETC
 */
[_MAP] = LAYOUT_preonic_1x2uC_wrapper( \
  _______, ____BLANK__________________________________, ____BLANK__________________________________, _______,  \
  _______, ____DEFAULT_MAPPING_LEFT_1_________________, ____DEFAULT_MAPPING_RIGHT_1________________, _______,  \
  _______, ____DEFAULT_MAPPING_LEFT_2_________________, ____DEFAULT_MAPPING_RIGHT_2________________, _______, \
  _______, ____DEFAULT_MAPPING_LEFT_3_________________, ____DEFAULT_MAPPING_RIGHT_3________________, _______, \
  _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______  \
)


};

bool muse_mode = false;
/*
uint8_t last_muse_note = 0;
uint16_t muse_counter = 0;
uint8_t muse_offset = 70;
uint16_t muse_tempo = 50;
*/

void dip_switch_update_user(uint8_t index, bool active) {
    switch (index) {
        case 0:
            if (active) {
                layer_on(_ADJUST);
            } else {
                layer_off(_ADJUST);
            }
            break;
        case 1:
            if (active) {
                muse_mode = true;
            } else {
                muse_mode = false;
                #ifdef AUDIO_ENABLE
                    stop_all_notes();
                #endif
            }
     }
}

bool music_mask_user(uint16_t keycode) {
  switch (keycode) {
    case RAISE:
    case LOWER:
      return false;
    default:
      return true;
  }
}

