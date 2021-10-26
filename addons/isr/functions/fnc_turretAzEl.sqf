[_this select 0] call CBA_fnc_viewDir params ["_vDir", "_vInc"];



private _position = ATLToASL positionCameraToWorld [0, 0, 0];

private _direction = ATLToASL positionCameraToWorld [0, 0, 1];



private _wDir = ((_direction select 0) - (_position select 0)) atan2 ((_direction select 1) - (_position select 1));

private _wInc = asin ((_direction select 2) - (_position select 2));


private _azimuth = (_wDir - _vDir) call CBA_fnc_simplifyAngle180; 
private _inclination = (_wInc - _vInc) call CBA_fnc_simplifyAngle180;

[_azimuth, _inclination]