#include "../../script_component.hpp"
params ["_player"];
//JETPILOT//

removeUniform _player;
removeVest _player;
removeHeadgear _player;
removeAllWeapons _player;
removeAllItems _player;
removeBackpack _player;
removeGoggles _player;
_player unlinkItem "ItemcTab";

// Headgear //
_player addHeadgear "RHS_jetpilot_usaf";

// Uniform MEDICAL, MAP TOOLS, CABLETIES, MAGLITE //
_player forceAddUniform "U_B_PilotCoveralls";
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

// Weapons //
_player addWeapon "rhsusf_weap_glock17g4";
_player addWeapon "rhsusf_bino_m24";

// Linked Items // 
_player linkItem "ItemCompass";
_player linkItem "ItemMap";
_player linkItem "ItemWatch";
_player linkItem "ItemCTAB";