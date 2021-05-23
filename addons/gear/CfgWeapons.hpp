class CfgWeapons {

	//Imports
	class rhsusf_hgu56p;
	class rhsusf_hgu56p_visor;
	class rhsusf_hgu56p_mask;
	class rhsusf_hgu56p_visor_mask;
	class rhsusf_ach_helmet_ocp;
	class Integrated_NVG_TI_0_F;
	class ACE_Morphine;
	class CBA_MiscItem_ItemInfo;


	//Helmets
	HGU(Seejers, data\textures\hgu56\Seejers_Helm.paa, seemjer)
	HGU(Craft, data\textures\hgu56\Craft_Helm.paa, craft)
	HGU(Muffins, data\textures\hgu56\Muffins_Helm.paa, muffins)
	HGU(Thunder, data\textures\hgu56\Thunder_Patches.paa, thunder)
	HGU(PJ, data\textures\hgu56\PJ_Helm.paa, pj)
	HGU(Exilis, data\textures\hgu56\Exilis_Helm.paa, exilis)
	HGU(Vampiric, data\textures\hgu56\Vampiric_Helm.paa, vampiric)
	HGU2(Sam, data\textures\hgu56\Sam_Helm.paa, sam, data\textures\hgu56\Sam.paa)
	class GVAR(rainbow):rhsusf_hgu56p {displayName = HGU-56/P (Rainbow); hiddenSelectionsTextures[] = {QPATHTOF(data\textures\hgu56\HGU56_Gradient.paa), QPATHTOF(data\textures\hgu56\HGU56_Patches_Gradient.paa)};};\
    class GVAR(rainbow_visor):rhsusf_hgu56p_visor {scope = protected; displayName = HGU-56/P (Rainbow/Visor); hiddenSelectionsTextures[] = {QPATHTOF(data\textures\hgu56\HGU56_Gradient.paa), QPATHTOF(data\textures\hgu56\HGU56_Patches_Gradient.paa)};};\
    class GVAR(rainbow_mask):rhsusf_hgu56p_mask {scope = protected; displayName = HGU-56/P (Rainbow/Mask); hiddenSelectionsTextures[] = {QPATHTOF(data\textures\hgu56\HGU56_Gradient.paa), QPATHTOF(data\textures\hgu56\HGU56_Patches_Gradient.paa)};};\
    class GVAR(rainbow_visor_mask):rhsusf_hgu56p_visor_mask {scope = protected; displayName = HGU-56/P (Rainbow/Visor/Mask); hiddenSelectionsTextures[] = {QPATHTOF(data\textures\hgu56\HGU56_Gradient.paa), QPATHTOF(data\textures\hgu56\HGU56_Patches_Gradient.paa)};};


	class GVAR(invisible_nvg_ti): Integrated_NVG_TI_0_F {
		scope = public;
		displayName = "Invisible NVG/TI";
		author = ECSTRING(main, AuthorShort);
		thermalMode[] = {0,4};
		class ItemInfo {
			type = TYPE_NVG;
			hmdType = 0;
			uniformModel = "";
			modelOff = "";
			mass = 4;
		};
	};

	ACH(ACH, data\textures\61st_rhs_helmet_ach_ocp_co.paa, ach)
	ACH(Myers, data\textures\Myers.paa, myers)
	

	class GVAR(Ibuprofen):ACE_Morphine {
		scope = 2;
		DISPLAYNAME(Ibuprofen Bottle)
		author = ECSTRING(main, AuthorShort);
		descriptionShort = "Drink some water and rest";
		descriptionUse = "Use instead of morphine";
		class ItemInfo:CBA_MiscItem_ItemInfo {
			mass = 0.1;
		};
	};
};