#include "../../script_component.hpp"
params ["_player"];
//GRENADIER//

removeUniform _player;
removeVest _player;
removeHeadgear _player;
removeAllWeapons _player;
removeAllItems _player;
removeBackpack _player;
removeGoggles _player;
_player unlinkItem "ItemcTab";

// Headgear //
_player addHeadgear "rhsusf_ach_helmet_ocp";

// Uniform MEDICAL, MAP TOOLS, CABLETIES, MAGLITE //
_player forceAddUniform "rhs_uniform_cu_ocp_101st";
_player addItemToUniform "ACE_Flashlight_XL50";
_player addItemToUniform "ACE_MapTools";
uni_x(2,ACE_quikclot);
uni_x(3,ACE_CableTie);
uni_x(1,ACE_epinephrine);
uni_x(4,elasticBandage);
uni_x(4,ACE_packingBandage);
uni_x(1,ACE_EarPlugs);
uni_x(3,ACE_splint);
uni_x(2,ACE_tourniquet);

// Vest HCAM,ANPVS,MICRODAGR,AMMO,SMOKE// 
_player addVest "rhsusf_iotv_ocp_Grenadier";
_player addItemToVest "ItemcTabHCam";
_player addItemToVest "rhsusf_ANPVS_15";
_player addItemToVest "ACE_microDAGR";
vest_x(4,rhs_mag_an_m8hc);
vest_x(6,rhs_mag_30Rnd_556x45_M855_Stanag);
vest_x(2,ths_mag_m67);


// Backpack AMMO// 
_player addBackpack "rhsusf_assault_eagleaiii_ocp";
_player addItemToBackPack "ACE_HuntIR_monitor";
backpack_x(3,rhs_mag_M441,HE);
backpack_x(4,rhs_mag_M433_HEDP);
backpack_x(1,ACE_HuntIR_M203);
// for "_i" from 1 to 3 do {_player addItemToBackPack "rhs_mag_M441_HE";};
// for "_i" from 1 to 4 do {_player addItemToBackPack "rhs_mag_M433_HEDP";};
// for "_i" from 1 to 1 do {_player addItemToBackPack "ACE_HuntIR_M203";};

// Weapons //
_player addWeapon "rhs_weap_m4a1_M320";
_player addPrimaryWeaponItem "rhsusf_acc_compm4";
_player addWeapon "rhsusf_bino_m24";

// Linked Items // 
_player linkItem "ItemCompass";
_player linkItem "ItemMap";
_player linkItem "ItemWatch";