#define COMPONENT flag
#include "\{{mainprefix}}\{{prefix}}\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_FLAG
    #define DEBUG_MODE_FULL
#endif
    #ifdef DEBUG_SETTINGS_OTHER
    #define DEBUG_SETTINGS DEBUG_SETTINGS_FLAG
#endif

#include "\{{mainprefix}}\{{prefix}}\addons\main\script_macros.hpp"
