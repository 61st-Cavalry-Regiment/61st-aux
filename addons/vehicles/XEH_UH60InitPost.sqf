#include "script_component.hpp"
params ["_unit"];
LOG("UH60 Resupply Added");
if(_unit isEqualTo player) then {_unit = vehicle _unit};
["Box_NATO_WpsLaunch_F", _unit] call ace_cargo_fnc_loadItem;
["Box_NATO_Ammo_F", _unit] call ace_cargo_fnc_loadItem;
["ACE_medicalSupplyCrate_advanced", _unit] call ace_cargo_fnc_loadItem;