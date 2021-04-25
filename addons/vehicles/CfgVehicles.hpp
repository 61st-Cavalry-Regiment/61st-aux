class CfgVehicles {
	//Helicopters
	class Helicopter {
		class ACE_SelfActions;
	};
	class Helicopter_Base_F: Helicopter {
		class ACE_SelfActions: ACE_SelfActions {};
	};
	class Helicopter_Base_H: Helicopter_Base_F {
		class ACE_SelfActions: ACE_SelfActions {};
	};
	class Heli_Transport_01_base_F: Helicopter_Base_H {
		class ACE_SelfActions: ACE_SelfActions {};
	};
	class RHS_UH60_Base: Heli_Transport_01_base_F {
		class ACE_SelfActions: ACE_SelfActions {};
		weapons[] =
		{
			"rhsusf_weap_ANALQ144"
		};
		magazines[] =
		{
			mag_10(rhsusf_mag_DIRCM)
		};
		
	};
	class RHS_UH60M_base: RHS_UH60_Base {
		class ACE_SelfActions: ACE_SelfActions {};
	};
	class RHS_UH60M_US_base: RHS_UH60M_base {
		class ACE_SelfActions: ACE_SelfActions {};
		class TransportBackpacks;
	};
	class RHS_UH60M: RHS_UH60M_US_base {
		#include "MFD.hpp"
		defaultUserMFDvalues[] = {0,0,0,0,1,0,0.2};
		lockDetectionSystem = 16;
		incomingMissileDetectionSystem = 16;
		// statement = "this SetUserMFDvalue [3,1];this SetUserMFDvalue [4,0.65];this SetUserMFDvalue [5,0];"; To change color
		#include "UH60AceActions.hpp"
		class Components;
		class TransportBackpacks: TransportBackpacks {
			backpack_xx(tf_rt1523g_big_rhs, 4)
		}
	};
	faction(UH60M, RHS_UH60M)
	class GVAR(pinkhawk): RHS_UH60M {
		displayName = "UH-60M (Pinkhawk)";
		hiddenSelectionsTextures[] = {QPATHTOF(data\textures\uh60\HobbF.paa), QPATHTOF(data\textures\uh60\HobbE.paa)};
		faction = "61st_Aux";
	};
	class RHS_UH60M2: RHS_UH60M {
	};
	class RHS_UH60M_ESSS: RHS_UH60M2 {
		class Components: Components {
			class TransportPylonsComponent;
		};
	};
	faction(UH60M_ESSS, RHS_UH60M_ESSS)
	class GVAR(UH60M_DAP): RHS_UH60M_ESSS {
		displayName = CSTRING(dap);
		scope = public;
		scopecurator = public;
		faction = "61st_Aux";
		class pilotCamera
        {
            class OpticsIn
            {
                class Wide
                {
                    opticsDisplayName = "WFOV";
                    initAngleX = 0;
                    minAngleX = 0;
                    maxAngleX = 0;
                    initAngleY = 0;
                    minAngleY = 0;
                    maxAngleY = 0;
                    initFov = "(75 / 120)";
                    minFov = "(75 / 120)";
                    maxFov = "(75 / 120)";
                    directionStabilized = 1;
                    visionMode[] = {"Normal","NVG","Ti"};
                    thermalMode[] = {0,1};
                    gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
                    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
                };
                class Medium: Wide
                {
                    opticsDisplayName = "MFOV";
                    initFov = "(14.4 / 120)";
                    minFov = "(14.4 / 120)";
                    maxFov = "(14.4 / 120)";
                    gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
                };
                class Narrow: Wide
                {
                    opticsDisplayName = "NFOV";
                    initFov = "(4.8 / 120)";
                    minFov = "0.01";
                    maxFov = "(4.8 / 120)";
                    gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
                };
            };
            minTurn = -180;
            maxTurn = 180;
            initTurn = 0;
            minElev = -10;
            maxElev = 90;
            initElev = 25;
            maxXRotSpeed = 1;
            maxYRotSpeed = 1;
            maxMouseXRotSpeed = 0.5;
            maxMouseYRotSpeed = 0.5;
            pilotOpticsShowCursor = 1;
            controllable = 1;
        };
		class Components: Components {
			class TransportPylonsComponent: TransportPylonsComponent {
				class Presets {
					class Empty {
						displayName = "Empty";
						attachment[] = {};
					};
					class Default {
						displayName = "Default";
						attachment[] = {"rhs_mag_fueltank_UH60","","","rhs_mag_fueltank_UH60","rhsusf_M130_CMFlare_Chaff_Magazine_x2"};
					};
					class Thunder {
						displayName = "Thunder";
						attachment[] = {"rhs_mag_M229_19","PylonRack_4Rnd_ACE_Hellfire_AGM114L","PylonRack_4Rnd_ACE_Hellfire_AGM114K","rhs_mag_M229_19","rhsusf_M130_CMFlare_Chaff_Magazine_x2"};
					};
				};
			};
		};
        memoryPointDriverOptics = "slingload0";
		weapons[] =
		{
			"rhsusf_weap_ANALQ144",
			"Laserdesignator_pilotCamera"
		};
		magazines[] =
		{
			mag_10(rhsusf_mag_DIRCM),
			"Laserbatteries"
		};
	};
	class Heli_Attack_01_base_F: Helicopter_Base_F {};
	class RHS_AH64_base: Heli_Attack_01_base_F {
		
	};
	class Heli_Transport_02_base_F: Helicopter_Base_H {};
	class RHS_MELB_MH6M;
	faction(MELB_MH6M, RHS_MELB_MH6M)
	class RHS_MELB_AH6M;
	faction(MELB_AH6M, RHS_MELB_AH6M)
	class RHS_AH64D_wd;
	faction(AH64D_wd, RHS_AH64D_wd)
	class RHS_CH_47F;
	faction(CH_47F, RHS_CH_47F)
	class B_UAV_02_dynamicLoadout_F;
	faction(UAV, B_UAV_02_dynamicLoadout_F)

	//Ground
	class rhsusf_M977A4_REPAIR_usarmy_d;
	class GVAR(3R): rhsusf_M977A4_REPAIR_usarmy_d {
		displayName = "3R";
		faction = "61st_Aux";
		scope = public;
		scopecurator = public;
		ace_refuel_fuelCargo = 10000;
		ace_refuel_fuelCapacity = 583;
		ace_refuel_flowRate = 2;
		ace_rearm_defaultSupply = 1200;
	};
};