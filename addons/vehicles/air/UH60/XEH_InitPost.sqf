#include "..\..\script_component.hpp"
params ["_unit"];
LOG("UH60 Resupply Added");
if(_unit isEqualTo player) then {_unit = vehicle _unit};
[QEGVAR(gear,medicalBox), _unit] call ace_cargo_fnc_loadItem;
[QEGVAR(gear,medicalBox), _unit] call ace_cargo_fnc_loadItem;
[QEGVAR(gear,ammoBox), _unit] call ace_cargo_fnc_loadItem;
[QEGVAR(gear,ammoBox), _unit] call ace_cargo_fnc_loadItem;