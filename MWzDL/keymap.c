#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  DRAG_SCROLL,
  TOGGLE_SCROLL,
  NAVIGATOR_INC_CPI,
  NAVIGATOR_DEC_CPI,
  NAVIGATOR_TURBO,
  NAVIGATOR_AIM
};



#define DUAL_FUNC_0 LT(14, KC_Z)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT, 
    KC_TAB,         KC_Q,           MT(MOD_LALT, KC_W),MT(MOD_LCTL, KC_F),MT(MOD_LSFT, KC_P),KC_B,                                           KC_J,           MT(MOD_RSFT, KC_L),MT(MOD_RCTL, KC_U),MT(MOD_RALT, KC_Y),KC_SCLN,        KC_QUOTE,       
    KC_ESCAPE,      LT(5, KC_A),    LT(3, KC_R),    LT(2, KC_S),    LT(1, KC_T),    KC_G,                                           KC_M,           LT(1, KC_N),    LT(2, KC_E),    LT(3, KC_I),    KC_O,           KC_COMMA,       
    MT(MOD_LGUI, KC_SCRL),KC_Z,           KC_X,           KC_C,           KC_D,           KC_SLASH,                                       KC_BSLS,        KC_H,           KC_K,           KC_V,           KC_DOT,         KC_DELETE,      
                                                    MT(MOD_LSFT, KC_SPACE),ALL_T(KC_ENTER),                                MT(MOD_LGUI, KC_TAB),MT(MOD_LCTL, KC_BSPC)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_LLCK,        
    KC_TRANSPARENT, KC_NO,          KC_PIPE,        KC_LBRC,        KC_RBRC,        KC_NO,                                          KC_NO,          KC_LABK,        KC_RABK,        KC_PERC,        KC_COLN,        KC_DQUO,        
    KC_TRANSPARENT, KC_MINUS,       KC_UNDS,        KC_LPRN,        KC_RPRN,        KC_GRAVE,                                       KC_CIRC,        KC_ASTR,        KC_PLUS,        KC_EQUAL,       KC_DLR,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TILD,        KC_AMPR,        KC_LCBR,        KC_RCBR,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_HASH,        KC_QUES,        KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         QK_LLCK,        
    KC_TRANSPARENT, KC_NO,          KC_HOME,        KC_UP,          KC_END,         KC_PAGE_UP,                                     KC_AUDIO_VOL_UP,KC_7,           KC_8,           KC_9,           KC_COLN,        KC_NO,          
    KC_TRANSPARENT, KC_NO,          KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_PGDN,                                        KC_AUDIO_VOL_DOWN,KC_4,           KC_5,           KC_6,           KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_AUDIO_MUTE,  KC_1,           KC_2,           KC_3,           KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 MT(MOD_LGUI, KC_0),KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_F11,         KC_F12,         KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          RGB_TOG,        RGB_MODE_FORWARD,QK_LLCK,        
    KC_NO,          KC_NO,          KC_NO,          ST_MACRO_0,     ST_MACRO_1,     KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          LCTL(LSFT(KC_TAB)),LCTL(KC_TAB),   KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          LCTL(KC_C),     LCTL(KC_V),     KC_NO,                                          KC_NO,          RCTL(KC_V),     RCTL(KC_C),     KC_NO,          KC_NO,          KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    DUAL_FUNC_0,    KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       
    KC_CAPS,        KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    MT(MOD_LSFT, KC_BSPC),KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        MT(MOD_RSFT, KC_QUOTE),
    KC_LEFT_CTRL,   MT(MOD_LALT, KC_Z),KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         MT(MOD_RALT, KC_SLASH),KC_RIGHT_CTRL,  
                                                    KC_SPACE,       KC_ENTER,                                       KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    NAVIGATOR_DEC_CPI,NAVIGATOR_INC_CPI,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_LLCK,        
    KC_TRANSPARENT, KC_TRANSPARENT, NAVIGATOR_TURBO,KC_TRANSPARENT, KC_MS_BTN3,     TOGGLE_SCROLL,                                  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_A,           NAVIGATOR_AIM,  KC_MS_BTN1,     KC_MS_BTN2,     DRAG_SCROLL,                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    MT(MOD_LSFT, KC_SPACE),KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


const uint16_t PROGMEM combo0[] = { LT(5, KC_A), LT(3, KC_R), LT(2, KC_S), LT(1, KC_T), COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_A, KC_S, KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM combo2[] = { LT(5, KC_A), MT(MOD_LSFT, KC_SPACE), COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_A, MT(MOD_LSFT, KC_SPACE), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, TO(4)),
    COMBO(combo1, TO(0)),
    COMBO(combo2, TO(5)),
    COMBO(combo3, TO(0)),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(MOD_LGUI, KC_SCRL):
            return TAPPING_TERM -50;
        case KC_X:
            return TAPPING_TERM + 50;
        case KC_C:
            return TAPPING_TERM + 50;
        case KC_D:
            return TAPPING_TERM + 50;
        case KC_COMMA:
            return TAPPING_TERM + 50;
        case KC_H:
            return TAPPING_TERM + 50;
        case KC_DOT:
            return TAPPING_TERM + 50;
        default:
            return TAPPING_TERM;
    }
}


extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255} },

    [1] = { {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183}, {248,241,183} },

    [2] = { {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189}, {224,244,189} },

    [3] = { {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189}, {204,244,189} },

    [4] = { {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190}, {139,225,190} },

    [5] = { {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231}, {158,220,231} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
    switch (biton32(layer_state)) {
      case 0:
        set_layer_color(0);
        break;
      case 1:
        set_layer_color(1);
        break;
      case 2:
        set_layer_color(2);
        break;
      case 3:
        set_layer_color(3);
        break;
      case 4:
        set_layer_color(4);
        break;
      case 5:
        set_layer_color(5);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}

extern bool set_scrolling;
extern bool navigator_turbo;
extern bool navigator_aim;




bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX:
    // Mouse and consumer keys (volume, media) with modifiers work inconsistently across operating systems,
    // this makes sure that modifiers are always applied to the key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode)) || IS_CONSUMER_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
      if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_G)SS_DELAY(100)  SS_TAP(X_P));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_G)SS_DELAY(100)  SS_TAP(X_N));
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_EQUAL);
        } else {
          unregister_code16(KC_EQUAL);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_ESCAPE);
        } else {
          unregister_code16(KC_ESCAPE);
        }  
      }  
      return false;
    case DRAG_SCROLL:
      if (record->event.pressed) {
        set_scrolling = true;
      } else {
        set_scrolling = false;
      }
      return false;
    case TOGGLE_SCROLL:
      if (record->event.pressed) {
        set_scrolling = !set_scrolling;
      }
      return false;
    break;
  case NAVIGATOR_TURBO:
    if (record->event.pressed) {
      navigator_turbo = true;
    } else {
      navigator_turbo = false;
    }
    return false;
  case NAVIGATOR_AIM:
    if (record->event.pressed) {
      navigator_aim = true;
    } else {
      navigator_aim = false;
    }
    return false;
  case NAVIGATOR_INC_CPI:
    if (record->event.pressed) {
        pointing_device_set_cpi(1);
    }
    return false;
  case NAVIGATOR_DEC_CPI:
    if (record->event.pressed) {
        pointing_device_set_cpi(0);
    }
    return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}
