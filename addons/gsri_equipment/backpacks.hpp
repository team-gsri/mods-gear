class Bag_Base;
class GSRI_AssaultPack : Bag_Base {
    author="$STR_GSRI_AUTHORS_PHILEAS";
    scope = 2;
    model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact.p3d";
    displayName = "$STR_GSRI_BACKPACK_ASSAULTPACK";
    picture = "\fr\gsri\equipment\ui\backpacks\icon_gsri_compact_ca.paa";
    hiddenSelectionsTextures[]={"\fr\gsri\equipment\Data\backpacks\gsri_compact_co.paa"};
    maximumLoad = 160;
    mass = 20;
};
class GSRI_Kitbag : Bag_Base {
    author="$STR_GSRI_AUTHORS_PHILEAS";
    scope = 2;
    model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast.p3d";
    displayName = "$STR_GSRI_BACKPACK_KITBAG";
    picture = "\fr\gsri\equipment\ui\backpacks\icon_gsri_fast_ca.paa";
    hiddenSelectionsTextures[]={"\fr\gsri\equipment\Data\backpacks\gsri_fast_co.paa"};
    maximumLoad = 280;
    mass = 50;
};
class GSRI_RadioBag : Bag_Base {
    author="$STR_GSRI_AUTHORS_PHILEAS";
    scope = 2;
    model = "\A3\supplies_f_enoch\Bags\B_RadioBag_01_F.p3d";
    displayName = "$STR_GSRI_BACKPACK_RADIOBAG";
    picture = "\fr\gsri\equipment\ui\backpacks\icon_gsri_radiobag_ca.paa";
    hiddenSelections[] = {"Camo1"};
    hiddenSelectionsTextures[]={"\fr\gsri\equipment\Data\backpacks\gsri_radiobag_co.paa"};
    maximumLoad = 220;
    mass = 110;
    tf_HasLRradio = 1;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
};
class GSRI_TacticalPack : Bag_Base {
    author="$STR_GSRI_AUTHORS_PHILEAS";
    scope = 2;
    model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Small.p3d";
    displayName = "$STR_GSRI_BACKPACK_TACTICALPACK";
    picture = "\fr\gsri\equipment\ui\backpacks\icon_gsri_small_ca.paa";
    hiddenSelectionsTextures[]={"\fr\gsri\equipment\Data\backpacks\gsri_small_co.paa"};
    maximumLoad = 240;
    mass = 40;
};
class GSRI_Carryall : Bag_Base {
    author="$STR_GSRI_AUTHORS_PHILEAS";
    scope = 2;
    model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila.p3d";
    displayName = "$STR_GSRI_BACKPACK_CARRYALL";
    picture = "\fr\gsri\equipment\ui\backpacks\icon_gsri_tortila_ca.paa";
    hiddenSelectionsTextures[]={"\fr\gsri\equipment\Data\backpacks\gsri_tortila_co.paa"};
    maximumLoad = 320;
    mass = 60;
};
