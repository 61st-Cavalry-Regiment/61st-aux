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

class Extended_Init_EventHandlers {
    class air;
    class plane : air {
        class GVAR(plane_addactions) {
            init = QUOTE((_this select 0) spawn FUNC(MPaddaction));
        };
    };

    class Helicopter : air {
        class GVAR(helicopter_addactions) {
            init = QUOTE((_this select 0) spawn FUNC(MPaddaction));
        };
    };
};