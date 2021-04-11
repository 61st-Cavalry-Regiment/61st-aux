#include "script_component.hpp"
params ["_player","_type","_slot"];
[] call compile preprocessFile QPATHTOEF(tools,functions\json.sqf);
json = (loadFile QPATHTOF(data\desert.json)) call MF_Json_Parse;
test = [json, _slot] call MF_Json_Get;
_player unassignItem "NVGoggles";
removeUniform _player;
removeVest _player;
removeHeadgear _player;
removeAllWeapons _player;
removeAllItems _player;
removeBackpack _player;
removeGoggles _player;
_player unlinkItem "ItemcTab";
_player addHeadgear ([json, _slot+".headgear"] call MF_Json_Get);
_player forceAddUniform ([json, _slot+".uniform.class"] call MF_Json_Get);
{
	uni_x(_x # 1, _x # 0);
} forEach ([json, _slot+".uniform.items"] call MF_Json_Get) # 1;
_player addVest ([json, _slot+".vest.class"] call MF_Json_Get);
{
	vest_x(_x # 1, _x # 0);
} forEach ([json, _slot+".vest.items"] call MF_Json_Get) # 1;
_player addBackpack ([json, _slot+".backpack.class"]);
{
	backpack_x(_x # 1, _x # 0);
} forEach ([json, _slot+".backpack.items"] call MF_Json_Get) # 1;
{
	_player linkItem _x # 0
} forEach ([json, _slot+".linkedItems"] call MF_Json_Get) # 1;
_player addWeapon ([json, _slot+".weapon.class"] call MF_Json_Get);
{
	_player addPrimaryWeaponItem _x # 0;
} forEach ([json, _slot+".weapon.items"] call MF_Json_Get) # 1;
_player addWeapon ([json, _slot+".binocoular"] call MF_Json_Get);
LOG("YES");
test;