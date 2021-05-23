class ACE_SelfActions: ACE_SelfActions {
	class HMDOn {
		displayName = "HMD";
		condition = "(player in [driver this, this turretUnit [0]]) && (alive this)";
		statement = QUOTE(call FUNC(toggleHMD));
		icon = "";
	};
	class skin {
		displayName = "Nose Art";
		condition = "driver (vehicle _player) == _player";
		statement = "";
		class default {
			displayName = "None";
			condition = "";
			statement = "_target setObjectTextureGlobal [0, 'rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_fuselage_co.paa']; _target setObjectTextureGlobal [1, 'rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_engine_co.paa']";
		};
		// noseArt(uhFG1.paa, uhEG1.paa, test, Test)
		noseArt(P6F.paa, E.paa, p6, Pheonix 6)
		noseArt(P11F.paa, P11E.paa, p11, Pheonix 1-1)
		noseArt(P12F.paa, E.paa, p12, Pheonix 1-2)
		noseArt(P13F.paa, E.paa, p13, Pheonix 1-3)
		noseArt(P14F.paa, E.paa, p14, Pheonix 1-4)
		};
};