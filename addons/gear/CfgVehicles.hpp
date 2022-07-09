class CfgVehicles {

	//Imports
	class Man;
	class ACE_morphineItem;
	class Box_NATO_Ammo_F;
	class Box_NATO_WpsLaunch_F;
	class Box_NATO_Equip_F;

	class CAManBase: Man {
		#include "aceActions.hpp"
	};
	class GVAR(ammoBox): Box_NATO_Ammo_F {
		scope = 2;
		scopeCurator = 2;
		DISPLAYNAME(Ammo Box)
		author = ECSTRING(main, AuthorShort);
		editorCategory = "EdCat_61st_Supplies";
		editorSubcategory = "EdSubcat_61st_resupply";
		class TransportMagazines {
		};
	};
	class GVAR(launcherBox): Box_NATO_WpsLaunch_F {
		scope = 2;
		scopeCurator = 2;
		DISPLAYNAME(Launcher Box)
		author = ECSTRING(main, AuthorShort);
		editorCategory = "EdCat_61st_Supplies";
		editorSubcategory = "EdSubcat_61st_resupply";
		class TransportMagazines {
		};
		class TransportItems {};
		class TransportWeapons {
		};
	};
	class GVAR(medicalBox): Box_NATO_Equip_F {
		scope = 2;
		scopeCurator = 2;
		DISPLAYNAME(Medical Box)
		author = ECSTRING(main, AuthorShort);
		hiddenSelectionsTextures[] = {"\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_blufor_co.paa",QPATHTOF(data\textures\medical_Box2.paa)};
		editorCategory = "EdCat_61st_Supplies";
		editorSubcategory = "EdSubcat_61st_resupply";
		class TransportItems {
			item_xx(ACE_Adenosine, 15);
			item_xx(ACE_fieldDressing, 25);
			item_xx(ACE_elasticBandage, 25);
			item_xx(ACE_packingBandage, 25);
			item_xx(ACE_quikclot, 20);
			item_xx(ACE_bloodIV, 7);
			item_xx(ACE_bloodIV_250, 7);
			item_xx(ACE_bloodIV_500, 7);
			item_xx(ACE_bodyBag, 5);
			item_xx(ACE_epinephrine, 15);
			item_xx(ACE_morphine, 15);
			item_xx(ACE_plasmaIV, 10);
			item_xx(ACE_plasmaIV_250, 10);
			item_xx(ACE_plasmaIV_500, 10);
			item_xx(ACE_splint, 15);
			item_xx(ACE_surgicalKit, 2);
			item_xx(ACE_tourniquet, 15);
		};
	};

	class GVAR(IbuprofenItem):ACE_morphineItem {
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		DISPLAYNAME(Ibuprofen)
		author = ECSTRING(main, AuthorShort);
		vehicleClass = "Items";
		class TransportItems {
			item_xx(GVAR(Ibuprofen), 1);
		};
		mass = 20;
	};

	class tfw_ilbe_a_coy;
	class GVAR(Zeus_Pack):tfw_ilbe_a_coy {
		DISPLAYNAME(Zeus LR)
		tf_range = 120000;
		maximumLoad = 1000;
	};
	class B_Kitbag_rgr;
	class GVAR(Zeus_Pack_Invisible):B_Kitbag_rgr {
		DISPLAYNAME(Zeus LR (Invisible))
		model = QPATHTOF(data\radio.p3d);
		mass = 0;
		tf_dialogUpdate = QUOTE(call TFAR_fnc_updateLRDialogToChannel;);
		tf_hasLRradio = 1;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
		tf_range = 120000;
		maximumLoad = 1000;
	};
	class tfar_inviisble_radio: GVAR(Zeus_Pack_Invisible){
		scopeArsenal = protected;
		scpoe = protected;
		scopeCurator = protected;
	};
	class B_Kitbag_mcamo;	
	class GVAR(kitbag_lr):B_Kitbag_mcamo {
		DISPLAYNAME(Kitbag LR)
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
	};
	class B_Carryall_mcamo;	
	class GVAR(carryall_lr):B_Carryall_mcamo {
		DISPLAYNAME(Carryall LR)
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
	};
};