#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {"RHS_UH60M", QGVAR(UH60m_DAP), QGVAR(3R), QGVAR(MELB_MH6M), QGVAR(MELB_AH6M), QGVAR(AH64D_wd), QGVAR(CH_47F), QGVAR(UH60M)};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"RHS_US_A2_AirImport", QUOTE(MAIN_ADDON)};
        author = "AUTHOR";
        VERSION_CONFIG;
    };
};


#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"