class CfgPatches {
    class gsri_backpacks {
        units[]={};
        requiredVersion=0.1;
        requiredAddons[]={"COS_back_pack", "ace_logistics_wirecutter"};
        author="[-GSRI-]Cheitan";
    };
};

class CfgVehicles {
    class B_AssaultPack_mcamo;

    //Notifying the use of legacy item
    class KIT_BAG_Alpin_OD : B_AssaultPack_mcamo {
        scope = 1;
        scopeArsenal = 1;
        displayName="$STR_GSRI_backpack_obsolete_displayName";
        class EventHandlers
        {
            init = "systemChat 'Using an old backpack classname, please consider switching to the new one !'";
        };
    };
    class KIT_BAG_od : B_AssaultPack_mcamo {
        scope = 1;
        scopeArsenal = 1;
        displayName="$STR_GSRI_backpack_obsolete_displayName";
        class EventHandlers
        {
            init = "systemChat 'Using an old backpack classname, please consider switching to the new one !'";
        };
    };
    class KIT_BAG_pince_OD : B_AssaultPack_mcamo {
        scope = 1;
        scopeArsenal = 1;
        displayName="$STR_GSRI_backpack_obsolete_displayName";
        class EventHandlers
        {
            init = "systemChat 'Using an old backpack classname, please consider switching to the new one !'";
        };
    };
    //for the radio variant, see gsri_radio.pbo

    class SOG_BAG_BREACHER_od : B_AssaultPack_mcamo {
        displayName="$STR_GSRI_backpack_obsolete_displayName";
    };

    //Create new items with fixed values
    class B_Kitbag_Base;
    class GSRI_backpack_A : B_Kitbag_Base {
        scope = 2;
        scopeArsenal = 2;
        author = "[-GSRI-]Cheitan";
		displayName="$STR_GSRI_backpack_A_displayName";
		picture="COS_back_pack\data\icon\Sac_assausl_od.paa";
        model = "\COS_back_pack\KIT_BAG";
    };
    class GSRI_backpack_A_pince : GSRI_backpack_A {
		displayName="$STR_GSRI_backpack_A_pince_displayName";
        model = "\COS_back_pack\KIT_BAG_PINCE";
        mass = 75; //50 + 25 for the wirecutter
        //no change in default maxLoad (280) because the cutter hangs outside the bag
        ace_logistics_wirecutter_hasWireCutter = 1;
    };
    class GSRI_backpack_A_alpin : GSRI_backpack_A {
		displayName="$STR_GSRI_backpack_A_alpin_displayName";
        model = "\COS_back_pack\KIT_BAG_Alpin";
        mass = 50;
    };
    //for the radio variant, see gsri_radio.pbo
};