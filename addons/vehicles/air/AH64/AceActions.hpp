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
			statement = "_target setObjectTextureGlobal [0, 'rhsusf\addons\rhsusf_a2port_air\AH64\data\ah64d_body_co.paa'];";
		};
		noseArtAh64(AP6F.paa, p6, Phoenix 6)
		noseArtAh64(AP11F.paa, p11, Phoenix 1-1)
		noseArtAh64(AP12F.paa, p12, Phoenix 1-2)
		noseArtAh64(AP13F.paa, p13, Phoenix 1-3)
		noseArtAh64(AP14F.paa, p14, Phoenix 1-4)
		};
};