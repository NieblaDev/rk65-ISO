/*
    Copyright 2024 ND (@NieblaDev)
    SPDX-License-Identifier: GPL-2.0-or-later

    This is a keymap for the ISO version of the RK65 keyboard.
*/

#include QMK_KEYBOARD_H

enum layer_names {
    _BASE,       // 0
    _BASE_FN,    // 1
    _MAC,        // 2
    _MAC_FN,     // 3
    _BOOT,  	 // 4

};

void housekeeping_task_user(void) {
    if (IS_LAYER_ON(_MAC) || IS_LAYER_ON(_MAC_FN)) {
      gpio_write_pin_low(LED_MAC_PIN);
    } else {
      gpio_write_pin_high(LED_MAC_PIN);
    }
}

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE] = LAYOUT( /* Base [0]*/
        // ,-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------.              
            KC_ESC,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS,    KC_EQL,     KC_BSPC,    KC_MUTE,
        // |-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------,-----------,-----------|
            KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,       KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_LBRC,    KC_RBRC,    KC_ENT,     KC_DEL,
        // |-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------|           |-----------|
            KC_CAPS,    KC_A,       KC_S,       KC_D,       KC_F,       KC_G,       KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,    KC_BSLS,    /*       */ KC_PGUP,
        // |-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------'-----------'-----------|
            KC_LSFT,    KC_NUBS,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_RSFT,    KC_UP,      KC_PGDN,
        // |-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------|
            KC_LCTL,    KC_LGUI,    KC_LALT,                            KC_SPC,                                         KC_RALT,    MO(1),      /*       */ KC_LEFT,    KC_DOWN,    KC_RGHT
        // '-----------+-----------+-----------+-----------------------------------------------------------------------+-----------+-----------+-----------+-----------+-----------+-----------'
        ),

        [_BASE_FN] = LAYOUT( /* FN [1]*/

        // ,-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------.              
            KC_GRV,     KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,     RGB_TOG,    _______,
        // |-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------,-----------,-----------|
            _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    KC_HOME,    KC_SCRL,    _______,    KC_INSERT,
        // |-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------|           |-----------|
            _______,    TO(0),      TO(2),      _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    KC_PSCR,    RGB_MOD,    /*       */ KC_PAUSE,
        // |-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------'-----------'-----------|
            _______,    _______,    _______,    _______,    _______,    _______,    NK_TOGG,    _______,    _______,    RGB_HUI,    _______,    _______,    MO(4),      RGB_VAI,    KC_END,
        // |-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------|
            _______,    GU_TOGG,    _______,                            EE_CLR,                                         _______,    _______,    /*       */ RGB_SPD,    RGB_VAD,    RGB_SPI
        // '-----------+-----------+-----------+-----------------------------------------------------------------------+-----------+-----------+-----------+-----------+-----------+-----------'
        ),

        [_MAC] = LAYOUT( /* Mac [2]*/

        // ,-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------.              
            KC_ESC,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS,    KC_EQL,     KC_BSPC,    KC_MUTE,
        // |-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------,-----------,-----------|
            KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,       KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_LBRC,    KC_RBRC,    KC_ENT,     KC_DEL,
        // |-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------|           |-----------|
            KC_CAPS,    KC_A,       KC_S,       KC_D,       KC_F,       KC_G,       KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,    KC_BSLS,    /*       */ KC_PGUP,
        // |-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------'-----------'-----------|
            KC_LSFT,    KC_NUBS,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_RSFT,    KC_UP,      KC_PGDN,
        // |-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------|
            KC_LCTL,    KC_LGUI,    KC_LALT,                            KC_SPC,                                         KC_RALT,    MO(3),      /*       */ KC_LEFT,    KC_DOWN,    KC_RGHT
        // '-----------+-----------+-----------+-----------------------------------------------------------------------+-----------+-----------+-----------+-----------+-----------+-----------'
        ),

        [_MAC_FN] = LAYOUT( /* Mac_FN [3]*/
        
        // ,-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------.              
            KC_GRV,     KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,     RGB_TOG,    _______,
        // |-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------,-----------,-----------|
            _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    KC_HOME,    KC_SCRL,    _______,    KC_INSERT,
        // |-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------|           |-----------|
            _______,    TO(0),      TO(2),      _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    KC_PSCR,    RGB_MOD,    /*       */ KC_PAUSE,
        // |-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------'-----------'-----------|
            _______,    _______,    _______,    _______,    _______,    _______,    NK_TOGG,    _______,    _______,    RGB_HUI,    _______,    _______,    MO(4),      RGB_VAI,    KC_END,
        // |-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------|
            _______,    GU_TOGG,    _______,                            EE_CLR,                                         _______,    _______,    /*       */ RGB_SPD,    RGB_VAD,    RGB_SPI
        // '-----------+-----------+-----------+-----------------------------------------------------------------------+-----------+-----------+-----------+-----------+-----------+-----------'
        ),

        [_BOOT] = LAYOUT( /* Boot [4]*/
        // ,-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------.              
            QK_BOOT,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
        // |-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------,-----------,-----------|
            _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
        // |-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------|           |-----------|
            _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    /*       */ _______,
        // |-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------'-----------'-----------|
            _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
        // |-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------|
            _______,    _______,    _______,                            _______,                                        _______,    _______,    /*       */ _______,    _______,    _______
        // '-----------+-----------+-----------+-----------------------------------------------------------------------+-----------+-----------+-----------+-----------+-----------+-----------'
        )
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [1] = {ENCODER_CCW_CW(RGB_HUD, RGB_HUI)},
    [2] = {ENCODER_CCW_CW(_______, _______)},
    [3] = {ENCODER_CCW_CW(_______, _______)},
    [4] = {ENCODER_CCW_CW(_______, _______)}
};
#endif
