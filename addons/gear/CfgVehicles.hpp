class CfgVehicles {

	//Imports
	class Man;
	class ACE_morphineItem;
	class B_supplyCrate_F;
	class C_IDAP_supplyCrate_F;

	class CAManBase: Man {
		#include "aceActions.hpp"
	};
	class GVAR(ammoBox): B_supplyCrate_F {
		scope = 2;
		scopeCurator = 2;
		DISPLAYNAME(Ammo Box)
		author = ECSTRING(main, AuthorShort);
		editorCategory = "EdCat_61st_Supplies";
		editorSubcategory = "EdSubcat_61st_resupply";
		ace_dragging_canCarry = 1;  // Can be carried (0-no, 1-yes)
        	ace_dragging_carryPosition[] = {0, 1.5, 1};  // Offset of the model from the body while dragging (same as attachTo) (default: [0, 1, 1])
        	ace_dragging_carryDirection = 90;
		ace_cargo_size = 2;
        	ace_cargo_canLoad = 1;
		class TransportMagazines {
			mag_xx(CUP_30Rnd_556x45_Stanag,60);
			mag_xx(CUP_200Rnd_TE4_Red_Tracer_556x45_M249,16);
			mag_xx(CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M,8);
			mag_xx(CUP_20Rnd_762x51_DMR,10);
			mag_xx(CUP_15Rnd_9x19_M9, 12);
		};
		class TransportItems {};
		class TransportWeapons {};
		class TransportBackpacks {};	
	};
	class GVAR(launcherBox): B_supplyCrate_F {
		scope = 2;
		scopeCurator = 2;
		DISPLAYNAME(Launcher Box)
		author = ECSTRING(main, AuthorShort);
		editorCategory = "EdCat_61st_Supplies";
		editorSubcategory = "EdSubcat_61st_resupply";
		ace_dragging_canCarry = 1;
        	ace_dragging_carryPosition[] = {0, 1.5, 1};
        	ace_dragging_carryDirection = 90;
		ace_cargo_size = 2;
        	ace_cargo_canLoad = 1;
		class TransportMagazines {
			mag_xx(MRAWS_HEAT_F, 6);
			mag_xx(MRAWS_HE_F, 6);
			mag_xx(MRAWS_HEAT55_F, 6);
			mag_xx(CUP_Javelin_M, 3);
		};
		class TransportItems {};
		class TransportWeapons {
			weap_xx(launch_MRAWS_olive_F, 2);
			weap_xx(CUP_launch_M136, 5);
			weap_xx(CUP_launch_FIM92Stinger, 3);
			weap_xx(CUP_launch_Javelin, 1);
			weap_xx(CUP_launch_M72A6, 5);
		};
		class TransportBackpacks {};
	};
	class GVAR(medicalBox): C_IDAP_supplyCrate_F {
		scope = 2;
		scopeCurator = 2;
		DISPLAYNAME(Medical Box)
		author = ECSTRING(main, AuthorShort);
		editorCategory = "EdCat_61st_Supplies";
		editorSubcategory = "EdSubcat_61st_resupply";
		ace_dragging_canCarry = 1;
        	ace_dragging_carryPosition[] = {0, 1.5, 1};
        	ace_dragging_carryDirection = 90;
		ace_cargo_size = 2;
        	ace_cargo_canLoad = 1;
		class TransportMagazines {
			mag_xx(kat_Painkiller, 10);
			mag_xx(kat_Carbonate, 10);
		};
		class TransportItems {
			item_xx(ACE_fieldDressing, 40);
			item_xx(ACE_packingBandage, 80);
			item_xx(ACE_elasticBandage, 80);
			item_xx(ACE_tourniquet, 15);
			item_xx(ACE_splint, 15);
			item_xx(ACE_morphine, 15);
			item_xx(ACE_adenosine, 15);
			item_xx(ACE_epinephrine, 15);
			item_xx(ACE_salineIV, 30);
			item_xx(ACE_salineIV_500, 30);
			item_xx(ACE_salineIV_250, 30);
			item_xx(ACE_quikclot, 80);
			item_xx(ACE_personalAidKit, 3);
			item_xx(ACE_surgicalKit, 2);
			item_xx(ACE_bodyBag, 5);
			item_xx(kat_larynx, 15);
			item_xx(kat_guedel, 15);
			item_xx(kat_accuvac, 1);
			item_xx(kat_X_AED, 1);
			item_xx(kat_AED, 1);
			item_xx(kat_amiodarone, 20);
			item_xx(kat_atropine, 20);
			item_xx(kat_IO_FAST, 20);
			item_xx(kat_IV_16, 20);
			item_xx(kat_lidocaine, 20);
			item_xx(kat_naloxone, 20);
			item_xx(kat_nitroglycerin, 20);
			item_xx(kat_norepinephrine, 20);
			item_xx(kat_phenylephrine, 20);
			item_xx(kat_TXA, 50);
			item_xx(kat_Pulseoximeter, 3);
			item_xx(kat_chestSeal, 25);
			item_xx(kat_aatKit, 10);
			item_xx(kat_stethoscope, 5);
			item_xx(ACE_EarPlugs, 30);
		};
		class TransportWeapons {};
		class TransportBackpacks {
			backpack_xx(kat_stretcherBag, 2)
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
	class tfar_invisible_radio: GVAR(Zeus_Pack_Invisible){
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
