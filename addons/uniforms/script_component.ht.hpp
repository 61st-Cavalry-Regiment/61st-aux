#define COMPONENT uniforms
#include "\{{mainprefix}}\{{prefix}}\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_UNIFORMS
    #define DEBUG_MODE_FULL
#endif
    #ifdef DEBUG_SETTINGS_OTHER
    #define DEBUG_SETTINGS DEBUG_SETTINGS_UNIFORMS
#endif

#include "\{{mainprefix}}\{{prefix}}\addons\main\script_macros.hpp"

#define NEW_UNIFORM(grp,name) GVAR(TRIPLES(grp,name,uniform))
#define NEW_UNIFORM_WEP(grp,name) GVAR(DOUBLES(grp,name))

#define NEW_INF_UNIFORM(name) \
    class NEW_UNIFORM(inf,name) : NEW_UNIFORM(inf,base) { \
        scope = 2; \
        scopeCurator = 2; \
        hiddenSelectionsTextures[] = {QPATHTOF(_textures\inf\##name##.paa),"rhsusf\addons\rhsusf_infantry2\acu\data\rhsusf_uniform_acu_02_oefcp_co.paa","rhsusf\addons\rhsusf_infantry2\acu\data\rhsusf_uniform_acu_03_ucp_co.paa","#(argb,8,8,3)color(0,0,0,0)","rhsusf\addons\rhsusf_infantry2\acu\data\rhsusf_uniform_acu_acc2_co.paa"}; \
    };

#define NEW_INF_UNIFORM_WEP(name) \
    class NEW_UNIFORM_WEP(inf,name) : NEW_UNIFORM_WEP(inf,base) { \
        scope = 2; \
        scopeCurator = 2; \
        displayName = QUOTE([61st] Uniform ('##name##')); \
        class ItemInfo : ItemInfo { \
            uniformClass = QUOTE(NEW_UNIFORM(inf,name)); \
        }; \
    };