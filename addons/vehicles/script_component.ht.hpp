#define COMPONENT vehicles
#include "\{{mainprefix}}\{{prefix}}\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_HELICOPTER
    #define DEBUG_MODE_FULL
#endif
    #ifdef DEBUG_SETTINGS_OTHER
    #define DEBUG_SETTINGS DEBUG_SETTINGS_HELICOPTER
#endif

#include "\{{mainprefix}}\{{prefix}}\addons\main\script_macros.hpp"

#define noseArt(a,b,c,d) class c##: default {displayName = d; statement = '_target setObjectTextureGlobal [0, QPATHTOF(data\textures\uh60\##a##) ]; _target setObjectTextureGlobal [1, QPATHTOF(data\textures\uh60\##b##)];' ;};
#define faction(a,b) class GVAR(a): b {faction = "61st_Aux";};