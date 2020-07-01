#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {"RHS_UH60M", QGVAR(UH60M_DAP)};
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
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"