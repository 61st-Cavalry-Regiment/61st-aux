class Extended_PreStart_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preStart));
    };
    	class ace_advanced_fatigue
	{
		init = "";
	};
};
class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
    };
    	class ace_advanced_fatigue
	{
		init = "";
	};
    RS_Init = QUOTE(RS_Init_Var = [] execVM QPATHTOF(init.sqf));
};
class Extended_PostInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_postInit));
    };
    	class ace_advanced_fatigue
	{
		init = "";
	};
};
class Extended_DisplayLoad_EventHandlers
{
	class RscDisplayMission
	{
		ace_advanced_fatigue = "";
	};
};