#include QMK_KEYBOARD_H

enum layers {
	_BSE = 0,
	_LWR,
	_RSE,
	_SYS,
};

#define LS_SPC LSFT_T(KC_SPC)
#define RS_ENT RSFT_T(KC_ENT)

#define LC_A LCTL_T(KC_A)

#define RC_P RCTL_T(KC_P)

#define MO_LWR MO(_LWR)
#define MO_RSE MO(_RSE)
#define MO_ADJ MO(_SYS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	
	[_BSE] = LAYOUT_split_3x6_3(
		 KC_ESC,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,             KC_Y,    KC_U,    KC_I,    KC_O, KC_SCLN, KC_BSPC,
		 KC_TAB,    LC_A,    KC_S,    KC_D,    KC_F,    KC_G,             KC_H,    KC_J,    KC_K,    KC_L,    RC_P, KC_LGUI,
		 KC_GRV,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,             KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_NUBS,

		                            MO_LWR,  LS_SPC, KC_LALT,          KC_RALT,  RS_ENT,  MO_RSE
	),
	
	[_LWR] = LAYOUT_split_3x6_3(
		_______,  KC_EQL,    KC_1,    KC_2,    KC_3, KC_UNDS,          _______,   KC_F1,   KC_F2,   KC_F3,  KC_F10, _______,
		_______, KC_PLUS,    KC_4,    KC_5,    KC_6, KC_MINS,          _______,   KC_F4,   KC_F5,   KC_F6,  KC_F11, _______,
		_______,    KC_0,    KC_7,    KC_8,    KC_9,    KC_0,          _______,   KC_F7,   KC_F8,   KC_F9,  KC_F12, _______,
		
		                           _______, _______, _______,          KC_LALT, _______,  MO_ADJ
	),
	
	[_RSE] = LAYOUT_split_3x6_3(
		_______, _______, _______, _______, _______, _______,          XXXXXXX, XXXXXXX,   KC_UP, XXXXXXX, KC_QUOT,  KC_DEL,
		_______, _______, _______, _______, _______, _______,          XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, KC_BSLS,  KC_INS,
		_______, _______, _______, _______, _______, _______,          KC_LBRC, KC_RBRC, KC_LPRN, KC_RPRN, KC_LCBR, KC_RCBR,
		
		                            MO_ADJ, _______, _______,          _______, _______, _______
	),
	
	[_SYS] = LAYOUT_split_3x6_3(
		  RESET, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		
		                           _______, _______, _______,          _______, _______, _______
	),
	
};