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
	class RHS_AH64D;
	class RHS_AH64D_wd: RHS_AH64D {
		lockDetectionSystem = 16;
		incomingMissileDetectionSystem = 16;
		#include "AceActions.hpp"
	};
	faction(AH64D_wd, RHS_AH64D_wd)
};
