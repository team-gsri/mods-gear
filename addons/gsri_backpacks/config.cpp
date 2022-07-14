class CfgPatches {
	class gsri_bags	{
		author="$STR_GSRI_BACKPACKS_AUTHOR";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[] = {
			"A3_Weapons_F",
			"A3_Supplies_F_Enoch"
		};
	};
};

class CfgVehicles
{
	class Bag_Base;
	class GSRI_AssaultPack : Bag_Base
	{
		author="$STR_GSRI_BACKPACKS_AUTHOR";
		scope = 2;
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact.p3d";
		displayName = "$STR_GSRI_BACKPACKS_ASSAULTPACK";
		picture = "\fr\gsri\backpacks\ui\icon_gsri_compact_ca.paa";
		hiddenSelectionsTextures[]={"\fr\gsri\backpacks\Data\gsri_compact_co.paa"};
		maximumLoad = 160;
		mass = 20;
	};
	class GSRI_Kitbag : Bag_Base
	{
		author="$STR_GSRI_BACKPACKS_AUTHOR";
		scope = 2;
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast.p3d";
		displayName = "$STR_GSRI_BACKPACKS_KITBAG";
		picture = "\fr\gsri\backpacks\ui\icon_gsri_fast_ca.paa";
		hiddenSelectionsTextures[]={"\fr\gsri\backpacks\Data\gsri_fast_co.paa"};
		maximumLoad = 280;
		mass = 50;
	};
	class GSRI_RadioBag : Bag_Base
	{
		author="$STR_GSRI_BACKPACKS_AUTHOR";
		scope = 2;
		model = "\A3\supplies_f_enoch\Bags\B_RadioBag_01_F.p3d";
		displayName = "$STR_GSRI_BACKPACKS_RADIOBAG";
		picture = "\fr\gsri\backpacks\ui\icon_gsri_radiobag_ca.paa";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[]={"\fr\gsri\backpacks\Data\gsri_radiobag_co.paa"};
		maximumLoad = 160;
		mass = 80;
	};
	class GSRI_TacticalPack : Bag_Base
	{
		author="$STR_GSRI_BACKPACKS_AUTHOR";
		scope = 2;
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Small.p3d";
		displayName = "$STR_GSRI_BACKPACKS_TACTICALPACK";
		picture = "\fr\gsri\backpacks\ui\icon_gsri_small_ca.paa";
		hiddenSelectionsTextures[]={"\fr\gsri\backpacks\Data\gsri_small_co.paa"};
		maximumLoad = 240;
		mass = 40;
	};
	class GSRI_Carryall : Bag_Base
	{
		author="$STR_GSRI_BACKPACKS_AUTHOR";
		scope = 2;
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila.p3d";
		displayName = "$STR_GSRI_BACKPACKS_CARRYALL";
		picture = "\fr\gsri\backpacks\ui\icon_gsri_tortila_ca.paa";
		hiddenSelectionsTextures[]={"\fr\gsri\backpacks\Data\gsri_tortila_co.paa"};
		maximumLoad = 320;
		mass = 60;
	};
};
