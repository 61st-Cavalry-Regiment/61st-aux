#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {};
        author = "AUTHOR";
        VERSION_CONFIG;
    };
};

class CfgWeapons {
    class rhs_uniform_acu_ucp;
    class rhs_uniform_acu_oefcp : rhs_uniform_acu_ucp {
        class ItemInfo;
    };
    class NEW_UNIFORM_WEP(inf,base) : rhs_uniform_acu_oefcp {
        displayName = "[61st] Infantry Uniform";
        class ItemInfo : ItemInfo {
            uniformClass = QUOTE(NEW_UNIFORM(inf,base));
        };
    };
    ///////////////////////////////////////////INF Uniforms/////////////////////////////////////////////////////////
    NEW_INF_UNIFORM_WEP(myers)
};


class CfgVehicles {
    class rhsusf_army_acu_oefcp_uniform;
    class NEW_UNIFORM(inf,base) : rhsusf_army_acu_oefcp_uniform {
        hiddenSelectionsTextures[] = {QPATHTOF(_textures\inf\base.paa),"rhsusf\addons\rhsusf_infantry2\acu\data\rhsusf_uniform_acu_02_oefcp_co.paa","rhsusf\addons\rhsusf_infantry2\acu\data\rhsusf_uniform_acu_03_ucp_co.paa","#(argb,8,8,3)color(0,0,0,0)","rhsusf\addons\rhsusf_infantry2\acu\data\rhsusf_uniform_acu_acc2_co.paa"};
    };


    ///////////////////////////////////////////INF Uniforms/////////////////////////////////////////////////////////
    NEW_INF_UNIFORM(myers)
};