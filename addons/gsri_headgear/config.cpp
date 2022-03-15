class CfgPatches {
    class gsri_headgear {
        units[]={};
        requiredVersion=0.1;
        requiredAddons[]={"A3_Characters_F", "A3_Characters_F_EXP"};
        author="www.gsri.team";
    };
};

class CfgWeapons 
{
    class H_Beret_02;
    class GSRI_beret : H_Beret_02 {
        author = "$STR_GSRI_AUTHOR_SEENRI";
        displayName = "$STR_gsri_beret_displayName";
        picture = "\fr\gsri\headgear\data\beret_ico.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\fr\gsri\headgear\data\beret.paa"};
    };

    // Hiding the legacy beret
    class ItemCore;
    class gsri_le_beret : ItemCore {
        author = "$STR_GSRI_AUTHOR_SEENRI";
        scope = 1;
        scopeArsenal = 0;
        displayName = "OBSOLETE";
        descriptionShort = "OBSOLETE, WILL BE REMOVED, USE NEW ITEM";
    };

    class H_watchcap_blk;
    class H_watchcap_wht : H_watchcap_blk
    {
        author = "$STR_GSRI_AUTHOR_SEENRI";
        scope = 2;
        scopeArsenal = 2;
        displayName="Beanie (white)";
        hiddenSelections[]={"camo"};
        hiddenSelectionsTextures[]={"\fr\gsri\headgear\data\woolhat_white_co.paa"};
        hiddenSelectionsMaterials[]={};
    };

    class HeadgearItem;
    class H_HelmetB;
    class H_HelmetSpecB;
    class H_HelmetB_light;

    class GSRI_helmet : H_HelmetB {
        author = "$STR_GSRI_HELMETS_AUTHOR";
        weaponPoolAvailable = 1;
        displayName = "$STR_GSRI_HELMET";
        picture = "\fr\gsri\headgear\UI\icon_gsri_helmet.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain.p3d";
        hiddenSelections[] = { "camo" };
        hiddenSelectionsTextures[] = { "\fr\gsri\headgear\data\helmet_co.paa"};
        hiddenSelectionsMaterials[] = {"\fr\gsri\headgear\data\helmet.rvmat"};
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
        author = "$STR_GSRI_HELMETS_AUTHOR";
        weaponPoolAvailable = 1;
        displayName = "$STR_GSRI_HELMET_SPEC";
        picture = "\fr\gsri\headgear\UI\icon_gsri_helmet_spec.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic.p3d";
        hiddenSelections[] = { "camo" };
        hiddenSelectionsTextures[] = { "\fr\gsri\headgear\data\helmet_co.paa"};
        hiddenSelectionsMaterials[] = {"\fr\gsri\headgear\data\helmet.rvmat"};
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
        author = "$STR_GSRI_HELMETS_AUTHOR";
        weaponPoolAvailable = 1;
        displayName = "$STR_GSRI_HELMET_LIGHT";
        picture = "\fr\gsri\headgear\UI\icon_gsri_helmet_light.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light.p3d";
        hiddenSelections[] = { "camo" };
        hiddenSelectionsTextures[] = { "\fr\gsri\headgear\data\helmet_co.paa"};
        hiddenSelectionsMaterials[] = {"\fr\gsri\headgear\data\helmet.rvmat"};
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
        author = "$STR_GSRI_HELMETS_AUTHOR";
        weaponPoolAvailable = 1;
        displayName = "$STR_GSRI_HELMET_MODULAR";
        picture = "\fr\gsri\headgear\UI\icon_gsri_helmet_modular.paa";
        model = "\A3\Characters_F_Enoch\Headgear\H_HelmetHBK_01_headset_F.p3d";
        hiddenSelections[] = { "camo" };
        hiddenSelectionsTextures[] = { "\fr\gsri\headgear\data\helmet_modular_co.paa"};
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

    class GSRI_helmet_modular_advanced : H_HelmetB {
        author = "$STR_GSRI_HELMETS_AUTHOR";
        weaponPoolAvailable = 1;
        displayName = "$STR_GSRI_HELMET_MODULAR_ADVANCED";
        picture = "\fr\gsri\headgear\UI\icon_gsri_helmet_modular_advanced.paa";
        model = "\A3\Characters_F_Enoch\Headgear\H_HelmetHBK_01_F.p3d";
        hiddenSelections[] = { "camo" };
        hiddenSelectionsTextures[] = { "\fr\gsri\headgear\data\helmet_modular_co.paa"};
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
};    
class CfgGlasses
{
    class G_Balaclava_combat;
    class G_Balaclava_oli;

    class W_Balaclava_combat : G_Balaclava_combat 
    {
        author = "$STR_GSRI_AUTHOR_SEENRI";
        scope = 2;
        scopeArsenal = 2;
        displayName="Balaclava (Combat Googles white)";
        hiddenSelections[]={"camo1"};
        hiddenSelectionsTextures[]={"\fr\gsri\headgear\data\balaclava_white_co.paa"};
        hiddenSelectionsMaterials[]={};
    };
    class W_Balaclava_white : G_Balaclava_oli 
    {
        author = "$STR_GSRI_AUTHOR_SEENRI";
        scope = 2;
        scopeArsenal = 2;
        displayName="Balaclava (white)";
        hiddenSelections[]={"camo"};
        hiddenSelectionsTextures[]={"\fr\gsri\headgear\data\balaclava_white_co.paa"};
        hiddenSelectionsMaterials[]={};
    };
};