/*
 * Author: www.gsri.team
 * Set ACE medical skills. On this server, only skill 0 (untrained) and 2 (doctor) are used, skill 1 (medic) is not expected to appear here.
 *
 * Arguments:
 * _skill : Integer, 0 or 2
 *
 * Return Value:
 * None
 *
 * Example:
 * [2] call GSRI_fnc_setMedicalSkill
 *
 * Public: No
 */

params[["_skill", -1, [0]]];

// This will filter out any number other than 0 or 2. If the argument is not an integer, the default value -1 will be used (and a script error displayed), so this line will also catch it.
if !(_skill in [0,2]) exitWith { ["Skill level %1 unknown.", _skill] call BIS_fnc_error };

// There is apparently no better way to change a player's medical skill, ACE itself does it this way.
player setVariable ["ace_medical_medicClass", _skill, true];

private _notificationData = [
	[localize "STR_GSRI_locker_nowNoMed", "\fr\gsri\props\UI\lockers\untrained_co.paa", localize "STR_GSRI_locker_nowNoMed_description"],
	[localize "STR_GSRI_locker_nowDoctor", "\z\ace\addons\medical_gui\ui\cross.paa", localize "STR_GSRI_locker_nowDoctor_description"]
] select (_skill == 2);
["GSRI_locker_setMedicalSkills", _notificationData] call BIS_fnc_showNotification;
