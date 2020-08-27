#include "../../script_component.hpp"
params ["_player"];
//MARKSMAN//

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
_player addVest "rhsusf_iotv_ocp_Rifleman";
_player addItemToVest "ItemcTabHCam";
_player addItemToVest "rhsusf_ANPVS_15";
vest_x(4,rhs_mag_an_m8hc);
vest_x(4,rhsusf_20Rnd_762x51_SR25_m993_Mag);
vest_x(2,rhs_mag_m67);
// for "_i" from 1 to 4 do {_player addItemToVest "rhs_mag_an_m8hc";};
// for "_i" from 1 to 4 do {_player addItemToVest "rhsusf_20Rnd_762x51_SR25_m993_Mag";};
// for "_i" from 1 to 2 do {_player addItemToVest "rhs_mag_m67";};

// Weapons //
_player addWeapon "rhs_weap_sr25";
_player addWeapon "rhsusf_bino_lerca_1200_tan";
_player addPrimaryWeaponItem "optic_sos";

// Linked Items // 
_player linkItem "ItemCompass";
_player linkItem "ItemMap";
_player linkItem "ItemWatch";
_player linkItem "ItemCTAB";