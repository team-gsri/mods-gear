removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;
player addWeapon "SMA_MK18MOEBLK";
player forceAddUniform "GSRI_shirt_green";
player addVest "GSRI_vest_modular_accessories";
player addBackpack "GSRI_Carryall";
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_CableTie";
for "_i" from 1 to 9 do {player addItemToUniform "SmokeShell";};
for "_i" from 1 to 4 do {player addItemToVest "GSRI_weighting_bag";};
player addItemToVest "ACE_EntrenchingTool";
for "_i" from 1 to 10 do {player addItemToVest "ACE_30Rnd_556x45_Stanag_Mk318_mag";};
for "_i" from 1 to 2 do {player addItemToBackpack "GSRI_weighting_bag_5kg";};
for "_i" from 1 to 4 do {player addItemToBackpack "GSRI_weighting_bag_1kg";};
player addHeadgear "GSRI_beret";
["GSRI_locker_getPreslot", [localize "STR_GSRI_locker_gearAsRegular"]] call BIS_fnc_showNotification;
