#pragma once

#define PERMISSIVE_HOLD_PER_KEY
#define TAPPING_TERM 300
// #define TAPPING_TERM_PER_KEY
#define QUICK_TAP_TERM_PER_KEY

/* cannot put this here, conflicts with ../../../info.json :
 * #define DYNAMIC_KEYMAP_LAYER_COUNT 6
 * it should not conflict and take precedence apparently, 
 * but as workaround we feed the definition in in rules.mk 
 */
