#include "script_component.hpp"
_this params [["_box", nil], ["_type", 1]];
LOG_1("Type: %1",_type);
LOG_1("Box: %1",_box);
_type = parseNumber _type;
switch (_type) do {
	case 0: { };
	case 1: {
		LOG("Desert");
		_box addAction ["<t color='#ffffff'>Squad Leader</t>", QUOTE(_this select 1 call FUNC(squadleader_d)),nil,16]; 
		_box addAction ["<t color='#ffffff'>Team Leader</t>", QUOTE(_this select 1 call FUNC(teamleader_d)),nil,16]; 
		_box addAction ["<t color='#ffffff'>Medic</t>", QUOTE(_this select 1 call FUNC(medic_d)),nil,16]; 
		_box addAction ["<t color='#ffffff'>Rifleman</t>", QUOTE(_this select 1 call FUNC(rifleman_d)),nil,16]; 
		_box addAction ["<t color='#ffffff'>Autorifleman</t>", QUOTE(_this select 1 call FUNC(ar_d)),nil,16]; 
		_box addAction ["<t color='#ffffff'>Anti-Tank Rifleman</t>", QUOTE(_this select 1 call FUNC(at_d)),nil,16]; 
		_box addAction ["<t color='#ffffff'>Grenadier</t>", QUOTE(_this select 1 call FUNC(grenadier_d)),nil,16]; 
		_box addAction ["<t color='#ffffff'>Marksman</t>", QUOTE(_this select 1 call FUNC(marksman_d)),nil,16]; 
		_box addAction ["<t color='#ffffff'>RTO</t>", QUOTE(_this select 1 call FUNC(rto_d)),nil,16]; 
		_box addAction ["<t color='#ffffff'>Jet Pilot</t>", QUOTE(_this select 1 call FUNC(jetpilot_d)),nil,16]; 
		_box addAction ["<t color='#ffffff'>Helicopter Pilot</t>", QUOTE(_this select 1 call FUNC(helipilot_d)),nil,16]; 
	};
	case 2: {
		LOG("Woodland");
		_box addAction ["<t color='#ffffff'>Squad Leader</t>", QUOTE(_this select 1 call FUNC(squadleader_w)),nil,16]; 
		_box addAction ["<t color='#ffffff'>Team Leader</t>", QUOTE(_this select 1 call FUNC(teamleader_w)),nil,16]; 
		_box addAction ["<t color='#ffffff'>Medic</t>", QUOTE(_this select 1 call FUNC(medic_w)),nil,16]; 
		_box addAction ["<t color='#ffffff'>Rifleman</t>", QUOTE(_this select 1 call FUNC(rifleman_w)),nil,16]; 
		_box addAction ["<t color='#ffffff'>Autorifleman</t>", QUOTE(_this select 1 call FUNC(ar_w)),nil,16]; 
		_box addAction ["<t color='#ffffff'>Anti-Tank Rifleman</t>", QUOTE(_this select 1 call FUNC(at_w)),nil,16]; 
		_box addAction ["<t color='#ffffff'>Grenadier</t>", QUOTE(_this select 1 call FUNC(grenadier_w)),nil,16]; 
		_box addAction ["<t color='#ffffff'>Marksman</t>", QUOTE(_this select 1 call FUNC(marksman_w)),nil,16]; 
		_box addAction ["<t color='#ffffff'>RTO</t>", QUOTE(_this select 1 call FUNC(rto_w)),nil,16]; 
		_box addAction ["<t color='#ffffff'>Jet Pilot</t>", QUOTE(_this select 1 call FUNC(jetpilot_w)),nil,16]; 
		_box addAction ["<t color='#ffffff'>Helicopter Pilot</t>", QUOTE(_this select 1 call FUNC(helipilot_w)),nil,16]; 
	};
	default { };
};