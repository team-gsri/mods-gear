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
	"_actionMedicalMain",
	"_medicalActions"
];
_arsenalActions = [];
_preslotsActions = [];
_medicalActions = [];

// Arsenal actions
_actionArsenalMain = ["actionArsenalMain",localize "STR_GSRI_locker_arsenalMain","\A3\ui_f\data\igui\cfg\simpleTasks\types\rifle_ca.paa",{},{true}] call ace_interact_menu_fnc_createAction;
_arsenalActions pushBack (["actionArsenalACE",localize "STR_GSRI_locker_openArsenalACE","",{params ["_target", "_player"];[_target,_player,true] call ace_arsenal_fnc_openBox},{true}] call ace_interact_menu_fnc_createAction);
_arsenalActions pushBack (["actionArsenalBI",localize "STR_GSRI_locker_openArsenalBI","",{["Open",true] spawn bis_fnc_arsenal},{true}] call ace_interact_menu_fnc_createAction);

// Preslot actions
_actionPreslotMain = ["actionPreslotMain",localize "STR_GSRI_locker_preslotMain","\A3\ui_f\data\igui\cfg\simpleTasks\types\armor_ca.paa",{},{true}] call ace_interact_menu_fnc_createAction;
_preslotsActions pushBack (["actionOperator",localize "STR_GSRI_locker_gearAsOperator","",GSRI_fnc_getOperator,{true}] call ace_interact_menu_fnc_createAction);
_preslotsActions pushBack (["actionTad",localize "STR_GSRI_locker_gearAsTad","",GSRI_fnc_getTad,{true}] call ace_interact_menu_fnc_createAction);
_preslotsActions pushBack (["actionMedic",localize "STR_GSRI_locker_gearAsMedic","",GSRI_fnc_getMedic,{true}] call ace_interact_menu_fnc_createAction);
_preslotsActions pushBack (["actionRegular",localize "STR_GSRI_locker_gearAsRegular","",GSRI_fnc_getRegular,{true}] call ace_interact_menu_fnc_createAction);
_preslotsActions pushBack (["actionAbl",localize "STR_GSRI_locker_gearAsAbl","",GSRI_fnc_getAbl,{true}] call ace_interact_menu_fnc_createAction);

// Medical skills actions
_actionMedicalMain = ["actionMedicalMain",localize "STR_GSRI_locker_medicalMain","\z\ace\addons\medical_gui\ui\cross.paa",{},{true}] call ace_interact_menu_fnc_createAction;
_medicalActions pushBack (["actionNoMed",localize "STR_GSRI_locker_medicalNoMed","\fr\gsri\props\lockers\UI\untrained_co.paa",{[0] call GSRI_fnc_setMedicalSkills},{true}] call ace_interact_menu_fnc_createAction);
_medicalActions pushBack (["actionDoctor",localize "STR_GSRI_locker_medicalDoctor","\z\ace\addons\medical_gui\ui\cross.paa",{[2] call GSRI_fnc_setMedicalSkills},{true}] call ace_interact_menu_fnc_createAction);

// Adding tree
{ [_locker, 0, ["ACE_MainActions"], _x] call ace_interact_menu_fnc_addActionToObject } forEach [_actionArsenalMain,_actionPreslotMain,_actionMedicalMain];
{ [_locker, 0, ["ACE_MainActions", "actionArsenalMain"], _x] call ace_interact_menu_fnc_addActionToObject } forEach _arsenalActions;
{ [_locker, 0, ["ACE_MainActions", "actionPreslotMain"], _x] call ace_interact_menu_fnc_addActionToObject } forEach _preslotsActions;
{ [_locker, 0, ["ACE_MainActions", "actionMedicalMain"], _x] call ace_interact_menu_fnc_addActionToObject } forEach _medicalActions;
