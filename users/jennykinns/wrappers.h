#pragma once
#include "jennykinns.h"

#if (!defined(LAYOUT) && defined(KEYMAP))
#    define LAYOUT KEYMAP
#endif

#define KEYMAP_wrapper(...)                  LAYOUT(__VA_ARGS__)
#define LAYOUT_wrapper(...)     LAYOUT(__VA_ARGS__)
#define LAYOUT_preonic_1x2uC_wrapper(...)   LAYOUT_preonic_1x2uC(__VA_ARGS__)


#define ____TRANS__________________________________    _______, _______, _______, _______, _______
#define ____BLANK__________________________________    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
#define ____BLANK_________________________             XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
#define ____BLANK________________                      XXXXXXX, XXXXXXX, XXXXXXX
#define ____BLANK_______                               XXXXXXX, XXXXXXX

#define ____NUMBER_LEFT____________________________    KC_1,    KC_2,    KC_3,    KC_4,    KC_5
#define ____NUMBER_RIGHT___________________________    KC_6,    KC_7,    KC_8,    KC_9,    KC_0
#define ____FUNCTION_LEFT__________________________    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5
#define ____FUNCTION_RIGHT_________________________    KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10

#define ____MEDIA__________________________________    KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_MPLY
#define ____VIMSTYLE_ARROWS_______________             KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
#define ____VIMSTYLE_NAVCLUSTER___________             KC_HOME, KC_PGDN, KC_PGUP, KC_END

#define ____RGB_1__________________________________    RGB_TOG, RGB_SAI, RGB_HUI, RGB_VAI, RGB_MOD
#define ____RGB_2__________________________________    XXXXXXX, RGB_SAD, RGB_HUD, RGB_VAD, RGB_RMOD

/* Qwerty
 * ,----------------------------------. ,----------------------------------.
 * |   Q  |   W  |   E  |   R  |   T  | |   Y  |   U  |   I  |   O  |   P  |
 * |------+------+------+------+------+ +-------------+------+------+------|
 * |   A  |   S  |   D  |   F  |   G  | |   H  |   J  |   K  |   L  |   '  |
 * |------+------+------+------+------+ +------|------+------+------+------|
 * |   Z  |   X  |   C  |   V  |   B  | |   N  |   M  |   ,  |   .  |   /  |
 * `----------------------------------' `----------------------------------'
*/
#define ____QWERTY_LEFT_1__________________________    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T
#define ____QWERTY_LEFT_2__________________________    KC_A,    KC_S,    KC_D,    KC_F,    KC_G
#define ____QWERTY_LEFT_3__________________________    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define ____QWERTY_RIGHT_1_________________________    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P
#define ____QWERTY_RIGHT_2_________________________    KC_H,    KC_J,    KC_K,    KC_L,    KC_QUOT
#define ____QWERTY_RIGHT_3_________________________    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH

/* Qwerty Home row Mod Taps */
#define ____QWERTY_LEFT_HOMEMODS_2_________________    MT(MOD_LGUI, KC_A), KC_S, MT(MOD_LALT, KC_D), MT(MOD_LSFT, KC_F), KC_G
#define ____QWERTY_RIGHT_HOMEMODS_2________________    KC_H, MT(MOD_LSFT, KC_J), MT(MOD_LALT, KC_K), KC_L, MT(MOD_RGUI, KC_QUOT)

/* Colemak-DH
 * ,----------------------------------. ,----------------------------------.
 * |   Q  |   W  |   F  |   P  |   B  | |   J  |   L  |   U  |   Y  |   '  |
 * |------+------+------+------+------+ +-------------+------+------+------|
 * |   A  |   R  |   S  |   T  |   G  | |   K  |   N  |   E  |   I  |   O  |
 * |------+------+------+------+------+ +------|------+------+------+------|
 * |   Z  |   X  |   C  |   D  |   V  | |   M  |   H  |   ,  |   .  |   /  |
 * `----------------------------------' `----------------------------------'
*/
#define ____COLEMAK_DH_LEFT_1______________________    KC_Q,    KC_W,    KC_F,    KC_P,    KC_B
#define ____COLEMAK_DH_LEFT_2______________________    KC_A,    KC_R,    KC_S,    KC_T,    KC_G
#define ____COLEMAK_DH_LEFT_3______________________    KC_Z,    KC_X,    KC_C,    KC_D,    KC_V

#define ____COLEMAK_DH_RIGHT_1_____________________    KC_J,    KC_L,    KC_U,    KC_Y,    KC_QUOT
#define ____COLEMAK_DH_RIGHT_2_____________________    KC_H,    KC_J,    KC_K,    KC_L,    KC_O
#define ____COLEMAK_DH_RIGHT_3_____________________    KC_M,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH

/* Dvorak
 * ,----------------------------------. ,----------------------------------.
 * |   '  |   ,  |   .  |   P  |   Y  | |   F  |   G  |   C  |   R  |   L  |
 * |------+------+------+------+------+ +-------------+------+------+------|
 * |   A  |   O  |   E  |   U  |   I  | |   D  |   H  |   T  |   N  |   S  |
 * |------+------+------+------+------+ +------|------+------+------+------|
 * |   /  |   Q  |   J  |   K  |   X  | |   B  |   M  |   W  |   V  |   Z  |
 * `----------------------------------' `----------------------------------'
*/
#define ____DVORAK_LEFT_1__________________________    KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y
#define ____DVORAK_LEFT_2__________________________    KC_A,    KC_O,    KC_E,    KC_U,    KC_I
#define ____DVORAK_LEFT_3__________________________    KC_SLSH, KC_Q,    KC_J,    KC_K,    KC_X

