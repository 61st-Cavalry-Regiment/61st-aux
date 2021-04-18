#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_arsenal", "task_force_radio_items"};
        author = "AUTHOR";
        VERSION_CONFIG;
    };
};

#include "radio_ids.hpp"
class CfgWeapons {
    class ItemRadio;
    class ItemWatch;
    class tf_microdagr: ItemWatch{};
    class tf_anprc152: ItemRadio{};
	class tf_anprc148jem: ItemRadio{};
	class tf_fadak: ItemRadio{};
	class tf_anprc154: ItemRadio{};
	class tf_rf7800str: ItemRadio{};
	class tf_pnr1000a: ItemRadio{};
	TF_RADIO_IDS(tf_anprc152,AN/PRC-152)
	TF_RADIO_IDS(tf_anprc148jem,AN/PRC-148 JEM)
	TF_RADIO_IDS(tf_fadak,FADAK)
	TF_RADIO_IDS(tf_anprc154,AN/PRC-154)
	TF_RADIO_IDS(tf_rf7800str,RF-7800S-TR)
	TF_RADIO_IDS(tf_pnr1000a,PNR-1000A)
};


#include "CfgEventHandlers.hpp"
