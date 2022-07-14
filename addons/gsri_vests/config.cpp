class CfgPatches {
	class gsri_vests	{
		author="$STR_GSRI_VESTS_AUTHOR";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[] = {
			"A3_Characters_F_Enoch",
			"A3_Characters_F_Beta", 
			"A3_Characters_F"
		};
	};
};

class CfgWeapons
{
	class ItemCore;
	class Vest_Camo_Base : ItemCore
	{
		class ItemInfo;
	};
	class GSRI_vest_carrier_lite : Vest_Camo_Base
	{
		scope = 2;
		displayName = "$STR_GSRI_VESTS_CARRIER_LITE";
		picture = "\fr\gsri\vests\UI\icon_gsri_vest_carrier_lite_ca.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
		hiddenSelectionsTextures[] = {"\fr\gsri\vests\Data\gsri_vest_carrier_co.paa"};
		descriptionShort="$STR_A3_SP_AL_IV";
		class ItemInfo : ItemInfo
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
			containerClass="Supply200";
			mass=100;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=25;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=25;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=25;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};

	class GSRI_vest_carrier : Vest_Camo_Base
	{
		scope = 2;
		displayName = "$STR_GSRI_VESTS_CARRIER";
		picture = "\fr\gsri\vests\UI\icon_gsri_vest_carrier_ca.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		hiddenSelectionsTextures[] = {"\fr\gsri\vests\Data\gsri_vest_carrier_co.paa"};
		descriptionShort="$STR_A3_SP_AL_IV";
		class ItemInfo : ItemInfo
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
			containerClass="Supply200";
			mass=100;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=25;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=25;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=25;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};

	class GSRI_vest_modular : Vest_Camo_Base
	{
		scope = 2;
		displayName = "$STR_GSRI_VESTS_MODULAR";
		picture = "\fr\gsri\vests\UI\icon_gsri_vest_modular_ca.paa";
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
		hiddenSelectionsTextures[] = {"\fr\gsri\vests\Data\gsri_vest_modular_co.paa"};
		descriptionShort="$STR_A3_SP_AL_IV";
		class ItemInfo : ItemInfo
		{
			uniformModel = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
			containerClass="Supply200";
			mass=100;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=25;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=25;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=25;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};

	class GSRI_vest_ga_carrier : Vest_Camo_Base
	{
		scope = 2;
		displayName = "$STR_GSRI_VESTS_GA_CARRIER";
		picture = "\fr\gsri\vests\UI\icon_gsri_vest_ga_carrier_ca.paa";
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
		hiddenSelectionsTextures[] = {"\fr\gsri\vests\Data\gsri_vest_ga_carrier_co.paa"};
		descriptionShort="$STR_A3_SP_AL_IV";
		class ItemInfo : ItemInfo
		{
			uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
			containerClass="Supply200";
			mass=120;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=25;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=25;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=25;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitBody";
					armor=25;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};

	class GSRI_vest_ga_carrier_lite : Vest_Camo_Base
	{
		scope = 2;
		displayName = "$STR_GSRI_VESTS_GA_CARRIER_LITE";
		picture = "\fr\gsri\vests\UI\icon_gsri_vest_ga_carrier_lite_ca.paa";
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
		hiddenSelectionsTextures[] = {"\fr\gsri\vests\Data\gsri_vest_ga_carrier_co.paa"};
		descriptionShort="$STR_A3_SP_AL_IV";
		class ItemInfo : ItemInfo
		{
			uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
			containerClass="Supply200";
			mass=100;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=25;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=25;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=25;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
};

