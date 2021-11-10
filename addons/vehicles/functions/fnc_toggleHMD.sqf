if !(isNull objectParent player) then {
    if (getText (configFile >> 'CfgVehicles' >> typeOf(vehicle player) >> 'displayName') find 'UH-60M' != -1) then {
		switch (getUserMFDvalue vehicle player # 0) do {
			case 0: {vehicle player setUserMFDValue [0,1]};
			case 1: {vehicle player setUserMFDValue [0,0]};
		};
	};
	//TODO Add Apache toggle, user value 3 is alpha set to 1 to enable 0 to disable
};