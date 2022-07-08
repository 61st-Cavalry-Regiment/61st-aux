#include "..\..\script_component.hpp"

class CfgPatches
{
	class DOUBLES(ADDON,UH60)
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

#include "CfgEventHandlers.hpp"

class SensorTemplateIR;
class SensorTemplatePassiveRadar;
class SensorTemplateVisual;
class SensorTemplateLaser;
class DefaultVehicleSystemsDisplayManagerRight;
class DefaultVehicleSystemsDisplayManagerLeft;


class CfgVehicles {
    #include "inheritance.hpp"

    class CUP_Uh60_Base: Heli_Transport_01_base_F {
		class ACE_SelfActions: ACE_SelfActions {};
	};
	class CUP_Uh60L_Base: CUP_Uh60_Base {
		class ACE_SelfActions: ACE_SelfActions {};
	};
	class CUP_B_UH60M_US: CUP_Uh60L_Base {
		class ACE_SelfActions: ACE_SelfActions {};
		class TransportBackpacks;
	};
	class 61ST_UH60M: CUP_B_UH60M_US {
		//#include "..\..\common\MFD.hpp"
		//defaultUserMFDvalues[] = {0,0,0,0,1,0,0.2};
		//lockDetectionSystem = "2+4+8";
		//incomingMissileDetectionSystem = 16;
		// statement = "this SetUserMFDvalue [3,1];this SetUserMFDvalue [4,0.65];this SetUserMFDvalue [5,0];"; To change color
		//#include "AceActions.hpp"
		class Components;
		class TransportBackpacks: TransportBackpacks {
			backpack_xx(tf_rt1523g_big_rhs, 4)
		}
	};
	faction(UH60M, 61ST_UH60M)
	class 61ST_UH60M2: 61ST_UH60M {
	};
	class CUP_B_MH60L_DAP_4x_US: 61ST_UH60M2 {
		class Components: Components {
			class TransportPylonsComponent;
		};
	};
	faction(UH60M_ESSS, CUP_B_MH60L_DAP_4x_US)
	class GVAR(UH60M_DAP): CUP_B_MH60L_DAP_4x_US {
		DISPLAYNAME(UH-60M (DAP))
		scope = public;
		scopecurator = public;
		faction = "61st_Aux";
		class pilotCamera
        {
            class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="WFOV";
					initAngleX=0;
					minAngleX=-10;
					maxAngleX=90;
					initAngleY=0;
					minAngleY=-90;
					maxAngleY=90;
					initFov=0.425;//"(30 / 120)";
					minFov=0.425;//"(30 / 120)";
					maxFov=0.425;//"(30 / 120)";
					thermalMode[] = {0,1,2,3,4,5};
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur2"
					};
				};

				class zoomx4: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.425/4)";//"(3.75 / 120)";
					minFov="(0.425/4)";//"(3.75 / 120)";
					maxFov="(0.425/4)";//"(3.75 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};

