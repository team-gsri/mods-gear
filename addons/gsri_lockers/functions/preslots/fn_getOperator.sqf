removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;
player addWeapon "SMA_MK18MOEOD";
player addPrimaryWeaponItem "sma_gemtech_one_wdl";
player addPrimaryWeaponItem "optic_MRCO";
player addPrimaryWeaponItem "SMA_Gripod_01";
player forceAddUniform "GSRI_uniform";
player addVest "GSRI_vest_carrier";
player addBackpack "GSRI_Kitbag";
for "_i" from 1 to 10 do {player addItemToUniform "ACE_quikclot";};
for "_i" from 1 to 4 do {player addItemToUniform "ACE_splint";};
for "_i" from 1 to 4 do {player addItemToUniform "ACE_tourniquet";};
for "_i" from 1 to 2 do {player addItemToUniform "ACE_morphine";};
player addItemToUniform "ACE_EarPlugs";
for "_i" from 1 to 4 do {player addItemToUniform "ACE_CableTie";};
for "_i" from 1 to 10 do {player addItemToVest "SMA_30Rnd_556x45_Mk262";};
for "_i" from 1 to 3 do {player addItemToVest "SmokeShell";};
for "_i" from 1 to 3 do {player addItemToVest "ACE_M84";};
player addItemToBackpack "A3_GPNVG18_F";
for "_i" from 1 to 2 do {player addItemToBackpack "ACE_MRE_LambCurry";};
for "_i" from 1 to 4 do {player addItemToBackpack "ACE_WaterBottle";};
player addHeadgear "milgp_h_airframe_01_RGR";
player addGoggles "G_Balaclava_blk";
player linkItem "ItemWatch";
player linkItem "TFAR_anprc152";
["GSRI_locker_getPreslot", [localize "STR_GSRI_locker_gearAsOperator"]] call BIS_fnc_showNotification;
