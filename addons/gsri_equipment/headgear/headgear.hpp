class H_Beret_EAF_01_F;
class GSRI_beret : H_Beret_EAF_01_F {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    displayName = "$STR_GSRI_HEADGEAR_BERET";
    picture = "\fr\gsri\equipment\headgear\UI\icon_gsri_beret.paa";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\fr\gsri\equipment\headgear\Data\gsri_beret_co.paa"};
};
class GSRI_beret_gcap : H_Beret_EAF_01_F {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    displayName = "$STR_GCAP_HEADGEAR_BERET";
    picture = "\fr\gsri\equipment\headgear\UI\icon_gcap_beret.paa";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\fr\gsri\equipment\headgear\Data\gcap_beret_co.paa"};
};

class H_watchcap_blk;
class H_watchcap_wht : H_watchcap_blk {
    author = "$STR_GSRI_AUTHORS_SEENRI";
    scope = 2;
    scopeArsenal = 2;
    displayName="$STR_GSRI_HEADGEAR_BEANIE_WHITE";
    hiddenSelections[]={"camo"};
    hiddenSelectionsTextures[]={"\fr\gsri\equipment\headgear\Data\woolhat_white_co.paa"};
    hiddenSelectionsMaterials[]={};
};

class HeadgearItem;
class H_HelmetB;
class H_HelmetSpecB;
class H_HelmetHBK;
class H_HelmetB_light;

