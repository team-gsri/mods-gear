class CfgPatches {
    class gsri_radio {
        units[]={};
        requiredVersion=0.1;
        requiredAddons[]={"COS_back_pack", "tfar_core"};
        author="[-GSRI-]Cheitan";
    };
};

class CfgVehicles {
    // Inheriting from parent
    class B_AssaultPack_mcamo;

    // Overriding legacy items and hiding them for backward compatibility
    class C : B_AssaultPack_mcamo {
        scope = 1;
        scopeArsenal = 0;
        tf_HasLRradio = 1;
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "rt1523g_radio_dialog";
        tf_subtype = "digital_lr";
        displayName = "OBSOLETE, SWITCH TO NEW ITEM";
        class EventHandlers
        {
            init = "['Using an old backpack classname, please consider switching to the new one.', 'Obsolete backpack', false, 'Understood !'] spawn BIS_fnc_guiMessage";
        };
    };
    class KIT_BAG_R_OD : B_AssaultPack_mcamo {
        scope = 1;
        scopeArsenal = 0;
        tf_HasLRradio = 1;
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "rt1523g_radio_dialog";
        tf_subtype = "digital_lr";
        displayName = "OBSOLETE, SWITCH TO NEW ITEM";
        class EventHandlers
        {
            init = "['Using an old backpack classname, please consider switching to the new one.', 'Obsolete backpack', false, 'Understood !'] spawn BIS_fnc_guiMessage";
        };
    };

    // Adding new items with proper classname
    class GSRI_backpack_A_LR : KIT_BAG_R_OD {
        scope = 2;
        scopeArsenal = 2;
        author = "[-GSRI-]Cheitan";
		displayName="[-GSRI-] Sac 5.11 - Coms (OD)";
        class EventHandlers
        {
            init = "";
        };
    };
    class GSRI_backpack_B_LR : C {
        scope = 2;
        scopeArsenal = 2;
        author = "[-GSRI-]Cheitan";
		displayName="[-GSRI-] Sac FS - Coms (OD)";
        class EventHandlers
        {
            init = "";
        };
    };
};