				class zoomX8: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/8)";//"(.375 / 120)";
					minFov="(0.42/8)";//"(.375 / 120)";
					maxFov="(0.42/8)";//"(.375 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX20: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/20)";//"(.375 / 120)";
					minFov="(0.42/20)";//"(.375 / 120)";
					maxFov="(0.42/20)";//"(.375 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX50: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/50)";//"(.375 / 120)";
					minFov="(0.42/50)";//"(.375 / 120)";
					maxFov="(0.42/50)";//"(.375 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};

				class zoomX70: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/70)";//"(.375 / 120)";
					minFov="(0.42/70)";//"(.375 / 120)";
					maxFov="(0.42/70)";//"(.375 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				showMiniMapInOptics=1;
				showUAVViewInOptics=0;
				showSlingLoadManagerInOptics=1;
			};
            minTurn = -180;
            maxTurn = 180;
            initTurn = 0;

            minElev = -10;
            maxElev = 90;
            initElev = -10;

            maxXRotSpeed = .3;
            maxYRotSpeed = .3;
            pilotOpticsShowCursor = 1;
            controllable = 1;
        };
		class Components: Components {
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				defaultDisplay="MinimapDisplay";
				class Components
				{
					class SensorsDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={8000,4000,2000};
						resource="RscCustomInfoSensors";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoMiniMap";
					};
					class SlingLoadDisplay
					{
						componentType="SlingLoadDisplayComponent";
						resource="RscCustomInfoSlingLoad";
					};
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="SensorsDisplay";
				class Components
				{
					class SensorsDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={8000,4000,2000};
						resource="RscCustomInfoSensors";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoMiniMap";
					};
					class SlingLoadDisplay
					{
						componentType="SlingLoadDisplayComponent";
						resource="RscCustomInfoSlingLoad";
					};
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
				};
			};
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=8000;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=8000;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=7500;
						maxTrackableSpeed=900;
						angleRangeHorizontal=80;
						angleRangeVertical=60;
						aimDown=20;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
						animDirection = "mainTurret";
					};

					class VisualSensorComponent : SensorTemplateVisual {};

					class LaserSensor : SensorTemplateLaser {};
				};
			};
			class TransportPylonsComponent: TransportPylonsComponent {
				class Presets {
					class Empty {
						displayName = "Empty";
						attachment[] = {};
					};
					class AntiTank
					{
						displayName="Hellfire";
						attachment[]=
						{
							"PylonRack_4Rnd_ACE_Hellfire_AGM114K",
							"PylonRack_4Rnd_ACE_Hellfire_AGM114L",
							"PylonRack_4Rnd_ACE_Hellfire_AGM114L",
							"PylonRack_4Rnd_ACE_Hellfire_AGM114K"
						};
					};
					class MultiRole
					{
						displayName="Multirole";
						attachment[]=
						{
							"CUP_PylonPod_19Rnd_Rocket_FFAR_M",
							"PylonRack_4Rnd_ACE_Hellfire_AGM114K",
							"PylonRack_4Rnd_ACE_Hellfire_AGM114K",
							"CUP_PylonPod_19Rnd_Rocket_FFAR_M"
						};
					};
					class Escort
					{
						displayName="Rocket";
						attachment[]=
						{
							"CUP_PylonPod_19Rnd_Rocket_FFAR_M",
							"CUP_PylonPod_19Rnd_Rocket_FFAR_M",
							"CUP_PylonPod_19Rnd_Rocket_FFAR_M",
							"CUP_PylonPod_19Rnd_Rocket_FFAR_M"
						};
					};
				};
			class pylons
				{
					class pylons1
					{
						hardpoints[]=
						{
							"DAR",
							"DAGR",
							"B_SHRIEKER",
							"CUP_NATO_HELO_SMALL",
							"CUP_NATO_HELO_LARGE",
							"CUP_NATO_HELO_UH60"
						};
						attachment="CUP_PylonPod_19Rnd_Rocket_FFAR_M";
						bay=-1;
						priority=5;
						UIposition[]={0.059999999,0.34999999};
						turret[]={};
					};
					class pylons2: pylons1
					{
						attachment="PylonRack_4Rnd_ACE_Hellfire_AGM114K";
						priority=4;
						UIposition[]={0.079999998,0.40000001};
					};
					class pylons3: pylons1
					{
						attachment="PylonRack_4Rnd_ACE_Hellfire_AGM114L";
						priority=4;
						UIposition[]={0.56999999,0.40000001};
						mirroredMissilePos=2;
					};
					class pylons4: pylons1
					{
						attachment="PylonRack_12Rnd_PG_missiles";
						priority=5;
						UIposition[]={0.58999997,0.34999999};
						mirroredMissilePos=1;
					};
				};
			};
		};
        memoryPointDriverOptics = "gunnerview_flir";
		weapons[] =
		{
			"CUP_weapon_mastersafe",
			"Laserdesignator_pilotCamera",
		};
		magazines[] =
		{
			"Laserbatteries",
			"CUP_fake_weapon_mag",
			"CUP_2Rnd_pylonblank_M",
			"CUP_2Rnd_Hydra_Pod_19_M",
			"CUP_2Rnd_AGM_Rack_M",
			"CUP_8Rnd_pylonblank_M",
			"CUP_8Rnd_AGM114K_Hellfire_II_M"
		};
		class TransportWeapons
		{
			class _xx_CUP_arifle_M4A1
			{
				weapon="CUP_arifle_M4A1";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_Stanag
			{
				magazine="CUP_30Rnd_556x45_Stanag";
				count=15;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=2;
			};
			class _xx_Chemlight_Red
			{
				magazine="Chemlight_Red";
				count=2;
			};
		};
		maximumLoad=2000;
		class TransportItems
		{
			class ACE_elasticBandage
			{
				name="ACE_elasticBandage";
				count=20;
			};
			class ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=20;
			};
			class ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=8;
			};
			class ACE_splint
			{
				name="ACE_splint";
				count=8;
			};
		};
		class TransportBackpacks
		{
		};
	};
};
