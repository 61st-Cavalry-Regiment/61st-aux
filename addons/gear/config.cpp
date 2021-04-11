#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {QGVAR(ammoBox), QGVAR(medicalBox), GVAR(launcherBox)};
        weapons[] = {QGVAR(seemjer), QGVAR(rainbow), QGVAR(craft), QGVAR(muffins), QGVAR(thunder), QGVAR(invisible_nvg_ti)};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {QUOTE(MAIN_ADDON)};
        author = "AUTHOR";
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgWeapons.hpp"
#include "Cfg3DEN.hpp"