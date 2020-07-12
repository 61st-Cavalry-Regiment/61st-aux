#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        author = ECSTRING(main,author);
        requiredAddons[] = {"61st_main", "A3_Structures_F_Mil_Flags"};
        units[] = {"RHS_UH60M", QGVAR(UH60M_DAP)};
        weapons[] = {};
        VERSION_CONFIG;
        authors[] = {"Thunder"};
    };
};

#include "CfgVehicles.hpp"