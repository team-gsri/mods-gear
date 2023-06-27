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
switch(_role) do
{
	default {
		player addWeapon "SMA_MK18MOEOD";
		player addPrimaryWeaponItem "sma_gemtech_one_wdl";
		player addPrimaryWeaponItem "optic_MRCO";
		player addPrimaryWeaponItem "SMA_Gripod_01";
	};
	case "Gunner": {
		player addWeapon "LMG_03_F";
		player addPrimaryWeaponItem "SMA_eotech552";
	};
};

// Add containers
player forceAddUniform "GSRI_uniform";
player addVest "GSRI_vest_carrier_lite";
player addBackpack "GSRI_AssaultPack";

// Add primary ammo
switch(_role) do {
	default{
		for "_i" from 1 to 10 do {
			player addItemToVest "SMA_30Rnd_556x45_Mk262";
		};
	};
	case "Gunner":{
		for "_i" from 1 to 2 do {
			player addItemToVest "200Rnd_556x45_Box_F";
		};
		for "_i" from 1 to 2 do {
			player addItemToBackpack "200Rnd_556x45_Box_F";
		};
	};
};

// Add common items
player addItemToUniform "ACE_EarPlugs";
player addItemToVest "ACRE_PRC152";
player addItemToBackpack "A3_GPNVG18_BLK_F";
player addHeadgear "GSRI_helmet_modular_halfintegral";
player addGoggles "GSRI_balaclava_v2_camo";
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
switch(_role) do {
	case "Antitank": {
		player addWeapon "tf47_at4_heat";
	};
	case "Engineer": {
		player addWeapon "ACE_VMM3";
		player addItemToBackpack "ACE_DefusalKit";
		player addItemToBackpack "ACE_M26_Clacker";
		player addItemToBackpack "ACE_SpraypaintRed";
		player addItemToBackpack "ACE_wirecutter";
		for "_i" from 1 to 2 do {
			player addItemToBackpack "DemoCharge_Remote_Mag";
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

private _key = ["STR_GSRI_locker_gearAsGsri", _role] joinString "";
private _value = [localize _key, "(GSRI)"] joinString " ";
["GSRI_locker_getPreslot", [_value]] call BIS_fnc_showNotification;