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

    //Notifying the use of legacy items
    //for radio variants, see gsri_radio.pbo
    class KIT_BAG_Alpin_OD : B_AssaultPack_mcamo {
        scope = 1;
        scopeArsenal = 0;
        displayName="$STR_GSRI_backpack_obsolete_displayName";
        class EventHandlers
        {
            init = "systemChat 'Using an old backpack classname, please consider switching to the new one !'";
        };
    };
    class KIT_BAG_od : B_AssaultPack_mcamo {
        scope = 1;
        scopeArsenal = 0;
        displayName="$STR_GSRI_backpack_obsolete_displayName";
        class EventHandlers
        {
            init = "systemChat 'Using an old backpack classname, please consider switching to the new one !'";
        };
    };
    class KIT_BAG_pince_OD : B_AssaultPack_mcamo {
        scope = 1;
        scopeArsenal = 0;
        displayName="$STR_GSRI_backpack_obsolete_displayName";
        class EventHandlers
        {
            init = "systemChat 'Using an old backpack classname, please consider switching to the new one !'";
        };
    };
    class SOG_BAG_ALPIN_od : B_AssaultPack_mcamo {
        scope = 1;
        scopeArsenal = 0;
        displayName="$STR_GSRI_backpack_obsolete_displayName";
        class EventHandlers
        {
            init = "systemChat 'Using an old backpack classname, please consider switching to the new one !'";
        };
    };
    class SOG_BAG_BREACHER_od : B_AssaultPack_mcamo {
        scope = 1;
        scopeArsenal = 0;
        displayName="$STR_GSRI_backpack_obsolete_displayName";
        class EventHandlers
        {
            init = "systemChat 'Using an old backpack classname, please consider switching to the new one !'";
        };
    };
    class SOG_BAG_med_od : B_AssaultPack_mcamo {
        scope = 1;
        scopeArsenal = 0;
        displayName="$STR_GSRI_backpack_obsolete_displayName";
        class EventHandlers
        {
            init = "systemChat 'Using an old backpack classname, please consider switching to the new one !'";
        };
    };
    class SOG_BAG_OD : B_AssaultPack_mcamo {
        scope = 1;
        scopeArsenal = 0;
        displayName="$STR_GSRI_backpack_obsolete_displayName";
        class EventHandlers
        {
            init = "systemChat 'Using an old backpack classname, please consider switching to the new one !'";
        };
    };
    

    //Create new items with fixed values
    //for the radio variant, see gsri_radio.pbo
    class B_Kitbag_Base;
    class GSRI_backpack_A : B_Kitbag_Base {
        scope = 2;
        scopeArsenal = 2;
        author = "$STR_GSRI_backpack_author";
		displayName="$STR_GSRI_backpack_A_displayName";
		picture="COS_back_pack\data\icon\Sac_assausl_od.paa";
        model = "\COS_back_pack\KIT_BAG";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		hiddenSelectionsMaterials[]={};
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
    };

    class B_AssaultPack_Base;
    class GSRI_backpack_B : B_AssaultPack_Base {
        scope = 2;
        scopeArsenal = 2;
        author = "$STR_GSRI_backpack_author";
		displayName="$STR_GSRI_backpack_B_displayName";
		picture="COS_back_pack\data\icon\sac_fs.paa";
		model="\COS_back_pack\SOG_BAG";
		hiddenSelections[]=
		{
			"camo",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\COS_back_pack\data\SOG_BACKPACK\SOG_BAG_OD_co.paa",
			"cos_back_pack\data\assets\assets_strap.co.paa"
		};
    };
    class GSRI_backpack_B_pince : GSRI_backpack_B {
        displayName="$STR_GSRI_backpack_B_pince_displayName";
		model="\COS_back_pack\SOG_BAG_BREACHER";
        ace_logistics_wirecutter_hasWireCutter = 1;
        mass = 45; //20+25 for the wirecutter
        //no change in default maxLoad (160) because the cutter hangs outside the bag
    };
    class GSRI_backpack_B_medic : GSRI_backpack_B {
        displayName="$STR_GSRI_backpack_B_medic_displayName";
		model="\COS_back_pack\SOG_BAG_med";
    };
    class GSRI_backpack_B_alpin : GSRI_backpack_B {
        displayName="$STR_GSRI_backpack_B_alpin_displayName";
		model="\COS_back_pack\SOG_BAG_ALPIN";
    };
};