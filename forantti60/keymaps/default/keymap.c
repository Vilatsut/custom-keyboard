// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
     * │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ Backsp│
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
     * │ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │  \  │
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
     * │ Caps │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │  Enter │
     * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤
     * │ Shift  │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │    Shift │
     * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
     * │Ctrl│GUI │Alt │                        │Ctrl│ FN1│FN2 │RGUI│
     * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
     */
    [0] = LAYOUT_60_ansi(
		KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, 
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, 
		KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, 
		KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, 
		KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_RCTL, TT(1), TT(2), KC_RGUI
    ),
    /*
     * ┌───┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬──────┐
     * │ ` │ F1 │ F2 │ F3 │ F4 │ F5 │ F6 │ F7 │ F8 │ F9 │F10 │F11 │F12 │ DEL  │
     * ├───┴─┬──┴─┬──┴─┬──┴─┬──┴─┬──┴─┬──┴─┬──┴─┬──┴─┬──┴─┬──┴─┬──┴─┬──┴─┬────┤
     * │VOLU │TRNS│ UP │TRNS│TRNS│TRNS│TRNS│TRNS│TRNS│TRNS│TRNS│PGUP│TRNS│INS │
     * ├─────┴┬───┴┬───┴┬───┴┬───┴┬───┴┬───┴┬───┴┬───┴┬───┴┬───┴┬───┴┬───┴────┤
     * │ MUTE │LEFT│DOWN│RGHT│TRNS│TRNS│TRNS│TRNS│TRNS│TRNS│HOME│END │ QKBOOT │
     * ├──────┴─┬──┴─┬──┴─┬──┴─┬──┴─┬──┴─┬──┴─┬──┴─┬──┴─┬──┴─┬──┴─┬──┴────────┤
     * │  VOLD  │PREV│STOP│PLAY│NEXT│TRNS│TRNS│TRNS│TRNS│TRNS│PGDN│    TRNS   │
     * ├─────┬──┴──┬─┴───┬┴────┴────┴────┴────┴────┴──┬─┴───┬┴────┼─────┬─────┤
     * │ TRNS│ TRNS│ TRNS│           TRNS             │RALT │TRNS │TRNS │TRNS │
     * └─────┴─────┴─────┴────────────────────────────┴─────┴─────┴─────┴─────┘
     */
    [1] = LAYOUT_60_ansi(
		KC_GRV , KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL, 
		KC_VOLU, KC_TRNS, KC_UP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP, KC_TRNS, KC_INS, 
		KC_MUTE, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_END, QK_BOOT, 
		KC_VOLD, KC_MPRV, KC_MSTP, KC_MPLY, KC_MNXT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGDN, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_RALT, KC_TRNS, KC_TRNS, KC_TRNS
    )
};
