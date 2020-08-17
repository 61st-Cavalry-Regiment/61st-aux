class ACE_SelfActions {
	class ACE_Equipment {
		class GVAR(helmet) {
			displayName = "Helmet";
			condition = "(getText (configFile >> 'CfgWeapons' >> headgear _player >> 'displayName') find 'HGU-56/P' != -1)";
			statement = "";
			class raiseVisor {
				displayName = "Visor";
				condition = "(getText (configFile >> 'CfgWeapons' >> headgear _player >> 'displayName') find 'Visor' != -1 and getText (configFile >> 'CfgWeapons' >> headgear _player >> 'displayName') find 'Mask' == -1)";
				statement = "_old = headgear _player; _spl = _old splitString '_'; _spl deleteAt (count _spl) -1; _new = _spl joinString '_';  removeHeadgear _player; _player addHeadgear _new;";
			};
			class raiseVisorMask{
				displayName = "Visor";
				condition = "(getText (configFile >> 'CfgWeapons' >> headgear _player >> 'displayName') find 'Visor' != -1 and getText (configFile >> 'CfgWeapons' >> headgear _player >> 'displayName') find 'Mask' != -1)";
				statement = "_old = headgear _player; _spl = _old splitString '_'; _spl deleteAt count _spl - 1; _spl deleteAt count _spl - 1; _spl pushBack 'mask'; _new = _spl joinString '_'; removeHeadgear _player; _player addHeadgear _new;";
			};
			class lowerVisor {
				displayName = "Visor";
				condition = "(getText (configFile >> 'CfgWeapons' >> headgear _player >> 'displayName') find 'Visor' == -1 and getText (configFile >> 'CfgWeapons' >> headgear _player >> 'displayName') find 'Mask' == -1)";
				statement = "_old = headgear _player; _spl = _old splitString '_'; _spl set [count _spl, 'visor']; _new = _spl joinString '_'; removeHeadgear _player; _player addHeadgear _new;";
			};
			class lowerVisorMask{
				displayName = "Visor";
				condition = "(getText (configFile >> 'CfgWeapons' >> headgear _player >> 'displayName') find 'Visor' == -1 and getText (configFile >> 'CfgWeapons' >> headgear _player >> 'displayName') find 'Mask' != -1)";
				statement = "_old = headgear _player; _spl = _old splitString '_'; _spl deleteAt count _spl - 1; _spl pushBack 'visor'; _spl pushBack 'mask'; _new = _spl joinString '_'; removeHeadgear _player; _player addHeadgear _new;"
			};
			class removeMask {
				displayName = "Mask";
				condition = "(getText (configFile >> 'CfgWeapons' >> headgear _player >> 'displayName') find 'Mask' != -1 and getText (configFile >> 'CfgWeapons' >> headgear _player >> 'displayName') find 'Visor' == -1)";
				statement = "_old = headgear _player; _spl = _old splitString '_'; _spl deleteAt count _spl - 1; _new = _spl joinString '_'; removeHeadgear _player; _player addHeadgear _new;";
			};
			class removeMaskVisor{
				displayName = "Mask";
				condition = "(getText (configFile >> 'CfgWeapons' >> headgear _player >> 'displayName') find 'Mask' != -1 and getText (configFile >> 'CfgWeapons' >> headgear _player >> 'displayName') find 'Visor' != -1)";
				statement = "_old = headgear _player; _spl = _old splitString '_'; _spl deleteAt count _spl - 1; _spl deleteAt count _spl - 1; _spl pushBack 'visor'; _new = _spl joinString '_'; removeHeadgear _player; _player addHeadgear _new;";
			};
			class addMask {
				displayName = "Mask";
				condition = "(getText (configFile >> 'CfgWeapons' >> headgear _player >> 'displayName') find 'Mask' == -1)";
				statement = "_old = headgear _player; _spl = _old splitString '_'; _spl pushBack 'mask'; _new = _spl joinString '_'; removeHeadgear _player; _player addHeadgear _new;";
			};
			
		};
	};
};