class SensorTemplateIR;
class SensorTemplatePassiveRadar;
class SensorTemplateVisual;
class SensorTemplateLaser;

class CfgVehicles {
	//Helicopters
	class Helicopter {
		class ACE_SelfActions;
	};
	class Helicopter_Base_F: Helicopter {
		class ACE_SelfActions: ACE_SelfActions {};
	};
	class Helicopter_Base_H: Helicopter_Base_F {
		class ACE_SelfActions: ACE_SelfActions {};
	};
	class Heli_Transport_01_base_F: Helicopter_Base_H {
		class ACE_SelfActions: ACE_SelfActions {};
	};
	
	class Heli_Transport_02_base_F: Helicopter_Base_H {};
	class RHS_MELB_MH6M;
	faction(MELB_MH6M, RHS_MELB_MH6M)
	class RHS_MELB_AH6M;
	faction(MELB_AH6M, RHS_MELB_AH6M)
	class RHS_CH_47F;
	faction(CH_47F, RHS_CH_47F)
	class B_UAV_02_dynamicLoadout_F;
	faction(UAV, B_UAV_02_dynamicLoadout_F)

};
