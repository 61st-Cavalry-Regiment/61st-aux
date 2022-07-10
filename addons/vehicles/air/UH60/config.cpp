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
class SensorsManagerComponent;


class CfgVehicles {
    #include "inheritance.hpp"

    class CUP_Uh60_Base: Heli_Transport_01_base_F {
//		class ACE_SelfActions: ACE_SelfActions {};
	};
//	class CUP_Uh60L_Base: CUP_Uh60_Base {
//		class ACE_SelfActions: ACE_SelfActions {};
//	};
	class CUP_B_UH60M_US: CUP_Uh60_Base {
	//	class ACE_SelfActions: ACE_SelfActions {};
	//	class TransportBackpacks;
	};
	class 61ST_UH60M: CUP_B_UH60M_US {
		//#include "..\..\common\MFD.hpp"
		//defaultUserMFDvalues[] = {0,0,0,0,1,0,0.2};
		//lockDetectionSystem = "2+4+8";
		//incomingMissileDetectionSystem = 16;
		// statement = "this SetUserMFDvalue [3,1];this SetUserMFDvalue [4,0.65];this SetUserMFDvalue [5,0];"; To change color
		//#include "AceActions.hpp"
		//class Components;
//		class TransportBackpacks: TransportBackpacks {
//			backpack_xx(tf_rt1523g_big_rhs, 4)
//		};
	};
	faction(UH60M, CUP_B_UH60M_US)
	class 61ST_UH60M2: CUP_B_UH60M_US {
	};
	class CUP_B_MH60L_DAP_4x_US: 61ST_UH60M2 {
		class Components: Components {
			class TransportPylonsComponent: TransportPylonsComponent {
				UIPicture="\CUP\AirVehicles\CUP_AirVehicles_UH60\data\ui\CUP_UH60M_4_3DEN_CA.paa";
				class pylons {};
			};
		};
	};
	faction(UH60M, CUP_B_MH60L_DAP_4x_US)
	class 61ST_UH60M_DAP: CUP_B_MH60L_DAP_4x_US {
		DISPLAYNAME(UH-60M (DAP))
		scope = public;
		scopecurator = public;
		faction = "61st_Aux";
		hiddenSelectionsTextures[] = {QPATHTOF(data\textures\uh60\uh60m_fuselage_co.paa), QPATHTOF(data\textures\uh60\61stDAP_engine_co.paa), QPATHTOF(data\textures\uh60\default_co.paa)};
		LockDetectionSystem="2 + 8 + 4";
		incomingMissileDetectionSystem=16;
		class AnimationSources: AnimationSources {
			class Filters_Hide
			{
				DisplayName="$STR_CUP_dn_Core_as_hideAirfilter";
				source="user";
				initphase=1;
				animPeriod=1;
			};
			class probe_extend
			{
				source="user";
				animPeriod=1.6;
				initphase=0;
			};
			class Hide_Nose
			{
				DisplayName="$STR_CUP_dn_Core_as_Hide_Nose_Radar";
				source="user";
				animPeriod=0;
				initPhase=1;
				author="CUP_AUTHOR_STRING";
			};
			class Hide_Probe
			{
				DisplayName="$STR_CUP_dn_Core_as_Hide_Probe";
				source="user";
				animPeriod=0;
				initPhase=1;
				author="CUP_AUTHOR_STRING";
			};
			class mainRotor_folded
			{
				source="user";
				animPeriod=0.001;
				initPhase=1;
			};
			class mainRotor_unfolded: mainRotor_folded
			{
				source="user";
				initPhase=0;
			};
			class mainRotor_unfolded1: mainRotor_unfolded
			{
				source="user";
				initPhase=0;
			};
			class Navyclan_hide
			{
				DisplayName="$STR_CUP_dn_Core_as_Navyclan_hide";
				source="user";
				animPeriod=0;
				initPhase=1;
				author="CUP_AUTHOR_STRING";
			};
			class Navyclan2_hide: Navyclan_hide
			{
				DisplayName="$STR_CUP_dn_Core_as_Navyclan2_hide";
			};
			class Hide_ESSS2x
			{
				DisplayName="$STR_CUP_dn_Core_as_Hide_ESSS2x";
				source="user";
				animPeriod=0;
				initPhase=1;
				author="CUP_AUTHOR_STRING";
			};
		};	
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
					gunnerOpticsModel="A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_w_F.p3d";
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
					gunnerOpticsModel="A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_m_F.p3d";
				};

				class zoomX8: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/8)";//"(.375 / 120)";
					minFov="(0.42/8)";//"(.375 / 120)";
					maxFov="(0.42/8)";//"(.375 / 120)";
					gunnerOpticsModel="A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_m_F.p3d";
				};
				class zoomX20: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/20)";//"(.375 / 120)";
					minFov="(0.42/20)";//"(.375 / 120)";
					maxFov="(0.42/20)";//"(.375 / 120)";
					gunnerOpticsModel="A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_m_F.p3d";
				};
				class zoomX50: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/50)";//"(.375 / 120)";
					minFov="(0.42/50)";//"(.375 / 120)";
					maxFov="(0.42/50)";//"(.375 / 120)";
					gunnerOpticsModel="A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_n_F.p3d";
				};

				class zoomX70: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/70)";//"(.375 / 120)";
					minFov="(0.42/70)";//"(.375 / 120)";
					maxFov="(0.42/70)";//"(.375 / 120)";
					gunnerOpticsModel="A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_n_F.p3d";
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
		memoryPointDriverOptics = "gunnerview_flir";
		class Components: Components {
			class TransportCountermeasuresComponent {};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				defaultDisplay="MinimapDisplay";
				class Components
				{
					class SensorsDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={8000,4000,2000};
						//showTargetTypes = 1+2+4+8+16+32+64+128+256+1024;
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
						//showTargetTypes = 1+2+4+8+16+32+64+128+256+1024;
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
						//maxTrackableSpeed=900;
						angleRangeHorizontal=90;
						angleRangeVertical=60;
						aimDown=20;
					};
					class PassiveRadarSensorComponent : SensorTemplatePassiveRadar
					{
						//animDirection = "mainTurret";
					};
					class VisualSensorComponent : SensorTemplateVisual {	
					};
					class LaserSensorComponent : SensorTemplateLaser {
					};
				};
			};
			class TransportPylonsComponent: TransportPylonsComponent {
				UIPicture="\CUP\AirVehicles\CUP_AirVehicles_UH60\data\ui\CUP_UH60M_4_3DEN_CA.paa";
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
		weapons[] =
		{
			"Laserdesignator_pilotCamera",
			"CMFlareLauncher"
		};
		magazines[] =
		{
			"Laserbatteries",
			"168Rnd_CMFlare_Chaff_Magazine"
		};
		class TransportWeapons
		{
			weap_xx(CUP_arifle_M4A1, 1);
		};
		class TransportMagazines
		{
			mag_xx(CUP_30Rnd_556x45_Stanag, 15);
			mag_xx(SmokeShell, 2);
			mag_xx(SmokeShellOrange, 2);
			mag_xx(Chemlight_Red, 2);
		};
		maximumLoad=2000;
		class TransportItems
		{
			item_xx(ACE_elasticBandage, 20);
			item_xx(ACE_packingBandage, 20);
			item_xx(ACE_tourniquet, 8);
			item_xx(ACE_splint, 8);
		};
		class TransportBackpacks
		{
		};
	};
};
