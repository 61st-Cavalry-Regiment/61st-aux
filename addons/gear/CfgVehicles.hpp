class CfgVehicles {
	class Man;
	class CAManBase: Man {
		#include "aceActions.hpp"
	};
	class Box_NATO_Ammo_F;
	class GVAR(ammoBox): Box_NATO_Ammo_F {
		displayName = "Ammo Box [61st]";
		scope = public;
		EditorCat
		supplies
		editorCategory = "61st_Aux";
		class TransportMagazines {
			mag_xx(rhsusf_100Rnd_556x45_M855_mixed_soft_pouch,15);
			mag_xx(rhsusf_20Rnd_762x51_SR25_m993_Mag,10);
			mag_xx(rhs_mag_30Rnd_556x45_M855_Stanag,30);
			mag_xx(rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red,10);
			mag_xx(rhs_mag_M433_HEDP, 10);
			mag_xx(rhs_mag_M441_HE, 10);
			mag_xx(rhs_mag_M713_Red, 5);
			mag_xx(rhs_mag_M714_White, 5);
			mag_xx(rhs_mag_M715_Green, 5);
			mag_xx(rhs_mag_M716_Yellow, 5);
			mag_xx(rhs_mag_smaw_SR, 5);
			mag_xx(rhs_mag_smaw_HEAA, 5);
		};
	};
	class Box_NATO_Equip_F;
	class GVAR(medicalBox): Box_NATO_Equip_F {
		displayName = "Medical Box [61st]";
		scope = public;
		hiddenSelectionsTextures[] = {"\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_blufor_co.paa",QPATHTOF(data\textures\medical_Box2.paa)};
		EditorCat
		supplies
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
};