#define ____DVORAK_RIGHT_1_________________________    KC_F,    KC_G,    KC_C,    KC_R,    KC_L
#define ____DVORAK_RIGHT_2_________________________    KC_D,    KC_H,    KC_T,    KC_N,    KC_S
#define ____DVORAK_RIGHT_3_________________________    KC_B,    KC_M,    KC_W,    KC_V,    KC_Z

/* Workman
 * ,----------------------------------. ,----------------------------------.
 * |   Q  |   D  |   R  |   W  |   B  | |   J  |   F  |   U  |   P  |   '  |
 * |------+------+------+------+------+ +-------------+------+------+------|
 * |   A  |   S  |   H  |   T  |   G  | |   Y  |   N  |   E  |   O  |   I  |
 * |------+------+------+------+------+ +------|------+------+------+------|
 * |   Z  |   X  |   M  |   C  |   V  | |   K  |   L  |   ,  |   .  |   /  |
 * `----------------------------------' `----------------------------------'
*/
#define ____WORKMAN_LEFT_1_________________________    KC_Q,    KC_D,    KC_R,    KC_W,    KC_B
#define ____WORKMAN_LEFT_2_________________________    KC_A,    KC_S,    KC_H,    KC_T,    KC_G
#define ____WORKMAN_LEFT_3_________________________    KC_Z,    KC_X,    KC_M,    KC_C,    KC_V

#define ____WORKMAN_RIGHT_1________________________    KC_J,    KC_F,    KC_U,    KC_P,    KC_QUOT
#define ____WORKMAN_RIGHT_2________________________    KC_Y,    KC_N,    KC_E,    KC_O,    KC_I
#define ____WORKMAN_RIGHT_3________________________    KC_K,    KC_L,    KC_COMM, KC_DOT,  KC_SLSH

/* Lower
 * ,----------------------------------. ,----------------------------------.
 * |   1  |   2  |   3  |   4  |   5  | |   6  |   7  |   8  |   9  |   0  |
 * |------+------+------+------+------+ +-------------+------+------+------|
 * |   4  |   5  |   6  |   0  |   /  | | Left | Down |  Up  |Right |      |
 * |------+------+------+------+------+ +------|------+------+------+------|
 * |   7  |   8  |   9  |   .  |   *  | | Home | PgDn | PgUp | End  |      |
 * `----------------------------------' `----------------------------------'
*/
#define ____LOWER_LEFT_1___________________________    ____NUMBER_LEFT____________________________
#define ____LOWER_LEFT_2___________________________    KC_4,    KC_5,    KC_6,    KC_0,    KC_SLSH
#define ____LOWER_LEFT_3___________________________    KC_7,    KC_8,    KC_9,    KC_DOT,  KC_ASTR

#define ____LOWER_RIGHT_1__________________________    ____NUMBER_RIGHT___________________________
#define ____LOWER_RIGHT_2__________________________    ____VIMSTYLE_ARROWS_______________, XXXXXXX
#define ____LOWER_RIGHT_3__________________________    ____VIMSTYLE_NAVCLUSTER___________, XXXXXXX

/* Raise
 * ,----------------------------------. ,----------------------------------.
 * |   !  |   "  |   £  |   $  |   %  | |   ^  |   &  |   *  |   -  |   +  |
 * |------+------+------+------+------+ +-------------+------+------+------|
 * |   `  |   \  |   {  |   (  |   [  | |   ]  |   )  |   }  |   _  |   =  |
 * |------+------+------+------+------+ +------|------+------+------+------|
 * |   ¬  |   |  |      |      |      | |      |   ;  |   :  |   #  |   ~  |
 * `----------------------------------' `----------------------------------'
*/
#define ____RAISE_LEFT_1___________________________    KC_EXLM, KC_AT,      KC_HASH, KC_DLR,  KC_PERC
#define ____RAISE_LEFT_2___________________________    KC_GRV,  KC_NUBS,    KC_LCBR, KC_LPRN, KC_LBRC
#define ____RAISE_LEFT_3___________________________    KC_TILD, S(KC_NUBS), XXXXXXX, XXXXXXX, XXXXXXX

#define ____RAISE_RIGHT_1__________________________    KC_CIRC, KC_AMPR,    KC_ASTR, KC_MINS, KC_PLUS
#define ____RAISE_RIGHT_2__________________________    KC_RBRC, KC_RPRN,    KC_RCBR, KC_UNDS, KC_EQL
#define ____RAISE_RIGHT_3__________________________    XXXXXXX, KC_SCLN,    KC_COLN, KC_NUHS, S(KC_NUHS)

/* Default Mapping
 * ,----------------------------------. ,----------------------------------.
 * |Qwerty|Workmn|      |      |      | |      |      |      |      |      |
 * |------+------+------+------+------+ +-------------+------+------+------|
 * |      |      |Dvorak|      |Gaming| |      |      |      |      |      |
 * |------+------+------+------+------+ +------|------+------+------+------|
 * |      |      |Colemk|      |      | |      |      |      |      |      |
 * `----------------------------------' `----------------------------------'
*/
#define ____DEFAULT_MAPPING_LEFT_1_________________    KL_QWRT, KL_WKMN, ____BLANK________________
#define ____DEFAULT_MAPPING_LEFT_2_________________    ____BLANK_______, KL_DVRK, XXXXXXX, KL_GAME
#define ____DEFAULT_MAPPING_LEFT_3_________________    ____BLANK_______, KL_CLMK, ____BLANK_______

#define ____DEFAULT_MAPPING_RIGHT_1________________    ____BLANK__________________________________
#define ____DEFAULT_MAPPING_RIGHT_2________________    ____BLANK__________________________________
#define ____DEFAULT_MAPPING_RIGHT_3________________    ____BLANK__________________________________
