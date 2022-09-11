class H_Beret_02;
class GSRI_beret : H_Beret_02 {
    author = "$STR_GSRI_AUTHORS_SEENRI";
    displayName = "$STR_GSRI_HEADGEAR_BERET";
    picture = "\fr\gsri\equipment\UI\headgear\beret_ico.paa";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\fr\gsri\equipment\Data\headgear\beret.paa"};
};

class H_watchcap_blk;
class H_watchcap_wht : H_watchcap_blk {
    author = "$STR_GSRI_AUTHORS_SEENRI";
    scope = 2;
    scopeArsenal = 2;
    displayName="$STR_GSRI_HEADGEAR_BEANIE_WHITE";
    hiddenSelections[]={"camo"};
    hiddenSelectionsTextures[]={"\fr\gsri\equipment\Data\headgear\woolhat_white_co.paa"};
    hiddenSelectionsMaterials[]={};
};

class HeadgearItem;
class H_HelmetB;
class H_HelmetSpecB;
class H_HelmetB_light;

class GSRI_helmet : H_HelmetB {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    weaponPoolAvailable = 1;
    displayName = "$STR_GSRI_HEADGEAR_HELMET";
    picture = "\fr\gsri\equipment\UI\headgear\icon_gsri_helmet.paa";
    model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain.p3d";
    hiddenSelections[] = { "camo" };
    hiddenSelectionsTextures[] = { "\fr\gsri\equipment\Data\headgear\helmet_co.paa"};
    hiddenSelectionsMaterials[] = {"\fr\gsri\equipment\Data\headgear\helmet.rvmat"};
    class ItemInfo : HeadgearItem {
        mass = 30;
        uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain.p3d";
        modelSides[] = { TCivilian, TWest };
        hiddenSelections[] = { "camo" };
        class HitpointsProtectionInfo {
            class Head {
                hitPointName = "HitHead";
                armor = 6;
                passThrough = 0.5;
            };
        };
    };
};

class GSRI_helmet_spec : H_HelmetSpecB {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    weaponPoolAvailable = 1;
    displayName = "$STR_GSRI_HEADGEAR_HELMET_ACCESSORIES";
    picture = "\fr\gsri\equipment\UI\headgear\icon_gsri_helmet_accessories.paa";
    model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic.p3d";
    hiddenSelections[] = { "camo" };
    hiddenSelectionsTextures[] = { "\fr\gsri\equipment\Data\headgear\helmet_co.paa"};
    hiddenSelectionsMaterials[] = {"\fr\gsri\equipment\Data\headgear\helmet.rvmat"};
    class ItemInfo : HeadgearItem {
        mass = 30;
        uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic.p3d";
        modelSides[] = { TCivilian, TWest };
        hiddenSelections[] = { "camo" };
        class HitpointsProtectionInfo {
            class Head {
                hitPointName = "HitHead";
                armor = 6;
                passThrough = 0.5;
            };
        };
    };
};

class GSRI_helmet_light : H_HelmetB_light {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    weaponPoolAvailable = 1;
    displayName = "$STR_GSRI_HEADGEAR_HELMET_LIGHT";
    picture = "\fr\gsri\equipment\UI\headgear\icon_gsri_helmet_light.paa";
    model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light.p3d";
    hiddenSelections[] = { "camo" };
    hiddenSelectionsTextures[] = { "\fr\gsri\equipment\Data\headgear\helmet_co.paa"};
    hiddenSelectionsMaterials[] = {"\fr\gsri\equipment\Data\headgear\helmet.rvmat"};
    class ItemInfo : HeadgearItem {
        mass = 30;
        uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light.p3d";
        modelSides[] = { TCivilian, TWest };
        hiddenSelections[] = { "camo" };
        class HitpointsProtectionInfo {
            class Head {
                hitPointName = "HitHead";
                armor = 6;
                passThrough = 0.5;
            };
        };
    };
};

class GSRI_helmet_modular : H_HelmetB {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    weaponPoolAvailable = 1;
    displayName = "$STR_GSRI_HEADGEAR_HELMET_MODULAR";
    picture = "\fr\gsri\equipment\UI\headgear\icon_gsri_helmet_modular.paa";
    model = "\A3\Characters_F_Enoch\Headgear\H_HelmetHBK_01_F.p3d";
    hiddenSelections[] = { "camo" };
    hiddenSelectionsTextures[] = { "\fr\gsri\equipment\Data\headgear\helmet_modular_co.paa"};
    class ItemInfo : HeadgearItem {
        mass = 30;
        uniformModel = "\A3\Characters_F_Enoch\Headgear\H_HelmetHBK_01_F.p3d";
        modelSides[] = { TCivilian, TWest };
        hiddenSelections[] = { "camo" };
        class HitpointsProtectionInfo {
            class Head {
                hitPointName = "HitHead";
                armor = 6;
                passThrough = 0.5;
            };
        };
    };
};

class GSRI_helmet_modular_advanced : GSRI_helmet_modular {
    displayName = "$STR_GSRI_HEADGEAR_HELMET_MODULAR_ACCESSORIES";
    picture = "\fr\gsri\equipment\UI\headgear\icon_gsri_helmet_modular_accessories.paa";
    model = "\A3\Characters_F_Enoch\Headgear\H_HelmetHBK_01_headset_F.p3d";
    class ItemInfo : HeadgearItem {
        mass = 30;
        uniformModel = "\A3\Characters_F_Enoch\Headgear\H_HelmetHBK_01_headset_F.p3d";
        modelSides[] = { TCivilian, TWest };
        hiddenSelections[] = { "camo" };
        class HitpointsProtectionInfo {
            class Head {
                hitPointName = "HitHead";
                armor = 6;
                passThrough = 0.5;
            };
        };
    };
};

class GSRI_helmet_modular_integral : GSRI_helmet_modular {
    displayName = "$STR_GSRI_HEADGEAR_HELMET_MODULAR_INTEGRAL";
    picture = "\fr\gsri\equipment\UI\headgear\icon_gsri_helmet_modular_accessories.paa";
    model = "\A3\Characters_F_Enoch\Headgear\H_HelmetHBK_01_chops_F.p3d";
    class ItemInfo : HeadgearItem {
        mass = 30;
        uniformModel = "\A3\Characters_F_Enoch\Headgear\H_HelmetHBK_01_chops_F.p3d";
        modelSides[] = { TCivilian, TWest };
        hiddenSelections[] = { "camo" };
        class HitpointsProtectionInfo {
            class Head {
                hitPointName = "HitHead";
                armor = 6;
                passThrough = 0.5;
            };
        };
    };
};
