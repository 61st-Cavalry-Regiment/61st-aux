class CfgVehicles {
	class Flag_White_F;
	class GVAR(Flag): Flag_White_F {
		author = ECSTRING(main, author);
		displayName = CSTRING(display);
		scopecurator = public;
		scope = public;
		class EventHandlers {
			init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOF(data\61stFlag.paa)));
		};
	};
	class GVAR(FlagYellow): GVAR(Flag){
		displayName = CSTRING(displayYellow);
		class EventHandlers {
			init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOF(data\61stFlagY.paa)));
		};
	};
};