class ACE_SelfActions {
	class ACE_Equipment {
		class GVAR(helmet) {
			displayName = "Helmet";
			condition = "(headgear _player find 'CUP_H_SPH4' != -1)";
			statement = "";
			class raiseVisor {
				displayName = "Raise Visor";
				condition = "(getText (configFile >> 'CfgWeapons' >> headgear _player >> 'displayName') find 'Visor' != -1)";
				statement = "_old = headgear _player; _spl = _old splitString '_'; _spl deleteAt (count _spl) -1; _new = _spl joinString '_';  removeHeadgear _player; _player addHeadgear _new;";
			};
			class lowerVisor {
				displayName = "Lower Visor";
				condition = "(getText (configFile >> 'CfgWeapons' >> headgear _player >> 'displayName') find 'Visor' == -1)";
				statement = "_old = headgear _player; _spl = _old splitString '_'; _spl set [count _spl, 'visor']; _new = _spl joinString '_'; removeHeadgear _player; _player addHeadgear _new;";
			};
		};
	};
};