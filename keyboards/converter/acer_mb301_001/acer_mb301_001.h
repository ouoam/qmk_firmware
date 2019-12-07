#pragma once

#include "quantum.h"
#include "led.h"

/*  LAYOUT
   0   1    2    3    4    5    6    7    8    9    A    B    C    D    E    F    G

  ESC| F1 | F2 | F3 | F4 | F5 | F6 | F7 | F8 | F9 | F10| F11| F12| PSC| PAU| INS| DEL
  GRA| 1  | 2  | 3  | 4  | 5  | 6  | 7  | 8  | 9  | 0  | -  | =  |     BCKS     | HOM
  TAB| Q  | W  | E  | R  | T  | Y  | U  | I  | O  | P  | [  | ]  |       \      | PUP
  CAP| A  | S  | D  | F  | G  | H  | J  | K  | L  | ;  | '  |       ENTER       | PDN
   LSHIF  | Z  | X  | C  | V  | B  | N  | M  | ,  | .  | /  |     RSHIF    | UP | END
  LCT| FN | WIN|LALT|               SPACE              |RALT|MENU| RCT| LEF| DOW| RIG
*/

#define LAYOUT_acer_ansi( \
  K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F, K0G, \
  K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C,      K1E,      K1G, \
  K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C,      K2E,      K2G, \
  K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B,      K3D,           K3G, \
  K40,      K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B,      K4D,      K4F, K4G, \
  K50, K51, K52, K53,                K57,                K5B, K5C, K5D, K5E, K5F, K5G \
) { \
  {   K51,   K00, KC_NO, KC_NO, KC_NO,   K03, KC_NO,   K05,   K06,   K07,   K09, KC_NO,   K0A,   K0B, KC_NO,   K4G, KC_NO, KC_NO }, \
  { KC_NO,   K01,   K40, KC_NO, KC_NO,   K02, KC_NO,   K04,   K16,   K18,   K08, KC_NO,   K19,   K0C,   K0D,   K0E, KC_NO, KC_NO }, \
  { KC_NO,   K10, KC_NO,   K50, KC_NO,   K12, KC_NO,   K14,   K15,   K17,   K28, KC_NO,   K29,   K1A,   K1C,   K1E, KC_NO, KC_NO }, \
  { KC_NO,   K20, KC_NO, KC_NO,   K52,   K22, KC_NO,   K23,   K24,   K26,   K38, KC_NO,   K39,   K2B, KC_NO,   K3D, KC_NO, KC_NO }, \
  { KC_NO,   K30,   K4D, KC_NO, KC_NO,   K32, KC_NO,   K33,   K35,   K36,   K48, KC_NO, KC_NO, KC_NO,   K4F,   K2E,   K2G, KC_NO }, \
  { KC_NO,   K31, KC_NO, KC_NO, KC_NO,   K43,   K53,   K44,   K34,   K47,   K49, KC_NO,   K4A,   K4B,   K1G,   K3A, KC_NO,   K3G }, \
  { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   K42,   K5B, KC_NO,   K45,   K46,   K57,   K5C,   K3B, KC_NO,   K5E,   K5F,   K0G, KC_NO }, \
  { KC_NO,   K11, KC_NO,   K5D, KC_NO,   K21, KC_NO,   K13,   K25,   K27,   K37,   K0F,   K2A,   K1B,   K2C,   K5G, KC_NO, KC_NO }, \
}
