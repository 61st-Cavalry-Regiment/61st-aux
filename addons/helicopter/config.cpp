#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {"RHS_UH60M", QGVAR(UH60m_DAP)};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {};
        author = "AUTHOR";
        VERSION_CONFIG;
    };
};


#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"