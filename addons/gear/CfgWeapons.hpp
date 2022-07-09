class CfgWeapons {

	//Imports
	class Integrated_NVG_TI_0_F;
	class ACE_Morphine;
	class CBA_MiscItem_ItemInfo;


	//Helmets
	
	

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
	//ACH Helmets
	


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