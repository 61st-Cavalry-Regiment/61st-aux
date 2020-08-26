class Extended_PreStart_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preStart));
    };
};
class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
    };
};
class Extended_PostInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_postInit));
    };
};
class Extended_InitPost_EventHandlers {
    class RHS_UH60M {
        class GVAR(cargo) {
            init = QUOTE(call COMPILE_FILE(XEH_UH60InitPost));
            excludes = QGVAR(UH60M_DAP)
        };
    };
};
class Extended_GetIn_EventHandlers {
    class RHS_UH60M {
        class GVAR(UH60GetIn) {
            GetIn = QUOTE(call COMPILE_FILE(XEH_getInUH60));
        };
    };
};