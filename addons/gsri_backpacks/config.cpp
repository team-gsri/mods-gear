class CfgPatches {
	class gsri_backpacks	{
		author="$STR_GSRI_BACKPACKS_AUTHOR";
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

class CfgVehicles
{
	class Bag_Base;
	class GSRI_AssaultPack : Bag_Base
	{
		author="$STR_GSRI_BACKPACKS_AUTHOR";
		scope = 2;
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact.p3d";
		displayName = "$STR_GSRI_BACKPACKS_ASSAULTPACK";
		picture = "\fr\gsri\backpacks\ui\icon_gsri_compact_ca.paa";
		hiddenSelectionsTextures[]={"\fr\gsri\backpacks\Data\gsri_compact_co.paa"};
		maximumLoad = 160;
		mass = 20;
	};
	class GSRI_Kitbag : Bag_Base
	{
		author="$STR_GSRI_BACKPACKS_AUTHOR";
		scope = 2;
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast.p3d";
		displayName = "$STR_GSRI_BACKPACKS_KITBAG";
		picture = "\fr\gsri\backpacks\ui\icon_gsri_fast_ca.paa";
		hiddenSelectionsTextures[]={"\fr\gsri\backpacks\Data\gsri_fast_co.paa"};
		maximumLoad = 280;
		mass = 50;
	};
	class GSRI_RadioBag : Bag_Base
	{
		author="$STR_GSRI_BACKPACKS_AUTHOR";
		scope = 2;
		model = "\A3\supplies_f_enoch\Bags\B_RadioBag_01_F.p3d";
		displayName = "$STR_GSRI_BACKPACKS_RADIOBAG";
		picture = "\fr\gsri\backpacks\ui\icon_gsri_radiobag_ca.paa";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[]={"\fr\gsri\backpacks\Data\gsri_radiobag_co.paa"};
		maximumLoad = 220;
		mass = 110;
		tf_HasLRradio = 1;
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "rt1523g_radio_dialog";
        tf_subtype = "digital_lr";
	};
	class GSRI_TacticalPack : Bag_Base
	{
		author="$STR_GSRI_BACKPACKS_AUTHOR";
		scope = 2;
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Small.p3d";
		displayName = "$STR_GSRI_BACKPACKS_TACTICALPACK";
		picture = "\fr\gsri\backpacks\ui\icon_gsri_small_ca.paa";
		hiddenSelectionsTextures[]={"\fr\gsri\backpacks\Data\gsri_small_co.paa"};
		maximumLoad = 240;
		mass = 40;
	};
	class GSRI_Carryall : Bag_Base
	{
		author="$STR_GSRI_BACKPACKS_AUTHOR";
		scope = 2;
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila.p3d";
		displayName = "$STR_GSRI_BACKPACKS_CARRYALL";
		picture = "\fr\gsri\backpacks\ui\icon_gsri_tortila_ca.paa";
		hiddenSelectionsTextures[]={"\fr\gsri\backpacks\Data\gsri_tortila_co.paa"};
		maximumLoad = 320;
		mass = 60;
	};

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
};
