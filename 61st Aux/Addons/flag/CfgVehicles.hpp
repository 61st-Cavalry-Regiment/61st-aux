class CfgVehicles {
	class Flag_White_F;
	class GVAR(61stFlag): Flag_White_F {
		author = ECSTRING(main,author);
		displayName=CSTRING(display);
		class EventHandlers {
			init=QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOF(data\61stFlag.paa)));
		};
	};
	class GVAR(61stFlagYellow): Flag_White_F {
		author = ECSTRING(main,author);
		displayName=CSTRING(displayYellow);
		class EventHandlers {
			init=QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOF(data\61stFlagY.paa)));
		};
	};
};