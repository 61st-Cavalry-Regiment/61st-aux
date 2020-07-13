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
