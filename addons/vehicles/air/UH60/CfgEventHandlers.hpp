class Extended_InitPost_EventHandlers {
    class CUP_B_UH60M_US {
        class GVAR(UH60cargo) {
            init = QUOTE(call COMPILE_FILE(XEH_InitPost));
        };
    };
};
class Extended_GetIn_EventHandlers {
    class CUP_B_UH60M_US {
        class GVAR(UH60GetIn) {
            GetIn = QUOTE(call COMPILE_FILE(XEH_getIn));
        };
    };
};