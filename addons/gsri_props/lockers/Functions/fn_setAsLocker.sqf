/*
 * Author: www.gsri.team
 * Set given object as a locker, including actions for :
 ** Arsenal, ACE and BI
 ** Medical skills, doctor and/or untrained
 ** A bunch of preslots
 *
 * Arguments:
 * _locker : object
 *
 * Return Value:
 * None
 *
 * Example:
 * [myCrate] call GSRI_fnc_setAsLocker
 *
 * Public: No
 */

// No serverside task
if(isDedicated) exitWith {};

// Direct type of target object must be Object
params[["_locker", objNull, [objNull]]];

// If target object not defined, abort
if(isNull _locker) exitWith {};

private [
	"_actionArsenalMain",
	"_arsenalActions",
	"_actionPreslotMain",
	"_preslotsActions",
	"_gsriActions",
	"_gcapActions",
	"_actionMedicalMain",
	"_medicalActions"
];
_arsenalActions = [];
_preslotsActions = [];
_gsriActions = [];
_gcapActions = [];
_medicalActions = [];

// Arsenal actions
_actionArsenalMain = ["actionArsenalMain",localize "STR_GSRI_locker_arsenalMain","\A3\ui_f\data\igui\cfg\simpleTasks\types\rifle_ca.paa",{},{true}] call ace_interact_menu_fnc_createAction;
_arsenalActions pushBack (["actionArsenalACE",localize "STR_GSRI_locker_openArsenalACE","",{params ["_target", "_player"];[_target,_player,true] call ace_arsenal_fnc_openBox},{true}] call ace_interact_menu_fnc_createAction);
_arsenalActions pushBack (["actionArsenalBI",localize "STR_GSRI_locker_openArsenalBI","",{["Open",true] spawn bis_fnc_arsenal},{true}] call ace_interact_menu_fnc_createAction);

// Preslot actions
_actionPreslotMain = ["actionPreslotMain",localize "STR_GSRI_locker_preslotMain","\A3\ui_f\data\igui\cfg\simpleTasks\types\armor_ca.paa",{},{true}] call ace_interact_menu_fnc_createAction;
_preslotsActions pushBack (["actionRegular",localize "STR_GSRI_locker_gearAsRegular","",GSRI_fnc_gearAsRegular,{true}] call ace_interact_menu_fnc_createAction);
_preslotsActions pushBack (["actionGsriPreslot",localize "STR_GSRI_locker_gearAsGsri","\A3\ui_f\data\igui\cfg\simpleTasks\types\armor_ca.paa",{},{true}] call ace_interact_menu_fnc_createAction);
_preslotsActions pushBack (["actionGcapPreslot",localize "STR_GSRI_locker_gearAsGcap","\A3\ui_f\data\igui\cfg\simpleTasks\types\armor_ca.paa",{},{true}] call ace_interact_menu_fnc_createAction);

// GSRI preslots
{
	private _actionName = ["actionGsri", _x] joinString "";
	private _display = ["STR_GSRI_locker_gearAsGsri", _x] joinString "";	
	_gsriActions pushBack ([_actionName, localize _display, "", GSRI_fnc_gearAsGsri, {true}, {}, [_x]] call ace_interact_menu_fnc_createAction);
} forEach ["Operator", "Antitank", "Gunner", "Engineer", "Lead"];

// GCAP preslots
{
	private _actionName = ["actionGcap", _x] joinString "";
	private _display = ["STR_GSRI_locker_gearAsGcap", _x] joinString "";	
	_gcapActions pushBack ([_actionName, localize _display, "", GSRI_fnc_gearAsGcap, {true}, {}, [_x]] call ace_interact_menu_fnc_createAction);
} forEach ["Rifleman", "Antitank", "Grenadier", "Gunner", "Marksman", "Lead"];

// Medical skills actions
_actionMedicalMain = ["actionMedicalMain",localize "STR_GSRI_locker_medicalMain","\z\ace\addons\medical_gui\ui\cross.paa",{},{true}] call ace_interact_menu_fnc_createAction;
_medicalActions pushBack (["actionNoMed",localize "STR_GSRI_locker_medicalNoMed","\fr\gsri\props\lockers\UI\untrained_co.paa",{[0] call GSRI_fnc_setMedicalSkills},{true}] call ace_interact_menu_fnc_createAction);
_medicalActions pushBack (["actionDoctor",localize "STR_GSRI_locker_medicalDoctor","\z\ace\addons\medical_gui\ui\cross.paa",{[2] call GSRI_fnc_setMedicalSkills},{true}] call ace_interact_menu_fnc_createAction);

// Adding tree
{ [_locker, 0, ["ACE_MainActions"], _x] call ace_interact_menu_fnc_addActionToObject } forEach [_actionArsenalMain,_actionPreslotMain,_actionMedicalMain];
{ [_locker, 0, ["ACE_MainActions", "actionArsenalMain"], _x] call ace_interact_menu_fnc_addActionToObject } forEach _arsenalActions;
{ [_locker, 0, ["ACE_MainActions", "actionPreslotMain"], _x] call ace_interact_menu_fnc_addActionToObject } forEach _preslotsActions;
{ [_locker, 0, ["ACE_MainActions", "actionPreslotMain", "actionGsriPreslot"], _x] call ace_interact_menu_fnc_addActionToObject } forEach _gsriActions;
{ [_locker, 0, ["ACE_MainActions", "actionPreslotMain", "actionGcapPreslot"], _x] call ace_interact_menu_fnc_addActionToObject } forEach _gcapActions;
{ [_locker, 0, ["ACE_MainActions", "actionMedicalMain"], _x] call ace_interact_menu_fnc_addActionToObject } forEach _medicalActions;
