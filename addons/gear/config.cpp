#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {QGVAR(seemjer), QGVAR(rainbow)};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {};
        author = "AUTHOR";
        VERSION_CONFIG;
    };
};


#include "CfgVehicles.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgWeapons.hpp"
