params ["_player", "_veh"];

if ((unitIsUAV _veh) && (cameraView == "GUNNER") && ([UAVControl _veh] select 1 == "GUNNER")) exitWith {true};

if ((!(unitIsUAV _veh)) && (cameraView == "GUNNER") && (_veh getCargoIndex _player == -1)) exitWith {true};

false;