class GSRI_helmet : H_HelmetB {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    weaponPoolAvailable = 1;
    displayName = "$STR_GSRI_HEADGEAR_HELMET";
    descriptionShort="$STR_A3_SP_AL_II";
    picture = "\fr\gsri\equipment\headgear\UI\icon_gsri_helmet.paa";
    model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain.p3d";
    hiddenSelections[] = { "camo" };
    hiddenSelectionsTextures[] = { "\fr\gsri\equipment\headgear\Data\helmet_co.paa"};
    hiddenSelectionsMaterials[] = {"\fr\gsri\equipment\headgear\Data\helmet.rvmat"};
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
    descriptionShort="$STR_A3_SP_AL_II";
    picture = "\fr\gsri\equipment\headgear\UI\icon_gsri_helmet_accessories.paa";
    model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic.p3d";
    hiddenSelections[] = { "camo" };
    hiddenSelectionsTextures[] = { "\fr\gsri\equipment\headgear\Data\helmet_co.paa"};
    hiddenSelectionsMaterials[] = {"\fr\gsri\equipment\headgear\Data\helmet.rvmat"};
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
    descriptionShort="$STR_A3_SP_AL_II";
    picture = "\fr\gsri\equipment\headgear\UI\icon_gsri_helmet_light.paa";
    model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light.p3d";
    hiddenSelections[] = { "camo" };
    hiddenSelectionsTextures[] = { "\fr\gsri\equipment\headgear\Data\helmet_co.paa"};
    hiddenSelectionsMaterials[] = {"\fr\gsri\equipment\headgear\Data\helmet.rvmat"};
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
    descriptionShort="$STR_A3_SP_AL_II";
    picture = "\fr\gsri\equipment\headgear\UI\icon_gsri_helmet_modular.paa";
    model = "\A3\Characters_F_Enoch\Headgear\H_HelmetHBK_01_F.p3d";
    hiddenSelections[] = { "camo" };
    hiddenSelectionsTextures[] = { "\fr\gsri\equipment\headgear\Data\helmet_modular_co.paa"};
    hiddenSelectionsMaterials[] = {"\fr\gsri\equipment\headgear\Data\helmet_modular.rvmat"};
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

class GSRI_helmet_modular_advanced : H_HelmetSpecB {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    displayName = "$STR_GSRI_HEADGEAR_HELMET_MODULAR_ACCESSORIES";
    descriptionShort="$STR_A3_SP_AL_II";
    picture = "\fr\gsri\equipment\headgear\UI\icon_gsri_helmet_modular_accessories.paa";
    model = "\A3\Characters_F_Enoch\Headgear\H_HelmetHBK_01_headset_F.p3d";
    hiddenSelections[] = { "camo" };
    hiddenSelectionsTextures[] = { "\fr\gsri\equipment\headgear\Data\helmet_modular_co.paa"};
    hiddenSelectionsMaterials[] = {"\fr\gsri\equipment\headgear\Data\helmet_modular.rvmat"};
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

class GSRI_helmet_modular_halfintegral : GSRI_helmet_modular_advanced {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    displayName = "$STR_GSRI_HEADGEAR_HELMET_MODULAR_HALFINTEGRAL";
    descriptionShort="$STR_A3_SP_AL_II";
    picture = "\fr\gsri\equipment\headgear\UI\icon_gsri_helmet_modular_accessories.paa";
    model = "\A3\Characters_F_Enoch\Headgear\H_HelmetHBK_01_ear_F.p3d";
    class ItemInfo : HeadgearItem {
        mass = 30;
        uniformModel = "\A3\Characters_F_Enoch\Headgear\H_HelmetHBK_01_ear_F.p3d";
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

class GSRI_helmet_modular_integral : GSRI_helmet_modular_advanced {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    displayName = "$STR_GSRI_HEADGEAR_HELMET_MODULAR_INTEGRAL";
    descriptionShort="$STR_A3_SP_AL_II";
    picture = "\fr\gsri\equipment\headgear\UI\icon_gsri_helmet_modular_accessories.paa";
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

class GSRI_helmet_bme : H_HelmetB {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    weaponPoolAvailable = 1;
    displayName = "$STR_GSRI_HEADGEAR_HELMET_BME";
    picture = "\fr\gsri\equipment\headgear\UI\icon_gsri_helmet_bme.paa";
    model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain.p3d";
    hiddenSelections[] = { "camo" };
    hiddenSelectionsTextures[] = { "\fr\gsri\equipment\headgear\Data\helmet_bme_co.paa"};
    hiddenSelectionsMaterials[] = {"\fr\gsri\equipment\headgear\Data\helmet.rvmat"};
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

class GSRI_helmet_bme_spec : H_HelmetSpecB {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    weaponPoolAvailable = 1;
    displayName = "$STR_GSRI_HEADGEAR_HELMET_BME_ACCESSORIES";
    picture = "\fr\gsri\equipment\headgear\UI\icon_gsri_helmet_bme_accessories.paa";
    model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic.p3d";
    hiddenSelections[] = { "camo" };
    hiddenSelectionsTextures[] = { "\fr\gsri\equipment\headgear\Data\helmet_bme_co.paa"};
    hiddenSelectionsMaterials[] = {"\fr\gsri\equipment\headgear\Data\helmet.rvmat"};
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

class GSRI_helmet_bme_light : H_HelmetB_light {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    weaponPoolAvailable = 1;
    displayName = "$STR_GSRI_HEADGEAR_HELMET_BME_LIGHT";
    picture = "\fr\gsri\equipment\headgear\UI\icon_gsri_helmet_bme_light.paa";
    model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light.p3d";
    hiddenSelections[] = { "camo" };
    hiddenSelectionsTextures[] = { "\fr\gsri\equipment\headgear\Data\helmet_bme_co.paa"};
    hiddenSelectionsMaterials[] = {"\fr\gsri\equipment\headgear\Data\helmet.rvmat"};
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

class GSRI_helmet_modular_bme : H_HelmetB {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    weaponPoolAvailable = 1;
    displayName = "$STR_GSRI_HEADGEAR_HELMET_MODULAR_BME";
    descriptionShort="$STR_A3_SP_AL_II";
    picture = "\fr\gsri\equipment\headgear\UI\icon_gsri_helmet_modular_bme_accessories.paa";
    model = "\A3\Characters_F_Enoch\Headgear\H_HelmetHBK_01_F.p3d";
    hiddenSelections[] = { "camo" };
    hiddenSelectionsTextures[] = { "\fr\gsri\equipment\headgear\Data\helmet_modular_bme_co.paa"};
    hiddenSelectionsMaterials[] = {"\fr\gsri\equipment\headgear\Data\helmet_modular.rvmat"};
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

class GSRI_helmet_modular_bme_advanced : H_HelmetSpecB {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    displayName = "$STR_GSRI_HEADGEAR_HELMET_MODULAR_BME_ACCESSORIES";
    descriptionShort="$STR_A3_SP_AL_II";
    picture = "\fr\gsri\equipment\headgear\UI\icon_gsri_helmet_modular_bme_accessories.paa";
    model = "\A3\Characters_F_Enoch\Headgear\H_HelmetHBK_01_headset_F.p3d";
    hiddenSelections[] = { "camo" };
    hiddenSelectionsTextures[] = { "\fr\gsri\equipment\headgear\Data\helmet_modular_bme_co.paa"};
    hiddenSelectionsMaterials[] = {"\fr\gsri\equipment\headgear\Data\helmet_modular.rvmat"};
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

class GSRI_helmet_modular_bme_halfintegral : GSRI_helmet_modular_bme_advanced {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    displayName = "$STR_GSRI_HEADGEAR_HELMET_MODULAR_BME_HALFINTEGRAL";
    descriptionShort="$STR_A3_SP_AL_II";
    picture = "\fr\gsri\equipment\headgear\UI\icon_gsri_helmet_modular_bme_accessories.paa";
    model = "\A3\Characters_F_Enoch\Headgear\H_HelmetHBK_01_ear_F.p3d";
    class ItemInfo : HeadgearItem {
        mass = 30;
        uniformModel = "\A3\Characters_F_Enoch\Headgear\H_HelmetHBK_01_ear_F.p3d";
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

class GSRI_helmet_modular_bme_integral : GSRI_helmet_modular_bme_advanced {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    displayName = "$STR_GSRI_HEADGEAR_HELMET_MODULAR_BME_INTEGRAL";
    descriptionShort="$STR_A3_SP_AL_II";
    picture = "\fr\gsri\equipment\headgear\UI\icon_gsri_helmet_modular_bme_accessories.paa";
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