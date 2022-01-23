class Extended_InitPost_EventHandlers {
    class RHS_UH60M {
        class GVAR(UH60cargo) {
            init = QUOTE(call COMPILE_FILE(XEH_InitPost));
        };
    };
};
class Extended_GetIn_EventHandlers {
    class RHS_UH60M {
        class GVAR(UH60GetIn) {
            GetIn = QUOTE(call COMPILE_FILE(XEH_getIn));
        };
    };
};