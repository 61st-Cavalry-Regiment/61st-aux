params ["_player"];
//CORPSMAN//

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
for "_i" from 1 to 2 do {_player addItemToUniform "ACE_quikclot";};
for "_i" from 1 to 3 do {_player addItemToUniform "ACE_CableTie";};
for "_i" from 1 to 1 do {_player addItemToUniform "ACE_epinephrine";};
for "_i" from 1 to 4 do {_player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 4 do {_player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 1 do {_player addItemToUniform "ACE_EarPlugs";};
for "_i" from 1 to 3 do {_player addItemToUniform "ACE_splint";};
for "_i" from 1 to 2 do {_player addItemToUniform "ACE_tourniquet";};

// Vest HCAM,ANPVS,MICRODAGR,AMMO,SMOKE// 
_player addVest "rhsusf_iotv_ocp_Medic";
_player addItemToVest "ItemcTabHCam";
_player addItemToVest "rhsusf_ANPVS_15";
for "_i" from 1 to 2 do {_player addItemToVest "rhs_mag_m67";};
for "_i" from 1 to 4 do {_player addItemToVest "rhs_mag_an_m8hc";};
for "_i" from 1 to 4 do {_player addItemToVest "rhs_mag_30Rnd_556x45_M855_Stanag";};

// Backpack AMMO// 
_player addBackpack "rhsusf_assault_eagleaiii_ocp";
for "_i" from 1 to 20 do {_player addItemToBackpack "ACE_elasticBandage";};
for "_i" from 1 to 8 do {_player addItemToBackpack "ACE_splint";};
for "_i" from 1 to 8 do {_player addItemToBackpack "ACE_tourniquet";};
for "_i" from 1 to 10 do {_player addItemToBackpack "ACE_quikclot";};
for "_i" from 1 to 20 do {_player addItemToBackpack "ACE_packingBandage";};
for "_i" from 1 to 10 do {_player addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 2 do {_player addItemToBackpack "ACE_plasmaIV";};
for "_i" from 1 to 4 do {_player addItemToBackpack "ACE_plasmaIV_500";};
for "_i" from 1 to 8 do {_player addItemToBackpack "ACE_plasmaIV_250";};
for "_i" from 1 to 5 do {_player addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 10 do {_player addItemToBackpack "ACE_adenosine";};
for "_i" from 1 to 1 do {_player addItemToBackpack "ACE_surgicalKit";};
for "_i" from 1 to 2 do {_player addItemToBackpack "rhs_mag_30Rnd_556x45_M855_Stanag";};

// Weapons //
_player addWeapon "rhs_weap_m4a1_carryhandle";
_player addPrimaryWeaponItem "rhsusf_acc_compm4";
_player addWeapon "rhsusf_bino_m24";

// Linked Items // 
_player linkItem "ItemCompass";
_player linkItem "ItemMap";
_player linkItem "ItemWatch";
_player linkItem "ItemCTAB";