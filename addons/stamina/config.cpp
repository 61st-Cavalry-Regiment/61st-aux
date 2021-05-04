#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_advanced_fatigue"};
        author = "AUTHOR";
        VERSION_CONFIG;
    };
};


#include "CfgEventHandlers.hpp"
