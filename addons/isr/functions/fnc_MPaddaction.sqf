#include "script_component.hpp"
_unit = _this;

_pri = 1000;

#include "\a3\editor_f\Data\Scripts\dikCodes.h"

["61st ISR","add_blk_marker", "Mark Target (Blk)",{["ColorBlack"] call FUNC(addMarker)}, "", [DIK_1, [true, false, false]]] call CBA_fnc_addKeybind;
["61st ISR","add_blu_marker", "Mark Target (Blu)",{["ColorBlue"] call FUNC(addMarker)}, "", [DIK_2, [true, false, false]]] call CBA_fnc_addKeybind;
["61st ISR","add_red_marker", "Mark Target (Red)",{["ColorRed"] call FUNC(addMarker)}, "", [DIK_3, [true, false, false]]] call CBA_fnc_addKeybind;

_unit addAction ["Mark Target (Blk)", {["ColorBlack"] call FUNC(addMarker)},nil, _pri,false, true, "", QUOTE(([ARR_2(_this, _target)] call FUNC(isViewISR)) && GVAR(Markers))];
_unit addAction ["Mark Target <t color='#0000FF'>(Blu)</t>", {["ColorBlue"] call FUNC(addMarker)},nil, _pri - 1,false, true, "", QUOTE(([ARR_2(_this, _target)] call FUNC(isViewISR)) && GVAR(Markers))];
_unit addAction ["Mark Target <t color='#FF0000'>(Red)</t>", {["ColorRed"] call FUNC(addMarker)},nil, _pri - 2,false, true, "", QUOTE(([ARR_2(_this, _target)] call FUNC(isViewISR)) && GVAR(Markers))];

// _unit addAction ["Change Altitude", "_this call fatlurch_fnc_changeAltitude",nil, _pri - 3,false, true, "","(([_this, _target] call fatlurch_fnc_isViewISR) && (_target isKindOf 'uav'))"];	//2020_08_24
// _unit addAction ["Change Loiter", "_this call fatlurch_fnc_changeLoiter",nil, _pri - 4,false, true, "","(([_this, _target] call fatlurch_fnc_isViewISR) && (_target isKindOf 'uav') && (waypointType [group _target, currentWaypoint group _target] == 'LOITER'))"];	//2020_08_24
_unit addAction ["Map Slew", {params ["_target", "_caller", "_actionId", "_arguments"]; [_target, _caller] call FUNC(mapSlew);},nil, _pri - 5,false, true, "", QUOTE(([ARR_2(_this, _target)] call FUNC(isViewISR)) && GVAR(MapSlew))];
_unit addAction ["Slew to Grid", {params ["_target", "_caller", "_actionId", "_arguments"]; [_target, _caller] call FUNC(inputGrid);},nil, _pri - 6, false, true, "", QUOTE(([ARR_2(_this, _target)] call FUNC(isViewISR)) && GVAR(Grid))];
_unit addAction ["Measure Distance", {params ["_target", "_caller", "_actionId", "_arguments"]; [_target] call FUNC(measDistance);},nil, _pri - 7,false, true, "", QUOTE(([ARR_2(_this, _target)] call FUNC(isViewISR)) && GVAR(Measure))];
//Placeholder for Measure
// _unit addAction ["Weapon Status", {params ["_target", "_caller", "_actionId", "_arguments"]; [_target] call fatlurch_fnc_weaponReport;},nil, _pri - 9,false, true, "","(([_this, _target] call fatlurch_fnc_isViewISR)&&(_target isKindOf 'uav'))"];
// _unit addAction ["Reset VMS", {params ["_target", "_caller", "_actionId", "_arguments"]; [_target] call fatlurch_fnc_resetUAV;},nil, _pri - 10,false, true, "","(([_this, _target] call fatlurch_fnc_isViewISR)&&(_target isKindOf 'uav'))"];

_this spawn FUNC(NorthInd);

mkrNum=0;