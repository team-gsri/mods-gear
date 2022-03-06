class CfgPatches {
	class gsri_uniforms	{
		author="[-GSRI-] PhileasLX";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[] = {
			"A3_Characters_F_EXP", 
			"A3_Characters_F"
		};
	};
};

class CfgVehicles {
	class B_Soldier_F;
	class GSRI_uniform_U: B_Soldier_F {
		faction="BLU_F";
		modelsides[]={3,2,1,0};
		displayName="$STR_GSRI_UNIFORM_BASE";
		model="\A3\Characters_F\BLUFOR\B_Soldier_01.p3d";
		uniformClass="GSRI_uniform";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\fr\gsri\uniforms\Data\gsri_uniform_co.paa"};
		hiddenSelectionsMaterials[] = {"\fr\gsri\uniforms\Data\gsri_uniform.rvmat"};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		items[] = {};
		respawnItems[] = {};
	};
	class GSRI_uniform_raised_collar_U: GSRI_uniform_U {
		modelsides[]={3,2,1,0};
		displayName="$STR_GSRI_UNIFORM_RAISED_COLLAR";
		model="\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
		uniformClass="GSRI_uniform_raised_collar";
	};
	class GSRI_uniform_rolled_U: GSRI_uniform_U {
		displayName="$STR_GSRI_UNIFORM_ROLLED_SLEEVES";
		model="\A3\Characters_F\BLUFOR\B_Soldier_03.p3d";
		uniformClass="GSRI_uniform_rolled";
	};

	class GSRI_shirt_green_U: GSRI_uniform_U {
		displayName="$STR_GSRI_SHIRT_GREEN";
		model="\A3\Characters_F\BLUFOR\B_Soldier_02.p3d";
		uniformClass="GSRI_shirt_green";
		hiddenSelections[] = {"camo","camo2","insignia"};
		hiddenSelectionsTextures[] = {
			"\fr\gsri\uniforms\Data\gsri_uniform_co.paa",
			"\fr\gsri\uniforms\Data\gsri_shirt_green_co.paa"
		};
		hiddenSelectionsMaterials[] = {
			"\fr\gsri\uniforms\Data\gsri_uniform.rvmat",
			"a3\characters_f\common\data\basicbody.rvmat"
		};
	};
	class GSRI_shirt_camo_U: GSRI_uniform_U {
		displayName="$STR_GSRI_SHIRT_CAMO";
		model="\A3\Characters_F\BLUFOR\B_Soldier_02.p3d";
		uniformClass="GSRI_shirt_camo";
		hiddenSelections[] = {"camo","camo2","insignia"};
		hiddenSelectionsTextures[] = {
			"\fr\gsri\uniforms\Data\gsri_uniform_co.paa",
			"\fr\gsri\uniforms\Data\gsri_shirt_camo_co.paa"
		};
		hiddenSelectionsMaterials[] = {
			"\fr\gsri\uniforms\Data\gsri_uniform.rvmat",
			"a3\characters_f\common\data\basicbody.rvmat"
		};
	};
};	
class cfgWeapons {
	class ItemCore;
	class UniformItem;
	class Uniform_Base: ItemCore {
		class ItemInfo;
	};

	class GSRI_uniform: Uniform_Base {
		author="GSRI";
		scope=2;
		displayName="$STR_GSRI_UNIFORM_BASE";
		picture="\fr\gsri\uniforms\UI\icon_gsri_uniform.paa";
		modelsides[]={3,2,1,0};
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\fr\gsri\uniforms\Data\gsri_uniform_co.paa"};
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformClass="GSRI_uniform_U";
			containerClass="Supply50";
			mass=25;
		};
	};
	class GSRI_uniform_raised_collar: GSRI_uniform {
		displayName="$STR_GSRI_UNIFORM_RAISED_COLLAR";
		picture="\fr\gsri\uniforms\UI\icon_gsri_uniform.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformClass="GSRI_uniform_raised_collar_U";
			containerClass="Supply50";
			mass=25;
		};
	};
	class GSRI_uniform_rolled: GSRI_uniform {
		displayName="$STR_GSRI_UNIFORM_ROLLED_SLEEVES";
		picture="\fr\gsri\uniforms\UI\icon_gsri_uniform.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformClass="GSRI_uniform_rolled_U";
			containerClass="Supply50";
			mass=25;
		};
	};

	class GSRI_shirt_green: GSRI_uniform {
		displayName="$STR_GSRI_SHIRT_GREEN";
		picture="\fr\gsri\uniforms\UI\icon_gsri_shirt.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo","camo2"};
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformClass="GSRI_shirt_green_U";
			containerClass="Supply50";
			mass=25;
		};
	};
	class GSRI_shirt_camo: GSRI_uniform {
		displayName="$STR_GSRI_SHIRT_CAMO";
		picture="\fr\gsri\uniforms\UI\icon_gsri_shirt.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo","camo2"};
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformClass="GSRI_shirt_camo_U";
			containerClass="Supply50";
			mass=25;
		};
	};
};
