class CfgPatches
{
	class GSRI_UNIFORMS_Config
	{
		author="[-GSRI-] PhileasLX";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F_EXP", 
			"A3_Characters_F"
		};
	};
};
class CfgVehicleClasses
{
	class GSRI_UNIFORMS
	{
		displayName="GSRI Uniforms";
	};
};
class cfgVehicles
{
	class B_Soldier_F;

	////////////////////
	////  UNIFORMS  ////
	////////////////////

	class GSRI_uniform_U: B_Soldier_F
	{
		faction="BLU_F";
		modelsides[]={3,2,1,0};
		displayName="[-GSRI-] Uniform";
		model="\A3\Characters_F\BLUFOR\B_Soldier_01.p3d";
		uniformClass="GSRI_uniform";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"gsri_uniforms\Data\gsri_uniform_co.paa"};
		hiddenSelectionsMaterials[] = {"gsri_uniforms\Data\gsri_uniform.rvmat"};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class GSRI_uniform_raised_collar_U: B_Soldier_F
	{
		faction="BLU_F";
		modelsides[]={3,2,1,0};
		displayName="[-GSRI-] Uniform (Raised Collar)";
		model="\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
		uniformClass="GSRI_uniform_raised_collar";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"gsri_uniforms\Data\gsri_uniform_co.paa"};
		hiddenSelectionsMaterials[] = {"gsri_uniforms\Data\gsri_uniform.rvmat"};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class GSRI_uniform_rolled_U: B_Soldier_F
	{
		faction="BLU_F";
		modelsides[]={3,2,1,0};
		displayName="[-GSRI-] Uniform (Rolled)";
		model="\A3\Characters_F\BLUFOR\B_Soldier_03.p3d";
		uniformClass="GSRI_uniform_rolled";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"gsri_uniforms\Data\gsri_uniform_co.paa"};
		hiddenSelectionsMaterials[] = {"gsri_uniforms\Data\gsri_uniform.rvmat"};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};

	////////////////////
	////   SHIRTS   ////
	////////////////////

	class GSRI_shirt_green_U: B_Soldier_F
	{
		faction="BLU_F";
		modelsides[]={3,2,1,0};
		displayName="[-GSRI-] Shirt Green/Camo";
		model="\A3\Characters_F\BLUFOR\B_Soldier_02.p3d";
		uniformClass="GSRI_shirt_green";
		hiddenSelections[] = {"camo","camo2","insignia"};
		hiddenSelectionsTextures[] = 
			{
				"gsri_uniforms\Data\gsri_uniform_co.paa",
				"gsri_uniforms\Data\gsri_shirt_green_co.paa"
			};
		hiddenSelectionsMaterials[] = 
			{
				"gsri_uniforms\Data\gsri_uniform.rvmat",
				"a3\characters_f\common\data\basicbody.rvmat"
			};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class GSRI_shirt_camo_U: B_Soldier_F
	{
		faction="BLU_F";
		modelsides[]={3,2,1,0};
		displayName="[-GSRI-] Shirt Camo/Green";
		model="\A3\Characters_F\BLUFOR\B_Soldier_02.p3d";
		uniformClass="GSRI_shirt_camo";
		hiddenSelections[] = {"camo","camo2","insignia"};
		hiddenSelectionsTextures[] = 
			{
				"gsri_uniforms\Data\gsri_uniform_co.paa",
				"gsri_uniforms\Data\gsri_shirt_camo_co.paa"
			};
		hiddenSelectionsMaterials[] = 
			{
				"gsri_uniforms\Data\gsri_uniform.rvmat",
				"a3\characters_f\common\data\basicbody.rvmat"
			};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
};	
class cfgWeapons
{
	class ItemCore;
	class UniformItem;
	class Uniform_Base: ItemCore
	{
		class ItemInfo;
	};

	////////////////////
	////  UNIFORMS  ////
	////////////////////
	
	class GSRI_uniform: Uniform_Base
	{
		author="GSRI";
		scope=2;
		displayName="[-GSRI-] Uniform";
		picture="\gsri_uniforms\UI\icon_gsri_uniform.paa";
		modelsides[]={3,2,1,0};
		model="\A3\Characters_F\BLUFOR\B_Soldier_01.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="GSRI_uniform_U";
			containerClass="Supply50";
			mass=25;
		};
	};
	class GSRI_uniform_raised_collar: Uniform_Base
	{
		author="GSRI";
		scope=2;
		displayName="[-GSRI-] Uniform (Raised Collar)";
		picture="\gsri_uniforms\UI\icon_gsri_uniform.paa";
		modelsides[]={3,2,1,0};
		model="\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: UniformItem
		{
			uniformClass="GSRI_uniform_raised_collar_U";
			containerClass="Supply50";
			mass=25;
		};
	};
	class GSRI_uniform_rolled: Uniform_Base
	{
		author="GSRI";
		scope=2;
		displayName="[-GSRI-] Uniform (Rolled)";
		picture="\gsri_uniforms\UI\icon_gsri_uniform.paa";
		modelsides[]={3,2,1,0};
		model="\A3\Characters_F\BLUFOR\B_Soldier_03.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="GSRI_uniform_rolled_U";
			containerClass="Supply50";
			mass=25;
		};
	};

	////////////////////
	////   SHIRTS   ////
	////////////////////

	class GSRI_shirt_green: Uniform_Base
	{
		author="GSRI";
		scope=2;
		displayName="[-GSRI-] Shirt Green/Camo";
		picture="\gsri_uniforms\UI\icon_gsri_shirt.paa";
		modelsides[]={3,2,1,0};
		model="\A3\Characters_F\BLUFOR\B_Soldier_02.p3d";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="GSRI_shirt_green_U";
			containerClass="Supply50";
			mass=25;
		};
	};
	class GSRI_shirt_camo: Uniform_Base
	{
		author="GSRI";
		scope=2;
		displayName="[-GSRI-] Shirt Camo/Green";
		picture="\gsri_uniforms\UI\icon_gsri_shirt.paa";
		modelsides[]={3,2,1,0};
		model="\A3\Characters_F\BLUFOR\B_Soldier_02.p3d";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="GSRI_shirt_camo_U";
			containerClass="Supply50";
			mass=25;
		};
	};
};