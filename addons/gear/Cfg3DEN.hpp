class CFG3DEN {
    class Object {
        class AttributeCategories {
            class ADDON {
                displayName = "61st Aux";
                collapsed = 1;
                class Attributes {
                    class GVAR(arsenal) {
                        displayName = "Add Arsenal";
                        tooltip = "Add ACE Arsenal with proper items for the 61st.";
                        property = QGVAR(arsenal);
                        control = "Checkbox";
                        expression = QUOTE(if (_value) then {_this call FUNC(arsenal)};);
                        defaultValue = "false";
                        condition = "1 - objectControllable";
                    };
                    class GVAR(loadouts) {
                        displayName = "Add Loadouts";
                        tooltip = "Add loadouts options to the scroll wheel.";
                        property = QGVAR(loadouts);
                        control = "Checkbox";
                        expression = QUOTE(if (_value) then {_this call FUNC(loadouts)};);
                        defaultValue = "false";
                        condition = "1 - objectControllable";
                    };
                };
            };
        };
    };
};