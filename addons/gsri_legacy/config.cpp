class CfgPatches {
    class gsri_legacy {
        author="Legacy, to be removed!";
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[] = {
            "A3_Weapons_F",
            "A3_Supplies_F_Enoch",
            "tfar_core",
            "COS_back_pack", 
            "ace_logistics_wirecutter"
        };
    };
};

class CfgVehicles {
    class Bag_Base;
    class B_AssaultPack_mcamo;

    //Notifying the use of legacy items
    //for radio variants, see gsri_radio.pbo
    class KIT_BAG_Alpin_OD : B_AssaultPack_mcamo {
        scope = 1;
        scopeArsenal = 0;
        displayName="$STR_GSRI_backpack_obsolete_displayName";
        class EventHandlers {
            init="systemChat 'Using an old backpack classname, please consider switching to the new one !'";
        };
    };
    class KIT_BAG_od : B_AssaultPack_mcamo {
        scope = 1;
        scopeArsenal = 0;
        displayName="$STR_GSRI_backpack_obsolete_displayName";
        class EventHandlers {
            init="systemChat 'Using an old backpack classname, please consider switching to the new one !'";
        };
    };
    class KIT_BAG_pince_OD : B_AssaultPack_mcamo {
        scope = 1;
        scopeArsenal = 0;
        displayName="$STR_GSRI_backpack_obsolete_displayName";
        class EventHandlers {
            init="systemChat 'Using an old backpack classname, please consider switching to the new one !'";
        };
    };
    class SOG_BAG_ALPIN_od : B_AssaultPack_mcamo {
        scope = 1;
        scopeArsenal = 0;
        displayName="$STR_GSRI_backpack_obsolete_displayName";
        class EventHandlers {
            init="systemChat 'Using an old backpack classname, please consider switching to the new one !'";
        };
    };
    class SOG_BAG_BREACHER_od : B_AssaultPack_mcamo {
        scope = 1;
        scopeArsenal = 0;
        displayName="$STR_GSRI_backpack_obsolete_displayName";
        class EventHandlers {
            init="systemChat 'Using an old backpack classname, please consider switching to the new one !'";
        };
    };
    class SOG_BAG_med_od : B_AssaultPack_mcamo {
        scope = 1;
        scopeArsenal = 0;
        displayName="$STR_GSRI_backpack_obsolete_displayName";
        class EventHandlers {
            init="systemChat 'Using an old backpack classname, please consider switching to the new one !'";
        };
    };
    class SOG_BAG_OD : B_AssaultPack_mcamo {
        scope = 1;
        scopeArsenal = 0;
        displayName="$STR_GSRI_backpack_obsolete_displayName";
        class EventHandlers {
            init="systemChat 'Using an old backpack classname, please consider switching to the new one !'";
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
        hiddenSelections[]={"camo","camo3"};
        hiddenSelectionsTextures[]={
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

    class B_AssaultPack_mcamo;
    // Overriding legacy items and hiding them for backward compatibility
    class C : B_AssaultPack_mcamo {
        scope = 1;
        scopeArsenal = 0;
        displayName = "$STR_GSRI_radio_obsolete_displayName";
        class EventHandlers
        {
            init = "systemChat 'Using an old backpack classname, please consider switching to the new one !'";
        };
    };
    class KIT_BAG_R_OD : B_AssaultPack_mcamo {
        scope = 1;
        scopeArsenal = 0;
        displayName = "$STR_GSRI_radio_obsolete_displayName";
        class EventHandlers
        {
            init = "systemChat 'Using an old backpack classname, please consider switching to the new one !'";
        };
    };

    // Adding new items with proper classname and inheritance
    class GSRI_backpack_A;
    class GSRI_backpack_A_LR : GSRI_backpack_A {
        displayName="$STR_GSRI_backpack_A_LR_displayName";
        maximumLoad = 220; //280-60
        mass = 110; //50+60
        model="\COS_back_pack\KIT_BAG_R";
        tf_HasLRradio = 1;
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "rt1523g_radio_dialog";
        tf_subtype = "digital_lr";
    };
    class GSRI_backpack_B;
    class GSRI_backpack_B_LR : GSRI_backpack_B {
        displayName="$STR_GSRI_backpack_B_LR_displayName";
        maximumLoad = 100; //160-60
        mass = 80; //20+60
        model="\COS_back_pack\SOG_BAG_recon";
        tf_HasLRradio = 1;
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "rt1523g_radio_dialog";
        tf_subtype = "digital_lr";
    };
};

class CfgWeapons {
    // Hiding the legacy beret
    class ItemCore;
    class gsri_le_beret : ItemCore {
        author = "$STR_GSRI_AUTHOR_SEENRI";
        scope = 1;
        scopeArsenal = 0;
        displayName = "OBSOLETE";
        descriptionShort = "OBSOLETE, WILL BE REMOVED, USE NEW ITEM";
    };
    class Vest_NoCamo_Base;
    class JPC_1_OD : Vest_NoCamo_Base {
        descriptionShort="$STR_A3_SP_AL_IV";
    };
    class JPC_3_OD : Vest_NoCamo_Base {
        descriptionShort="$STR_A3_SP_AL_IV";
    };
    class mbss_TL_od : Vest_NoCamo_Base {
        descriptionShort="$STR_A3_SP_AL_IV";
    };
    class mbss_com_od : Vest_NoCamo_Base {
        descriptionShort="$STR_A3_SP_AL_IV";
    };
    class mbss_SCOUT_od : Vest_NoCamo_Base {
        descriptionShort="$STR_A3_SP_AL_IV";
    };
    class mbss_RECON_od : Vest_NoCamo_Base {
        descriptionShort="$STR_A3_SP_AL_IV";
    };
    class 6094_com_OD : Vest_NoCamo_Base {
        descriptionShort="$STR_A3_SP_AL_IV";
    };
    class 6094_SCOUT_od : Vest_NoCamo_Base {
        descriptionShort="$STR_A3_SP_AL_IV";
    };
    class 6094_RECON_od : Vest_NoCamo_Base {
        descriptionShort="$STR_A3_SP_AL_IV";
    };
    class 6094_MEDIC_od : Vest_NoCamo_Base {
        descriptionShort="$STR_A3_SP_AL_IV";
    };
    class 6094_HEAVY_od : Vest_NoCamo_Base {
        descriptionShort="$STR_A3_SP_AL_IV";
    };
    class 6094_JTAC : Vest_NoCamo_Base {
        descriptionShort="$STR_A3_SP_AL_IV";
    };
};   
