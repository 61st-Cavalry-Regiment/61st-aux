/*
 * Author: [Name of Author(s)]
 * [Description]
 *
 * Arguments:
 * 0: The first argument <STRING>
 * 1: The second argument <OBJECT>
 * 2: Multiple input types <STRING|ARRAY|CODE>
 * 3: Optional input <BOOL> (default: true)
 * 4: Optional input with multiple types <CODE|STRING> (default: {true})
 * 5: Not mandatory input <STRING> (default: nil)
 *
 * Return Value:
 * The return value <BOOL>
 *
 * Example:
 * ["something", player] call ace_common_fnc_imanexample
 *
 * Public: [Yes/No]
 */
#include "script_component.hpp"
params ["_veh"];

_p1 = screenToWorld [.5, .5];
p2 = [0,0,0];

// systemChat "First location set. Slew to new position and select Measure";
["First location set. Slew to new position and select Measure", true, 5] call ACE_common_fnc_displayText;
LOG("First location set. Slew to new position and select Measure");

_actionID = _veh addAction ["Measure", {p2 = screenToWorld [.5, .5];LOG_1("%1",screenToWorld[ARR_2(.5, .5)]);}, nil, 1000-8, false, true, "", QUOTE([ARR_2(_this, _target)] call FUNC(isViewISR))];

LOG("Waiting for _p2");
waitUntil {not (p2 isEqualTo [0,0,0])};

LOG("Continuing");

_veh removeAction _actionID;

_dist = round(_p1 distance2D p2);

_dir = round(_p1 getDir p2);

LOG_2("Distance: %1m - Direction: %2°", _dist, _dir);

[format["Distance: %1m - Direction: %2°", _dist, _dir], true, 10, 1] call ACE_common_fnc_displayText;