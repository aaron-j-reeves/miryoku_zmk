#pragma once

#define MEH(kp) LC(LS(LA(kp)))

#define MIRYOKU_ALTERNATIVES_BASE_QWERTY_FLIP \
&kp ESC,           &kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             &kp BKSP,           \
&kp GRAVE,         U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SEMI),  &kp SQT,            \
U_LT(U_SYM, TAB),  &kp Z,             &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp FSLH,          U_LT(U_MEDIA, EQUAL)\
U_LT(U_BUTTON, MINUS),U_LT(U_FUN, DEL),MEH(LEFT),        MEH(RIGHT),        U_LT(U_NUM, RET),                     &kp SPACE,                            U_LT(U_NAV, BSLH), U_LT(U_MOUSE, LEFT),&mt_meh UP,       U_LT(U_BUTTON, RIGHT)

#define MIRYOKU_ALTERNATIVES_TAP_QWERTY_FLIP \
&kp ESC,           &kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             &kp BKSP,          \
&kp GRAVE,         &kp A,             &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SEMI,          &kp SQT,           \
&kp TAB,           &kp Z,             &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp FSLH,          &kp EQUAL,         \
&kp MINUS,         &kp UNDER,         &kp DEL,           &kp BSPC,          &kp RET,                              &kp SPACE,                            &kp BSLH,          &kp LEFT,          &kp DOWN,          &kp RIGHT

#define MIRYOKU_ALTERNATIVES_NAV_INVERTEDT_FLIP \
&kp ESC,           &kp PG_UP,         &kp HOME,          &kp UP,            &kp END,           &kp INS,           U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            &kp BKSP,          \
&kp GRAVE,         &kp PG_DN,         &kp LEFT,          &kp DOWN,          &kp RIGHT,         &u_caps_word,      U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          &kp SQT,           \
&kp TAB,           U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              &u_to_U_NAV,       &u_to_U_NUM,       &kp RALT,          U_NA,              &kp EQUAL,         \
&kp MINUS,         &kp UNDER,         &kp DEL,           &kp BSPC,          &kp RET,                              &kp SPACE,                            &kp BSLH,          &kp LEFT,          &kp DOWN,          &kp RIGHT

#define MIRYOKU_ALTERNATIVES_MOUSE_INVERTEDT_FLIP \
&kp ESC,           U_WH_U,            U_WH_L,            U_MS_U,            U_WH_R,            U_NU,              U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            &kp BKSP,          \
&kp GRAVE,         U_WH_D,            U_MS_L,            U_MS_D,            U_MS_R,            U_NU,              U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          &kp SQT,           \
&kp TAB,           U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              &u_to_U_MOS,       &u_to_U_SYM,       &kp RALT,          U_NA,              &kp EQUAL,         \
&kp MINUS,         &kp UNDER,         &kp DEL,           &kp BSPC,          &kp RET,                              &kp SPACE,                            &kp BSLH,          &kp LEFT,          &kp DOWN,          &kp RIGHT

#define MIRYOKU_ALTERNATIVES_MEDIA_INVERTEDT_FLIP \
&kp ESC,           U_RGB_HUI,         U_RGB_SAI,         &kp C_VOL_UP,      U_RGB_BRI,         U_RGB_TOG,         U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            &kp BKSP,          \
&kp GRAVE,         U_RGB_EFF,         &kp C_PREV,        &kp C_VOL_DN,      &kp C_NEXT,        U_EP_TOG,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          &kp SQT,           \
&kp TAB,           &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       &u_out_tog,        U_NA,              &u_to_U_MEDIA,     &u_to_U_FUN,       &kp RALT,          U_NA,              &kp EQUAL,         \
&kp MINUS,         &kp UNDER,         &kp DEL,           &kp BSPC,          &kp RET,                              &kp SPACE,                            &kp BSLH,          &kp LEFT,          &kp DOWN,          &kp RIGHT

#define MIRYOKU_ALTERNATIVES_NUM_FLIP \
&kp ESC,           _BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              &kp LBKT,          &kp N7,            &kp N8,            &kp N9,            &kp RBKT,          &kp BKSP,          \
&kp GRAVE,         kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp EQUAL,         &kp N4,            &kp N5,            &kp N6,            &kp SEMI,          &kp SQT,           \
&kp TAB,           _NA,              &kp RALT,          &u_to_U_NAV,       &u_to_U_NUM,       U_NA,              &kp BSLH,          &kp N1,            &kp N2,            &kp N3,            &kp GRAVE,         &kp EQUAL,         \
&kp MINUS,         &kp UNDER,        &kp DEL,           &kp BSPC,          &kp RET,                              &kp SPACE,                            &kp BSLH,          &kp LEFT,          &kp DOWN,          &kp RIGHT

#define MIRYOKU_ALTERNATIVES_SYM_FLIP \
&kp ESC,           U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              &kp LBRC,          &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RBRC,          &kp BKSP,          \
&kp GRAVE,         &kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp PLUS,          &kp DLLR,          &kp PRCNT,         &kp CARET,         &kp COLON,         &kp SQT,           \
&kp TAB,           U_NA,              &kp RALT,          &u_to_U_MOS,       &u_to_U_SYM,       U_NA,              &kp PIPE,          &kp EXCL,          &kp AT,            &kp HASH,          &kp TILDE,         &kp EQUAL,         \
&kp MINUS,         &kp UNDER,         &kp DEL,           &kp BSPC,          &kp RET,                              &kp SPACE,                            &kp BSLH,          &kp LEFT,          &kp DOWN,          &kp RIGHT

#define MIRYOKU_ALTERNATIVES_FUN_FLIP \
&kp ESC,           U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              &kp PSCRN,         &kp F7,            &kp F8,            &kp F9,            &kp F12,           &kp BKSP,          \
&kp GRAVE,         &kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp SLCK,          &kp F4,            &kp F5,            &kp F6,            &kp F11,           &kp SQT,           \
&kp TAB,           U_NA,              &kp RALT,          &u_to_U_MEDIA,     &u_to_U_FUN,       U_NA,              &kp PAUSE_BREAK,   &kp F1,            &kp F2,            &kp F3,            &kp F10,           &kp EQUAL,         \
&kp MINUS,         &kp UNDER,         &kp DEL,           &kp BSPC,          &kp RET,                              &kp SPACE,                            &kp BSLH,          &kp LEFT,          &kp DOWN,          &kp RIGHT


