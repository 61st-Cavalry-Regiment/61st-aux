#include "..\..\script_component.hpp"

class CfgPatches
{
	class DOUBLES(ADDON,3R)
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
    class rhsusf_M977A4_REPAIR_usarmy_wd;
	class rhsusf_M977A4_REPAIR_usarmy_d: rhsusf_M977A4_REPAIR_usarmy_wd{
		class complexGearbox;
	};
	class GVAR(3R): rhsusf_M977A4_REPAIR_usarmy_d {
		DISPLAYNAME(3R)
		faction = "61st_Aux";
		scope = public;
		scopecurator = public;
		ace_refuel_fuelCargo = 10000;
		ace_refuel_fuelCapacity = 583;
		ace_refuel_flowRate = 2;
		ace_rearm_defaultSupply = 1200;
		class complexGearbox: complexGearbox {
			GearboxRatios[] = {
				"R1",	-3.231,
				"N",	 0,
				"D1",	 2.462,
				"D2",	 1.870,
				"D3",	 1.241,
				"D4",	 0.970,
				"D5",	 0.711
			};
		};
	};
};
