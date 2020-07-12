#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {"61st_invisible_nvg"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_main"};
        author = CSTRING(author);
        url = "https://61st-regiment.com/";
        authors[] = {"Thunder"};
        VERSION_CONFIG;
    };
};

#include "CfgSettings.hpp"
#include "CfgWeapons.hpp"