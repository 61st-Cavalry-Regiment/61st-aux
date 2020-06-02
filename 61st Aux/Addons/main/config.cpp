#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {"RHS_UH60M"};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_main"};
        author = "61st Aux Team";
        url = "https://61st-regiment.com/";
        authors[] = {"Thunder"};
        VERSION_CONFIG;
    };
};

#include "CfgSettings.hpp"
#include "CfgVehicles.hpp"