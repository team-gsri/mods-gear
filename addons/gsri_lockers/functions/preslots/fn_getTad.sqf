removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;
player addWeapon "arifle_SPAR_01_blk_F";
player addPrimaryWeaponItem "muzzle_snds_M";
player addPrimaryWeaponItem "optic_MRCO";
player addPrimaryWeaponItem "bipod_01_F_blk";
player forceAddUniform "GSRI_uniform";
player addVest "GSRI_vest_ga_carrier_lite";
player addBackpack "GSRI_Kitbag";
for "_i" from 1 to 10 do {player addItemToUniform "ACE_quikclot";};
for "_i" from 1 to 4 do {player addItemToUniform "ACE_splint";};
for "_i" from 1 to 4 do {player addItemToUniform "ACE_tourniquet";};
for "_i" from 1 to 2 do {player addItemToUniform "ACE_morphine";};
for "_i" from 1 to 4 do {player addItemToUniform "ACE_CableTie";};
player addItemToUniform "ACE_EarPlugs";
for "_i" from 1 to 5 do {player addItemToVest "150Rnd_556x45_Drum_Mag_Tracer_F";};
for "_i" from 1 to 4 do {player addItemToVest "SmokeShell";};
for "_i" from 1 to 2 do {player addItemToVest "ACE_M84";};
player addItemToBackpack "A3_GPNVG18_F";
for "_i" from 1 to 4 do {player addItemToBackpack "ACE_WaterBottle";};
for "_i" from 1 to 2 do {player addItemToBackpack "ACE_MRE_LambCurry";};
for "_i" from 1 to 2 do {player addItemToBackpack "150Rnd_556x45_Drum_Mag_Tracer_F";};
player addHeadgear "GSRI_helmet_modular_advanced";
player addGoggles "G_Balaclava_blk";
player linkItem "ItemWatch";
player linkItem "TFAR_anprc152_22";
["GSRI_locker_getPreslot", [localize "STR_GSRI_locker_gearAsTad"]] call BIS_fnc_showNotification;
