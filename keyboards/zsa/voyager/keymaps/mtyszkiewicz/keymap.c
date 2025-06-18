#include QMK_KEYBOARD_H

const uint16_t PROGMEM combo_left_option[] = {KC_A, KC_F, COMBO_END};
const uint16_t PROGMEM combo_left_control[] = {KC_S, KC_F, COMBO_END};
const uint16_t PROGMEM combo_left_shift[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM combo_left_command[] = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM combo_left_command_shift[] = {KC_S, KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM combo_left_command_option[] = {KC_A, KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM combo_left_tmux_prefix[] = {KC_F, KC_SPACE, COMBO_END};

const uint16_t PROGMEM combo_right_option[] = {KC_ENTER, KC_J, COMBO_END};
const uint16_t PROGMEM combo_right_control[] = {KC_L, KC_J, COMBO_END};
const uint16_t PROGMEM combo_right_shift[] = {KC_K, KC_J, COMBO_END};
const uint16_t PROGMEM combo_right_command[] = {KC_L, KC_K, COMBO_END};
const uint16_t PROGMEM combo_right_command_shift[] = {KC_J, KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM combo_right_command_option[] = {KC_J, KC_K, KC_ENTER, COMBO_END};
const uint16_t PROGMEM combo_right_tmux_prefix[] = {KC_J, KC_SPACE, COMBO_END};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_CAPS,  _______,  _______,  _______,  _______,  _______,      _______,  _______,  _______,  _______,  _______,  TO(2),
        CW_TOGG,  KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,         KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     _______,
        KC_ESC,   KC_A,     KC_S,     KC_D,     KC_F,     KC_G,         KC_H,     KC_J,     KC_K,     KC_L,     KC_ENTER, KC_BSPC,
        KC_TAB,   KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,         KC_N,     KC_M,     KC_RIGHT, KC_UP,    KC_DOWN,  KC_LEFT,
                                                TT(1),    KC_SPACE,     KC_SPACE, TT(1)
    ),
    [1] = LAYOUT(
        UG_NEXT,  UG_PREV,  _______,  _______,  _______,  _______,      _______,  _______,  _______,  _______,  _______,  _______,
        KC_BSLS,  KC_SLSH,  KC_DQT,   KC_COLN,  KC_LPRN,  KC_LBRC,      KC_LCBR,  KC_COMM,  KC_DOT,   KC_UNDS,  KC_EQUAL, KC_GRAVE,
        KC_ESC,   KC_1,     KC_2,     KC_3,     KC_4,         KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_BSPC,
        KC_PIPE,  KC_QUES,  KC_QUOTE, KC_SCLN,  KC_RPRN,  KC_RBRC,      KC_RCBR,  KC_LT,    KC_GT,    KC_MINUS, KC_PLUS,  KC_TILDE,
                                                TO(0),    KC_LSFT,      KC_RSFT,  KC_TAB
    ),
    // Windows gaming:
    // - Left keybaord part is shifted 1 column right (better WASD access)
    // - CAPS switched with Shift
    // - Right space replaced by Win key
    [2] = LAYOUT(
        KC_ESC,   KC_0,     KC_1,     KC_2,     KC_3,     KC_4,         KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     TO(0),
        KC_T,     KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,         KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_BSPC,
        KC_G,     KC_LSFT,  KC_A,     KC_S,     KC_D,     KC_F,         KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_ENTER,
        KC_B,     KC_CAPS,  KC_Z,     KC_X,     KC_C,     KC_V,         KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,
                                                KC_LCTL,  KC_SPACE,     KC_RGUI,  KC_LALT
    )
};

bool combo_should_trigger(uint16_t combo_index, combo_t *combo, uint16_t keycode, keyrecord_t *record) {
    // Disable all combos on layer 2 (gaming layer)
    if (get_highest_layer(layer_state) == 2) {
        return false;
    }
    return true;
}

combo_t key_combos[] = {
    COMBO(combo_left_option, KC_LALT),
    COMBO(combo_left_control, KC_LCTL),
    COMBO(combo_left_shift, KC_LSFT),
    COMBO(combo_left_command, KC_LGUI),
    COMBO(combo_left_command_shift, LSFT(KC_LGUI)),
    COMBO(combo_left_command_option, LGUI(KC_LALT)),
    COMBO(combo_right_option, KC_RALT),
    COMBO(combo_right_control, KC_RCTL),
    COMBO(combo_right_shift, KC_RSFT),
    COMBO(combo_right_command, KC_RGUI),
    COMBO(combo_right_command_shift, RSFT(KC_RGUI)),
    COMBO(combo_right_command_option, RGUI(KC_RALT)),
    COMBO(combo_left_tmux_prefix, LCTL(KC_SPACE)),
    COMBO(combo_right_tmux_prefix, RCTL(KC_SPACE)),
};
