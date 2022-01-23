#include "..\..\script_component.hpp"

class CfgPatches
{
	class DOUBLES(ADDON,Bradley)
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
    class RHS_M2A2;
	class RHS_M2A3: RHS_M2A2 {
		class Turrets;
	};
	class RHS_M2A3_BUSKI: RHS_M2A3 {
		class Turrets: Turrets {
			class MainTurret;
		};
	};
	class RHS_M2A3_BUSKIII: RHS_M2A3_BUSKI{
		transportSoldier = 9;
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				magazines[] = {
					mag_2(rhs_mag_1100Rnd_762x51_M240),
					mag_2(rhs_mag_230Rnd_25mm_M242_HEI),
					mag_6(rhs_mag_70Rnd_25mm_M242_APFSDS),
					mag_3(rhs_mag_2Rnd_TOW2A),
					"rhs_mag_2Rnd_TOW2BB",
					"rhs_laserfcsmag"
				};
				//["rhs_mag_1100Rnd_762x51_M240","rhs_mag_1100Rnd_762x51_M240","rhs_mag_230Rnd_25mm_M242_HEI","rhs_mag_230Rnd_25mm_M242_HEI","rhs_mag_230Rnd_25mm_M242_HEI","rhs_mag_70Rnd_25mm_M242_APFSDS","rhs_mag_70Rnd_25mm_M242_APFSDS","rhs_mag_70Rnd_25mm_M242_APFSDS","rhs_mag_2Rnd_TOW2B_AERO","rhs_mag_2Rnd_TOW2B_AERO","rhs_mag_2Rnd_TOW2A","rhs_mag_2Rnd_TOW2BB","rhs_laserfcsmag"]
				weapons[] = {"RHS_weap_M242BC","rhs_weap_m240_bradley_coax","Rhs_weap_TOW_Launcher","rhs_weap_fcs_ammo"};
				//["RHS_weap_M242BC","rhs_weap_m240_bradley_coax","Rhs_weap_TOW_Launcher","rhs_weap_fcs_ammo"]
			};
		};
	};
};