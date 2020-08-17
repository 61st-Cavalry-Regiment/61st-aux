#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {GVAR(invisible_nvg_ti)};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {};
        author = "AUTHOR";
        VERSION_CONFIG;
    };
};
#include "CfgSettings.hpp"
#include "CfgWeapons.hpp"
enableDebugConsole = 1;

class CfgFactionClasses {
    class 61st_Aux {
        displayName = "61st Aux Mod";
        priority = 3;
        side = 1;
    };
};

class CfgEditorCategories {
    class 61st_Aux {
        displayName = "61st Aux Mod";
        priority = 3;
        side = 1;
    };
};
