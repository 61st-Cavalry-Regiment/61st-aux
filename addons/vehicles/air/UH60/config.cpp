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


class CfgVehicles {
    #include "inheritance.hpp"

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
		#include "..\..\common\MFD.hpp"
		defaultUserMFDvalues[] = {0,0,0,0,1,0,0.2};
		lockDetectionSystem = "2+4+8";
		incomingMissileDetectionSystem = 16;
		// statement = "this SetUserMFDvalue [3,1];this SetUserMFDvalue [4,0.65];this SetUserMFDvalue [5,0];"; To change color
		#include "AceActions.hpp"
		class Components;
		class TransportBackpacks: TransportBackpacks {
			backpack_xx(tf_rt1523g_big_rhs, 4)
		}
	};
	faction(UH60M, RHS_UH60M)
	class GVAR(pinkhawk): RHS_UH60M {
		scpoe = private;
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
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=0;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
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
};
