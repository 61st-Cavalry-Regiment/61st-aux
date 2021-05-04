class ACE_Medical_Treatment_Actions {
	class Morphine;
	class GVAR(Ibuprofen):Morphine {
		displayName = "Take Ibuprofen";
		displayNameProgress = "Having some water and rest...";
		allowedSelections[] = {"Head"};
		items[] = {QGVAR(Ibuprofen)};
		treatmentTime = 1;
	};
};