class CfgPatches
{
	class gsri_flags
	{
		author = "www.gsri.team";
		requiredAddons[] = { "A3_Structures_F_Mil_Flags", "A3_Structures_F" };
		units[] = { "gsri_flags_gsri", "gsri_flags_fr" };
		weapons[] = {};
	};
};


class CfgVehicles
{
	class FlagCarrier;
	class gsri_flags_base : FlagCarrier
	{
		author="www.gsri.team";
		class SimpleObject
		{
			eden=0;
			animate[]=
			{				
				{
					"flag",
					0
				}
			};
			hide[]={};
			verticalOffset=3.977;
			verticalOffsetWorld=0;
			init="''";
		};
		scope=2;
		scopeCurator=2;
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F\Mil\Flags\Data\Mast_mil_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Structures_F\Mil\Flags\Data\Mast_mil.rvmat"
		};
	};
	class gsri_flags_gsri : gsri_flags_base
	{
		editorPreview="\fr\gsri\flags\flag_gsri.jpg";
		displayName="$STR_GSRI_FLAG_GSRI";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\fr\gsri\flags\flag_gsri_CO.paa'";
		};
	};
	class gsri_flags_fr : gsri_flags_base
	{
		editorPreview="\fr\gsri\flags\flag_fr.jpg";
		displayName="$STR_GSRI_FLAG_FR";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\fr\gsri\flags\flag_fr_CO.paa'";
		};
	};
	class gsri_flags_eu : gsri_flags_base
	{
		editorPreview="\fr\gsri\flags\flag_eu.jpg";
		displayName="$STR_GSRI_FLAG_EU";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\fr\gsri\flags\flag_eu_CO.paa'";
		};
	};
};