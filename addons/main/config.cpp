#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {};
        author = "AUTHOR";
        VERSION_CONFIG;
    };
};
#include "CfgSettings.hpp"
enableDebugConsole = 1;

class CfgFactionClasses {
    class 61st_Aux {
        displayName = "61st Aux Mod";
        priority = 3;
        side = 1;
    };
    class 61st_Aux_Empty {
        displayName = "61st Aux Mod";
        priority = 3;
        side = 1;
    };
};

class CfgEditorCategories {
    class EdCat_61st_Main {
        displayName = "61st Aux Mod";
    };

    class EdCat_61st_Supplies{
        displayName = "61st Supplies";
    };
};

class CfgEditorSubcategories {
    class EdSubcat_61st_resupply {
        displayName = "Resupply";
    };
};


