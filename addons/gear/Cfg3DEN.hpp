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
                        control = "Combo";
                        expression = QUOTE([ARR_2(_this, _value)] call FUNC(loadouts););
                        defaultValue = 0;
                        class Values {
                            class None {
                                name = "None";
                                value = 0;
                            };
                            class Desert {
                                name = "Desert";
                                value = 1;
                            };
                            class Woodland {
                                name = "Woodland NIP";
                                value = 0;
                            };
                        };
                        condition = "1 - objectControllable";
                    };
                };
            };
        };
    };
};