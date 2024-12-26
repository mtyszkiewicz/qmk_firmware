#include QMK_KEYBOARD_H

// Left-hand home row mods
#define HOME_A LALT_T(KC_A)
#define HOME_S LCTL_T(KC_S)
#define HOME_D LSFT_T(KC_D)
#define HOME_F LGUI_T(KC_F)

// Right-hand home row mods
#define HOME_J RGUI_T(KC_J)
#define HOME_K RSFT_T(KC_K)
#define HOME_L RCTL_T(KC_L)
#define HOME_SCLN RALT_T(KC_SCLN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,      KC_5,          KC_6,     KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,
        CW_TOGG, KC_Q,    KC_W,    KC_E,    KC_R,      KC_T,          KC_Y,     KC_U,    KC_I,    KC_O,    KC_P,     KC_BSLS,
        KC_BSPC, HOME_A,  HOME_S,  HOME_D,  HOME_F,    KC_G,          KC_H,     HOME_J,  HOME_K,  HOME_L,  HOME_SCLN,KC_QUOT,
        KC_LGUI, KC_Z,    KC_X,    KC_C,    KC_V,      KC_B,          KC_N,     KC_M,    KC_COMMA,KC_DOT,  KC_SLSH,  KC_BSPC,
                                            KC_ESCAPE, KC_ENTER,      KC_SPACE, KC_TAB
    )
};
