#ifndef KB_H
#define KB_H

#include "quantum.h"

#define KEYMAP( \
	K000, K001, K002, K003, K004, K005,                               K011, K012, K013, K014, K015, K016, \
	K100, K101, K102, K103, K104,                                           K112, K113, K114, K115, K116, \
	K200, K201, K202, K203, K204, K205,                               K211, K212, K213, K214, K215, K216, \
	K300, K301, K302, K303, K304, K305,             K308, K309,       K311, K312, K313, K314, K315, K316, \
	                                                K408, K409  \
) { \
	{ K000,  K001,  K002,  K003,  K004,  K005,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K011,  K012,  K013,  K014,  K015,  K016 }, \
	{ K100,  K101,  K102,  K103,  K104,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K112,  K113,  K114,  K115,  K116 }, \
	{ K200,  K201,  K202,  K203,  K204,  K205,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K211,  K212,  K213,  K214,  K215,  K216 }, \
	{ K300,  K301,  K302,  K303,  K304,  K305,  KC_NO, KC_NO, K308,  K309,  KC_NO, K311,  K312,  K313,  K314,  K315,  K316 }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K408,  K409,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }  \
}

#endif