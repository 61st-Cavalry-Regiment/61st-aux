class ACE_Medical_Treatment {
	class Morphine;
	class Medication {
		class GVAR(Ibuprofen): Morphine {
			painReduce = 0.4;
			hrIncreaseLow[] = {0};
			hrIncreaseNormal[] = {0};
			hrIncreaseHigh[] = {0};
			timeInSystem = 3000;
			timeTillMaxEffect = 120;
			maxDose = 12;
			incompatibleMedication[] = {};
			viscosityChange = -1;
		};
	};
};