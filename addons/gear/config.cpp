#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {QGVAR(ammoBox), QGVAR(medicalBox), QGVAR(launcherBox), QGVAR(alicepack), QGVAR(IbuprofenItem), QGVAR(Zeus_Pack), QGVAR(Zeus_Pack_Invisible), QGVAR(kitbag_lr), QGVAR(falconii_lr), QGVAR(eagleiii_lr), QGVAR(carryall_lr), "tfar_inviisble_radio"};
        weapons[] = {QGVAR(invisible_nvg_ti), QGVAR(Ibuprofen)};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {QUOTE(MAIN_ADDON), "A3_Data_F", "A3_Weapons_F", "ace_medical_engine", "ace_medical_treatment"};
        author = "AUTHOR";
        VERSION_CONFIG;
    };
};

class CfgInventoryGlobalVariable {
    maxSoldierLoad = 2000;
};

#include "CfgVehicles.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgWeapons.hpp"
#include "ACE_Medical_Treatment.hpp"
#include "ACE_Medical_Treatment_Actions.hpp"
