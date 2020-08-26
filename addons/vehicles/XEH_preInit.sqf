#include "script_component.hpp"
ADDON = false;
#include "XEH_PREP.hpp"
ADDON = true;
LOG("Creating CBA Addon Options");
[
	QGVAR(HMDColor),
	"COLOR",
	["HMD Color", "UH60 Only"],
	["61st Aux", "HMD"],
	[0,1,0],
	2,
	{if !(isNull objectParent player) then {
    if (getText (configFile >> 'CfgVehicles' >> typeOf(vehicle player) >> 'displayName') find 'UH-60M' != -1) then {
		vehicle player SetUserMFDvalue [3,_this # 0];
		vehicle player SetUserMFDvalue [4,_this # 1];
		vehicle player SetUserMFDvalue [5,_this # 2];
	};
};}
] call CBA_fnc_addSetting;
[
	QGVAR(HMDOpacity),
	"SLIDER",
	["HMD Opacity", "UH60 Only"],
	["61st Aux", "HMD"],
	[0,1,.2,2],
	2,
	{if !(isNull objectParent player) then {
    if (getText (configFile >> 'CfgVehicles' >> typeOf(vehicle player) >> 'displayName') find 'UH-60M' != -1) then {
		vehicle player SetUserMFDvalue [6,_this];
	};
};}
] call CBA_fnc_addSetting;
[
	QGVAR(HMDUnit),
	"LIST",
	["HMD Units", "UH60 Only"],
	["61st Aux", "HMD"],
	[[0,1],["Metric", "Imperial"],0],
	2,
	{if !(isNull objectParent player) then {
    if (getText (configFile >> 'CfgVehicles' >> typeOf(vehicle player) >> 'displayName') find 'UH-60M' != -1) then {
		vehicle player SetUserMFDvalue [1,_this];
	};
};}
] call CBA_fnc_addSetting;
[
	QGVAR(HMDClutter),
	"CHECKBOX",
	["HMD Declutter", "UH60 Only"],
	["61st Aux", "HMD"],
	false,
	2,
	{if !(isNull objectParent player) then {
    if (getText (configFile >> 'CfgVehicles' >> typeOf(vehicle player) >> 'displayName') find 'UH-60M' != -1) then {
		vehicle player SetUserMFDvalue [2, parseNumber _this];
	};
};}
] call CBA_fnc_addSetting;
LOG("Creating CBA Keybinds");
[
	"61st Aux",
	QGVAR(HMDToggleKey),
	"Toggle HMD",
	{call FUNC(toggleHMD);},
	""
] call CBA_fnc_addKeybind;