#include "..\..\script_component.hpp"

class CfgPatches
{
	class DOUBLES(ADDON,AH64)
	{
		addonRootClass=MACRO_QOUTE(ADDON);

		requiredAddons[]=
		{
            ADDON
		};
		requiredVersion=0.1;
		units[]=
		{

		};
		weapons[]=
		{
			
		};
	};
};

class CfgVehicles {
	class CUP_AH64D_Base;
	class CUP_AH64D_dynamic_base: CUP_AH64D_Base {
		class ACE_SelfActions;
	};

	class CUP_B_AH64D_DL_USA: CUP_AH64D_dynamic_base {
		lockDetectionSystem = 16;
		incomingMissileDetectionSystem = 16;
		//#include "AceActions.hpp"
	};
	faction(AH64D_DL, CUP_B_AH64D_DL_USA)
};
