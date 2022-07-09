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
	class B_UAV_02_dynamicLoadout_F;
	faction(UAV, B_UAV_02_dynamicLoadout_F)

};
