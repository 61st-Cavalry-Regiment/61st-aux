#include "script_component.hpp"
params [["_box", nil]];
_box addAction ["<t color='#ffffff'>Squad Leader</t>", QUOTE(_this select 1 call FUNC(squadleader)),nil,16]; 
_box addAction ["<t color='#ffffff'>Team Leader</t>", QUOTE(_this select 1 call FUNC(teamleader)),nil,16]; 
_box addAction ["<t color='#ffffff'>Medic</t>", QUOTE(_this select 1 call FUNC(medic)),nil,16]; 
_box addAction ["<t color='#ffffff'>Rifleman</t>", QUOTE(_this select 1 call FUNC(rifleman)),nil,16]; 
_box addAction ["<t color='#ffffff'>Autorifleman</t>", QUOTE(_this select 1 call FUNC(ar)),nil,16]; 
_box addAction ["<t color='#ffffff'>Anti-Tank Rifleman</t>", QUOTE(_this select 1 call FUNC(at)),nil,16]; 
_box addAction ["<t color='#ffffff'>Grenadier</t>", QUOTE(_this select 1 call FUNC(grenadier)),nil,16]; 
_box addAction ["<t color='#ffffff'>Marksman</t>", QUOTE(_this select 1 call FUNC(marksman)),nil,16]; 
_box addAction ["<t color='#ffffff'>RTO</t>", QUOTE(_this select 1 call FUNC(rto)),nil,16]; 
_box addAction ["<t color='#ffffff'>Jet Pilot</t>", QUOTE(_this select 1 call FUNC(jetpilot)),nil,16]; 
_box addAction ["<t color='#ffffff'>Helicopter Pilot</t>", QUOTE(_this select 1 call FUNC(helipilot)),nil,16]; 