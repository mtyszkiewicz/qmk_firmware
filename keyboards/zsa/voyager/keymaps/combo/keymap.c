#include QMK_KEYBOARD_H

const uint16_t PROGMEM af_combo[] = {KC_A, KC_F, COMBO_END};
const uint16_t PROGMEM sf_combo[] = {KC_S, KC_F, COMBO_END};
const uint16_t PROGMEM df_combo[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM sd_combo[] = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM sdf_combo[] = {KC_S, KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM jscln_combo[] = {KC_SCLN, KC_J, COMBO_END};
const uint16_t PROGMEM jl_combo[] = {KC_L, KC_J, COMBO_END};
const uint16_t PROGMEM jk_combo[] = {KC_K, KC_J, COMBO_END};
const uint16_t PROGMEM kl_combo[] = {KC_L, KC_K, COMBO_END};
const uint16_t PROGMEM jkl_combo[] = {KC_J, KC_K, KC_L, COMBO_END};

combo_t key_combos[] = {
    COMBO(af_combo, KC_LALT),
    COMBO(sf_combo, KC_LCTL),
    COMBO(df_combo, KC_LSFT),
    COMBO(sd_combo, KC_LGUI),
    COMBO(sdf_combo, LSFT(KC_LGUI)),
    COMBO(jscln_combo, KC_RALT),
    COMBO(jl_combo, KC_RCTL),
    COMBO(jk_combo, KC_RSFT),
    COMBO(kl_combo, KC_RGUI),
    COMBO(jkl_combo, RSFT(KC_RGUI)),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        _______, KC_1,  KC_2,  KC_3,  KC_4,  KC_5,      KC_6,        KC_7,      KC_8,     KC_9,    KC_0,     _______,
        CW_TOGG, KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,      KC_Y,        KC_U,      KC_I,     KC_O,    KC_P,     _______,
        _______, KC_A,  KC_S,  KC_D,  KC_F,  KC_G,      KC_H,        KC_J,      KC_K,     KC_L,    KC_SCLN,  KC_QUOT,
        _______, KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,      KC_N,        KC_M,      KC_COMM,  KC_DOT,  KC_SLSH,  KC_BSPC,
                                             KC_ESCAPE, KC_SPACE,    KC_SPACE,  KC_TAB
    )
};
