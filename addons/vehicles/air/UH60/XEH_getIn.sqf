#include "..\..\script_component.hpp"
params ["_vehicle", "_role", "_unit", "_turret"];
_vehicle SetUserMFDvalue [1, GVAR(HMDUnit)];
_vehicle SetUserMFDvalue [2, parseNumber GVAR(HMDClutter)];
_vehicle SetUserMFDvalue [3, GVAR(HMDColor) select 0];
_vehicle SetUserMFDvalue [4, GVAR(HMDColor) select 1];
_vehicle SetUserMFDvalue [5, GVAR(HMDColor) select 2];
_vehicle SetUserMFDvalue [6, GVAR(HMDOpacity)];