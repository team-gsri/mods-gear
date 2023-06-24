params ["_target", "_source", "_this"];
params ["_role"];

// initialize operator
removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

// Add primary weapon
switch (_role) do {
	default {
		player addWeapon "SMA_MK18afgOD";
		player addPrimaryWeaponItem "SMA_SFFL_BLK";
		player addPrimaryWeaponItem "SMA_CMOREGRN";
	};
	case "Gunner": {
		player addWeapon "LMG_03_F";
		player addPrimaryWeaponItem "SMA_eotech552";
	};
	case "Grenadier": {
		player addWeapon "SMA_MK18OD_GL";
		player addPrimaryWeaponItem "SMA_SFFL_BLK";
		player addPrimaryWeaponItem "SMA_CMOREGRN";
	};
	case "Marksman": {
		player addWeapon "SMA_MK18afgOD";
		player addPrimaryWeaponItem "SMA_SFFL_BLK";
		player addPrimaryWeaponItem "optic_MRCO";
	};
};

// Add containers
switch(_role) do {
	default {
		player forceAddUniform "GSRI_uniform";
		player addVest "GSRI_vest_modular_accessories";
		player addBackpack "GSRI_Kitbag";
	};
	case "Medic": {
		player forceAddUniform "GSRI_uniform";
		player addVest "GSRI_vest_modular_accessories";
		player addBackpack "GSRI_TacticalPack";
	};
};

// Add primary ammo
switch(_role) do {
	default {
		for "_i" from 1 to 10 do {
			player addItemToVest "SMA_30Rnd_556x45_Mk262_Tracer";
		};
	};
	case "Gunner": {
		for "_i" from 1 to 2 do {
			player addItemToVest "200Rnd_556x45_Box_F";
		};
		for "_i" from 1 to 2 do {
			player addItemToBackpack "200Rnd_556x45_Box_F";
		};
	};
};

// Add common items
player addHeadgear "GSRI_helmet_spec";
player addItemToUniform "ACE_EarPlugs";
player addItemToVest "ACRE_PRC343";
player addItemToBackpack "ACE_EntrenchingTool";
player linkItem "ItemWatch";
player linkItem "ItemRadioAcreFlagged";
for "_i" from 1 to 10 do {
	player addItemToUniform "ACE_quikclot";
};
for "_i" from 1 to 4 do {
	player addItemToUniform "ACE_splint";
};
for "_i" from 1 to 4 do {
	player addItemToUniform "ACE_tourniquet";
};
for "_i" from 1 to 2 do {
	player addItemToUniform "ACE_morphine";
};
for "_i" from 1 to 4 do {
	player addItemToUniform "ACE_CableTie";
};
for "_i" from 1 to 4 do {
	player addItemToVest "SmokeShell";
};
for "_i" from 1 to 4 do {
	player addItemToVest "ACE_M84";
};
for "_i" from 1 to 2 do {
	player addItemToVest "HandGrenade";
};
for "_i" from 1 to 2 do {
	player addItemToBackpack "ACE_MRE_LambCurry";
};
for "_i" from 1 to 4 do {
	player addItemToBackpack "ACE_WaterBottle";
};

// Add specific additional equipment
switch(_role) do
{
	case "Antitank": {
		player addWeapon "tf47_at4_heat";
	};
	case "Medic": {
		player addItemToBackpack "ACE_surgicalKit";
		for "_i" from 1 to 30 do {
			player addItemToBackpack "ACE_packingBandage";
		};
		for "_i" from 1 to 15 do {
			player addItemToBackpack "ACE_salineIV_500";
		};
		for "_i" from 1 to 10 do {
			player addItemToBackpack "ACE_morphine";
		};
		for "_i" from 1 to 10 do {
			player addItemToBackpack "ACE_epinephrine";
		};
		for "_i" from 1 to 10 do {
			player addItemToBackpack "ACE_splint";
		};
	};
	case "Grenadier": {
		for "_i" from 1 to 10 do {
			player addItemToBackpack "1Rnd_HE_Grenade_shell";
		};
		for "_i" from 1 to 10 do {
			player addItemToBackpack "ACE_40mm_Flare_white";
		};
		for "_i" from 1 to 10 do {
			player addItemToBackpack "1Rnd_Smoke_Grenade_shell";
		};
	};
	case "Lead": {
		player addWeapon "ACE_Vector";
		player addItemToBackpack "ACE_Flashlight_XL50";
		player addItemToBackpack "ACE_MapTools";
		player addItemToBackpack "ACRE_PRC152";
		player linkItem "ItemMap";
		player linkItem "ItemCompass";
	};
};

private _key = ["STR_GSRI_locker_gearAsGcap", _role] joinString "";
private _value = [localize _key, "(GCAP)"] joinString " ";
["GSRI_locker_getPreslot", [_value]] call BIS_fnc_showNotification;