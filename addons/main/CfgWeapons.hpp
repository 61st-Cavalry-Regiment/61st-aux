class CfgWeapons {
	class Integrated_NVG_TI_0_F;
	class GVAR(invisible_nvg_ti): Integrated_NVG_TI_0_F {
		scope = public;
		displayName = "Invisible NBG/TI";
		thermalMode[] = {0,4};
		class ItemInfo {
			type = TYPE_NVG;
			hmdType = 0;
			uniformModel = "";
			modelOff = "";
			mass = 4;
		};
	};
};