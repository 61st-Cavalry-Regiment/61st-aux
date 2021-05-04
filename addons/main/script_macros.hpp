#include "\x\cba\addons\main\script_macros_common.hpp"

#define mag_2(a) a, a
#define mag_3(a) a, a, a
#define mag_4(a) a, a, a, a
#define mag_5(a) a, a, a, a, a
#define mag_6(a) a, a, a, a, a, a
#define mag_7(a) a, a, a, a, a, a, a
#define mag_8(a) a, a, a, a, a, a, a, a
#define mag_9(a) a, a, a, a, a, a, a, a, a
#define mag_10(a) a, a, a, a, a, a, a, a, a, a
#define mag_11(a) a, a, a, a, a, a, a, a, a, a, a
#define mag_12(a) a, a, a, a, a, a, a, a, a, a, a, a

#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}
#define backpack_xx(a,b) class __xx_##a {backpack = a; count = b;}

#define DISPLAYNAME(a) displayName = [61st] a;

//scopes
#define private 0
#define protected 1
#define public 2

//Sorting
#define EdCat editorCategory = "EdCat_61st";
#define fac faction = "61st_Aux";

// weapon types
#define TYPE_WEAPON_PRIMARY 1
#define TYPE_WEAPON_HANDGUN 2
#define TYPE_WEAPON_SECONDARY 4
// magazine types
#define TYPE_MAGAZINE_HANDGUN_AND_GL 16 // mainly
#define TYPE_MAGAZINE_PRIMARY_AND_THROW 256
#define TYPE_MAGAZINE_SECONDARY_AND_PUT 512 // mainly
// more types
#define TYPE_BINOCULAR_AND_NVG 4096
#define TYPE_WEAPON_VEHICLE 65536
#define TYPE_ITEM 131072
// item types
#define TYPE_DEFAULT 0
#define TYPE_MUZZLE 101
#define TYPE_OPTICS 201
#define TYPE_FLASHLIGHT 301
#define TYPE_BIPOD 302
#define TYPE_FIRST_AID_KIT 401
#define TYPE_FINS 501 // not implemented
#define TYPE_BREATHING_BOMB 601 // not implemented
#define TYPE_NVG 616
#define TYPE_GOGGLE 603
#define TYPE_SCUBA 604 // not implemented
#define TYPE_HEADGEAR 605
#define TYPE_FACTOR 607
#define TYPE_RADIO 611
#define TYPE_HMD 616
#define TYPE_BINOCULAR 617
#define TYPE_MEDIKIT 619
#define TYPE_TOOLKIT 620
#define TYPE_UAV_TERMINAL 621
#define TYPE_VEST 701
#define TYPE_UNIFORM 801
#define TYPE_BACKPACK 901

#define DFUNC(var1) TRIPLES(ADDON,fnc,var1)

#ifdef DISABLE_COMPILE_CACHE
    #undef PREP
    #define PREP(fncName) DFUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
#else
    #undef PREP
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif
#ifdef DISABLE_COMPILE_CACHE
    #undef PREPO
    #define PREPO(location,fncName) DFUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\location\DOUBLES(fnc,fncName).sqf)
#else
    #undef PREPO
    #define PREPO(location,fncName) [QPATHTOF(functions\location\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif
