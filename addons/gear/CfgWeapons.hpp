class CfgWeapons {
	class rhsusf_hgu56p;
	class rhsusf_hgu56p_visor;
	class rhsusf_hgu56p_mask;
	class rhsusf_hgu56p_visor_mask;
	hgu(Seejers, data\textures\hgu56\Seejers_Helm.paa, seemjer)
	hgu(Craft, data\textures\hgu56\Craft_Helm.paa, craft)
	hgu(Muffins, data\textures\hgu56\Muffins_Helm.paa, muffins)
	hgu(Thunder, data\textures\hgu56\Thunder_Patches.paa, thunder)
	class GVAR(rainbow):rhsusf_hgu56p {displayName = HGU-56/P (Rainbow); hiddenSelectionsTextures[] = {QPATHTOF(data\textures\hgu56\HGU56_Gradient.paa), QPATHTOF(data\textures\hgu56\HGU56_Patches_Gradient.paa)};};\
    class GVAR(rainbow_visor):rhsusf_hgu56p_visor {scope = protected; displayName = HGU-56/P (Rainbow/Visor); hiddenSelectionsTextures[] = {QPATHTOF(data\textures\hgu56\HGU56_Gradient.paa), QPATHTOF(data\textures\hgu56\HGU56_Patches_Gradient.paa)};};\
    class GVAR(rainbow_mask):rhsusf_hgu56p_mask {scope = protected; displayName = HGU-56/P (Rainbow/Mask); hiddenSelectionsTextures[] = {QPATHTOF(data\textures\hgu56\HGU56_Gradient.paa), QPATHTOF(data\textures\hgu56\HGU56_Patches_Gradient.paa)};};\
    class GVAR(rainbow_visor_mask):rhsusf_hgu56p_visor_mask {scope = protected; displayName = HGU-56/P (Rainbow/Visor/Mask); hiddenSelectionsTextures[] = {QPATHTOF(data\textures\hgu56\HGU56_Gradient.paa), QPATHTOF(data\textures\hgu56\HGU56_Patches_Gradient.paa)};};
};