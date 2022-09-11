class CfgPatches {
  class gsri_lockers {
    author="www.gsri.team";
    requiredVersion=0.1;
    requiredAddons[]={
        "gsri_equipment",
        "A3_Structures_F_Mil_Flags",
        "A3_Structures_F"
    };
    units[]={
        "gsri_flags_gsri",
        "gsri_flags_fr",
        "gsri_flags_eu"
    };
  };
};

class CfgFunctions {
    class GSRI {
        class preslots {
            file="fr\gsri\props\functions\preslots";
            class getRegular {};
            class getTad {};
            class getMedic {};
            class getOperator {};
            class getAbl {};
        };
        class lockers {
            file="fr\gsri\props\functions\lockers";
            class setAsLocker {};
            class setMedicalSkills {};
        };
    };
};

class CfgNotifications {
    class GSRI_locker_setMedicalSkills {
        title = "%1";
        iconPicture = "%2";
        description = "%3";
        duration = 5;
    };
    class GSRI_locker_getPreslot {
        title = "$STR_GSRI_locker_getPreslotTitle";
        iconPicture = "\A3\ui_f\data\igui\cfg\simpleTasks\types\armor_ca.paa";
        description = "%1";
        duration = 5;
    };
};

class CfgVehicles {
	class FlagCarrier;
	class gsri_flags_base : FlagCarrier	{
		author="www.gsri.team";
		class SimpleObject {
			eden=0;
			animate[]= {				
				{"flag", 0}
			};
			hide[]={};
			verticalOffset=3.977;
			verticalOffsetWorld=0;
			init="''";
		};
		scope=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]=	{"\A3\Structures_F\Mil\Flags\Data\Mast_mil_CO.paa"};
		hiddenSelectionsMaterials[]={"\A3\Structures_F\Mil\Flags\Data\Mast_mil.rvmat"};
	};
	class gsri_flags_gsri : gsri_flags_base	{
		scope=2;
		scopeCurator=2;
		editorPreview="fr\gsri\props\UI\flags\flag_gsri.jpg";
		displayName="$STR_GSRI_FLAG_GSRI";
		class EventHandlers	{
			init="(_this select 0) setFlagTexture 'fr\gsri\props\Data\flag_gsri_CO.paa'";
		};
	};
	class gsri_flags_fr : gsri_flags_base {
		scope=2;
		scopeCurator=2;
		editorPreview="fr\gsri\props\UI\flags\flag_fr.jpg";
		displayName="$STR_GSRI_FLAG_FR";
		class EventHandlers	{
			init="(_this select 0) setFlagTexture 'fr\gsri\props\Data\flag_fr_CO.paa'";
		};
	};
	class gsri_flags_eu : gsri_flags_base {
		scope=2;
		scopeCurator=2;
		editorPreview="fr\gsri\props\UI\flags\flag_eu.jpg";
		displayName="$STR_GSRI_FLAG_EU";
		class EventHandlers	{
			init="(_this select 0) setFlagTexture 'fr\gsri\props\Data\flag_eu_CO.paa'";
		};
	};
};
