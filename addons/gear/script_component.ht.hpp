#define COMPONENT gear
#include "\{{mainprefix}}\{{prefix}}\addons\main\script_mod.hpp"

#define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_GEAR
    #define DEBUG_MODE_FULL
#endif
    #ifdef DEBUG_SETTINGS_OTHER
    #define DEBUG_SETTINGS DEBUG_SETTINGS_GEAR
#endif

#include "\{{mainprefix}}\{{prefix}}\addons\main\script_macros.hpp"

#define HGU(a,b,c) class GVAR(c):rhsusf_hgu56p {displayName = HGU-56/P (##a##); hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_olv_co.paa", QPATHTOF(b)};};\
    class GVAR(c##_visor):rhsusf_hgu56p_visor {scope = protected; displayName = HGU-56/P (##a##/Visor); hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_olv_co.paa", QPATHTOF(b)};};\
    class GVAR(c##_mask):rhsusf_hgu56p_mask {scope = protected; displayName = HGU-56/P (##a##/Mask); hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_olv_co.paa", QPATHTOF(b)};};\
    class GVAR(c##_visor_mask):rhsusf_hgu56p_visor_mask {scope = protected; displayName = HGU-56/P (##a##/Visor/Mask); hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_olv_co.paa", QPATHTOF(b)};};

#define uni_x(x,a) for "_i" from 1 to x do {_player addItemToUniform #a;};
#define vest_x(x,a) for "_i" from 1 to x do {_player addItemToVest #a;};
#define backpack_x(x,a) for "_i" from 1 to x do {_player addItemToBackpack #a;};