class CfgPatches {
  class gsri_lockers {
    units[]={};
    requiredVersion=0.1;
    requiredAddons[]={"gsri_uniforms", "gsri_vests", "gsri_headgear", "gsri_backpacks"};
    author="www.gsri.team";
  };
};

class CfgFunctions {
    class GSRI {
        class preslots {
            file="fr\gsri\lockers\functions\preslots";
            class getRegular {};
            class getTad {};
            class getMedic {};
            class getOperator {};
            class getAbl {};
        };
        class lockers {
            file="fr\gsri\lockers\functions\lockers";
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
