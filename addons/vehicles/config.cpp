#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {"RHS_UH60M", QGVAR(UH60m_DAP), QGVAR(3R), QGVAR(MELB_MH6M), QGVAR(MELB_AH6M), QGVAR(AH64D_wd), QGVAR(CH_47F), QGVAR(UH60M), GVAR(pinkhawk), "RHS_M2A3_BUSKIII"};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"RHS_US_A2_AirImport", QUOTE(MAIN_ADDON), "RHS_US_A2Port_Armor"};
        author = "AUTHOR";
        VERSION_CONFIG;
    };
};


#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"