#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {QGVAR(Flag), QGVAR(FlagYellow)};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"61st_main", "A3_Structures_F_Mil_Flags"};
        author = "AUTHOR";
        VERSION_CONFIG;
    };
};


#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
