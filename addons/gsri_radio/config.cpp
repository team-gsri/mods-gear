class CfgPatches {
    class gsri_radio {
        units[]={};
        requiredVersion=0.1;
        requiredAddons[]={"gsri_backpacks", "tfar_core"};
        author="[-GSRI-]Cheitan";
    };
};

class CfgVehicles {
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
        tf_HasLRradio = 1;
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "rt1523g_radio_dialog";
        tf_subtype = "digital_lr";
    };
    class GSRI_backpack_B
    class GSRI_backpack_B_LR : GSRI_backpack_B {
		displayName="$STR_GSRI_backpack_B_LR_displayName";
        maximumLoad = 100; //160-60
        mass = 80; //20+60
        tf_HasLRradio = 1;
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "rt1523g_radio_dialog";
        tf_subtype = "digital_lr";
    };
};