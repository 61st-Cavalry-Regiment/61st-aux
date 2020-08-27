#include "../../script_component.hpp"
params ["_player"];
//HELIPILOT//

removeUniform _player;
removeVest _player;
removeHeadgear _player;
removeAllWeapons _player;
removeAllItems _player;
removeBackpack _player;
removeGoggles _player;
_player unlinkItem "ItemcTab";

// Headgear //
_player addHeadgear "rhsusf_hgu56p_visor";

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
vest_x(1,rhs_mag_m18_green);
vest_x(1,rhs_mag_an_m8hc);
vest_x(2,rhsusf_mag_15Rnd_9x19_FMJ);
// for "_i" from 1 to 1 do {_player addItemToVest "rhs_mag_m18_green";};
// for "_i" from 1 to 1 do {_player addItemToVest "rhs_mag_an_m8hc";};
// for "_i" from 1 to 2 do {_player addItemToVest "rhsusf_mag_15Rnd_9x19_FMJ";};

// Weapons //
_player addWeapon "rhsusf_weap_m9";
_player addWeapon "rhsusf_bino_m24";

// Linked Items // 
_player linkItem "ItemCompass";
_player linkItem "ItemMap";
_player linkItem "ItemWatch";
_player linkItem "ItemCTAB";