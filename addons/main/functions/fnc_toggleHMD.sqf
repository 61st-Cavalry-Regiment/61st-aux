if !(isNull objectParent player) then {
    if (getText (configFile >> 'CfgVehicles' >> typeOf(vehicle player) >> 'displayName') find 'UH-60M' != -1) then {
		switch (getUserMFDvalue vehicle player # 0) do {
			case 0: {vehicle player setUserMFDValue [0,1]};
			case 1: {vehicle player setUserMFDValue [0,0]};
		};
	};
    if (getText (configFile >> 'CfgVehicles' >> typeOf(vehicle player) >> 'displayName') find 'AH-64D' != -1) then {
		switch (getUserMFDvalue vehicle player # 3) do {
			case 0: {vehicle player setUserMFDValue [3,1]};
			case 1: {vehicle player setUserMFDValue [3,0]};
		};
	};	
};
