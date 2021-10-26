#include "script_component.hpp"
disableSerialization;

_unit = _this;

_blacklistGUI = nil;


Hz = 200;
period = 1/Hz;
radius = 0.3;

while {alive _unit} do {
	uiSleep period;

	if (([player, _unit] call FUNC(isViewISR)) && (cameraOn == _unit)) then
	{
		[_unit] call FUNC(turretAzEl) params ["_turretAz", "_turretEl"];

		myPitch = _unit call BIS_fnc_getPitchBank select 0;
		myRoll = _unit call BIS_fnc_getPitchBank select 1;
		vehDir = getDir _unit;

		_wPos = screenToWorld [0.5, 0.5];
		_vPos = getPos _unit;

		_testVec = _vPos vectorFromTo _wPos;

		_Az = -1 * ( (_testVec select 0) atan2 (_testVec select 1) );
		_El = asin (_testVec select 2);

		_target = "";

		if (missionNamespace getVariable QGVAR(ShowTarget)) then
		{
			x4 = str (round((_wPos select 0)/10));
			y4 = str (round((_wPos select 1)/10));
			while {count x4 < 4} do {x4 = format["0%1",x4]};
			while {count y4 < 4} do {y4 = format["0%1",y4]};

			x5 = str (round(_wPos select 0));
			y5 = str (round(_wPos select 1));
			while {count x5 < 5} do {x5 = format["0%1",x5]};
			while {count y5 < 5} do {y5 = format["0%1",y5]};

			switch GVAR(GridNum) do
			{
				case 6: {_target = format["TGT: %1", (mapGridPosition _wPos)];};
				case 8: {_target = format["TGT: %1 %2", x4, y4];};
				case 10: {_target = format["TGT: %1 %2", x5, y5];};
				default {systemChat "Grid number error"};
			};
		};

		_posX = (radius * sin _Az)/(4/3);
		_posY = ((radius * cos _Az)*(sin _El))-0.0325;

		_newPos = [_posX, _posY];

		uiNamespace setVariable ["newPosition", _newPos];

		if (missionNamespace getVariable QGVAR(ShowNorth)) then {710 cutRsc ["North", "Plain", -1, false];};
		if (missionNamespace getVariable QGVAR(ShowAz)) then {709 cutRsc ["Az", "Plain", -1, false];};
		if (missionNamespace getVariable QGVAR(ShowEl)) then {708 cutRsc ["El", "Plain", -1, false];};

		uiNamespace getVariable "guiTgt" ctrlSetText(_target);
		uiNamespace getVariable "guiEl" ctrlSetText(format["%1", round(_turretEl)]);
		uiNamespace getVariable "guiAz" ctrlSetText(format["%1", round(_turretAz)]);

		uiNamespace setVariable ["guiAzPos", 0.45+((_turretAz/180)*0.15)];
		uiNamespace setVariable ["guiElPos", -.002+(_turretEl*-0.0041905)];

		uiNamespace getVariable "guiHdg" ctrlSetText(format["%1", round(getDir _unit)]);
	};
};