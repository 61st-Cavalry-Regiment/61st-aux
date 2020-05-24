#include "script_component.hpp"

class CfgPatches {
    class cba_settings_userconfig {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_settings", "61st_main"};
        author = "61st Aux Team";
        url = "https://61st-regiment.com/";
        authors[] = {"Thunder"};
        VERSION_CONFIG;
    };
};