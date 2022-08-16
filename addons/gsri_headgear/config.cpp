class CfgPatches {
    class gsri_headgear {
        units[]={};
        requiredVersion=0.1;
        requiredAddons[]={"A3_Characters_F", "A3_Characters_F_EXP", "A3_Characters_F_bootcamp"};
        author="www.gsri.team";
    };
};

class CfgWeapons 
{
    class H_Beret_02;
    class GSRI_beret : H_Beret_02 {
        author = "$STR_GSRI_AUTHOR_SEENRI";
        displayName = "$STR_GSRI_BERET";
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
        displayName="$STR_BEANIE_WHITE";
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
    class None;

    class W_Balaclava_combat : G_Balaclava_combat 
    {
        author = "$STR_GSRI_AUTHOR_SEENRI";
        scope = 2;
        scopeArsenal = 2;
        picture = "\fr\gsri\headgear\ui\icon_gsri_balaclava_white_goggles_ca.paa";
        displayName="$STR_BALACLAVA_COMBAT_GOOGLES_WHITE";
        hiddenSelections[]={"camo1"};
        hiddenSelectionsTextures[]={"\fr\gsri\headgear\data\balaclava_white_co.paa"};
        hiddenSelectionsMaterials[]={};
    };
    class W_Balaclava_white : G_Balaclava_oli 
    {
        author = "$STR_GSRI_AUTHOR_SEENRI";
        scope = 2;
        scopeArsenal = 2;
        picture = "\fr\gsri\headgear\ui\icon_gsri_balaclava_white_ca.paa";
        displayName="$STR_BALACLAVA_COMBAT_GOOGLES_WHITE";
        hiddenSelections[]={"camo"};
        hiddenSelectionsTextures[]={"\fr\gsri\headgear\data\balaclava_white_co.paa"};
        hiddenSelectionsMaterials[]={};
    };

    class GSRI_bandMask_camo : None 
    {
        author = "$STR_GSRI_HELMETS_AUTHOR";
        scope = 2;
        scopeArsenal = 2;
        displayName="$STR_GSRI_BANDMASK_CAMO";
        model = "\A3\Characters_F_Bootcamp\Guerrilla\g_bandana_clean.p3d";
        picture = "\fr\gsri\headgear\ui\icon_gsri_bandMask_camo_ca.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[]={"\fr\gsri\headgear\data\gsri_bandMask_camo_co.paa"};
        hiddenSelectionsMaterials[]={"\fr\gsri\headgear\data\gsri_bandMask.rvmat"};
        identityTypes[]={"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",50,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",00,"G_HAF_default",50,"G_CIVIL_female",0,"G_CIVIL_male",0};
        mass=4;
    };
    class GSRI_bandMask_light : None 
    {
        author = "$STR_GSRI_HELMETS_AUTHOR";
        scope = 2;
        scopeArsenal = 2;
        displayName="$STR_GSRI_BANDMASK_LIGHT";
        model = "\A3\Characters_F_Bootcamp\Guerrilla\g_bandana_clean.p3d";
        picture = "\fr\gsri\headgear\ui\icon_gsri_bandMask_light_ca.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[]={"\fr\gsri\headgear\data\gsri_bandMask_light_co.paa"};
        hiddenSelectionsMaterials[]={"\fr\gsri\headgear\data\gsri_bandMask.rvmat"};
        identityTypes[]={"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",50,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",00,"G_HAF_default",50,"G_CIVIL_female",0,"G_CIVIL_male",0};
        mass=4;
    };
    class GSRI_bandMask_med : None 
    {
        author = "$STR_GSRI_HELMETS_AUTHOR";
        scope = 2;
        scopeArsenal = 2;
        displayName="$STR_GSRI_BANDMASK_MED";
        model = "\A3\Characters_F_Bootcamp\Guerrilla\g_bandana_clean.p3d";
        picture = "\fr\gsri\headgear\ui\icon_gsri_bandMask_med_ca.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[]={"\fr\gsri\headgear\data\gsri_bandMask_med_co.paa"};
        hiddenSelectionsMaterials[]={"\fr\gsri\headgear\data\gsri_bandMask.rvmat"};
        identityTypes[]={"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",50,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",00,"G_HAF_default",50,"G_CIVIL_female",0,"G_CIVIL_male",0};
        mass=4;
    };
    class GSRI_bandMask_dark : None 
    {
        author = "$STR_GSRI_HELMETS_AUTHOR";
        scope = 2;
        scopeArsenal = 2;
        displayName="$STR_GSRI_BANDMASK_DARK";
        model = "\A3\Characters_F_Bootcamp\Guerrilla\g_bandana_clean.p3d";
        picture = "\fr\gsri\headgear\ui\icon_gsri_bandMask_dark_ca.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[]={"\fr\gsri\headgear\data\gsri_bandMask_dark_co.paa"};
        hiddenSelectionsMaterials[]={"\fr\gsri\headgear\data\gsri_bandMask.rvmat"};
        identityTypes[]={"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",50,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",00,"G_HAF_default",50,"G_CIVIL_female",0,"G_CIVIL_male",0};
        mass=4;
    };
    class GSRI_bandMask_glasses_camo : None 
    {
        author = "$STR_GSRI_HELMETS_AUTHOR";
        scope = 2;
        scopeArsenal = 2;
        displayName="$STR_GSRI_BANDMASK_GLASSES_CAMO";
        picture = "\fr\gsri\headgear\ui\icon_gsri_bandMask_glasses_camo_ca.paa";
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {"\fr\gsri\headgear\data\gsri_bandMask_camo_co.paa","\fr\gsri\headgear\data\gsri_glasses_co.paa"};
        hiddenSelectionsMaterials[]={"\fr\gsri\headgear\data\gsri_bandMask.rvmat"};
        identityTypes[]={"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",50,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",00,"G_HAF_default",50,"G_CIVIL_female",0,"G_CIVIL_male",0};
        model = "\A3\Characters_F_Bootcamp\Guerrilla\g_bandana_sport.p3d"; 
        mass=6;
    };
    class GSRI_bandMask_glasses_light : None 
    {
        author = "$STR_GSRI_HELMETS_AUTHOR";
        scope = 2;
        scopeArsenal = 2;
        displayName="$STR_GSRI_BANDMASK_GLASSES_LIGHT";
        picture = "\fr\gsri\headgear\ui\icon_gsri_bandMask_glasses_light_ca.paa";
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {"\fr\gsri\headgear\data\gsri_bandMask_light_co.paa","\fr\gsri\headgear\data\gsri_glasses_co.paa"};
        hiddenSelectionsMaterials[]={"\fr\gsri\headgear\data\gsri_bandMask.rvmat"};
        identityTypes[]={"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",50,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",00,"G_HAF_default",50,"G_CIVIL_female",0,"G_CIVIL_male",0};
        model = "\A3\Characters_F_Bootcamp\Guerrilla\g_bandana_sport.p3d"; 
        mass=4;
    };
    class GSRI_bandMask_glasses_med : None 
    {
        author = "$STR_GSRI_HELMETS_AUTHOR";
        scope = 2;
        scopeArsenal = 2;
        displayName="$STR_GSRI_BANDMASK_GLASSES_MED";
        picture = "\fr\gsri\headgear\ui\icon_gsri_bandMask_glasses_med_ca.paa";
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {"\fr\gsri\headgear\data\gsri_bandMask_med_co.paa","\fr\gsri\headgear\data\gsri_glasses_co.paa"};
        hiddenSelectionsMaterials[]={"\fr\gsri\headgear\data\gsri_bandMask.rvmat"};
        identityTypes[]={"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",50,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",00,"G_HAF_default",50,"G_CIVIL_female",0,"G_CIVIL_male",0};
        model = "\A3\Characters_F_Bootcamp\Guerrilla\g_bandana_sport.p3d"; 
        mass=6;
    };
    class GSRI_bandMask_glasses_dark : None 
    {
        author = "$STR_GSRI_HELMETS_AUTHOR";
        scope = 2;
        scopeArsenal = 2;
        displayName="$STR_GSRI_BANDMASK_GLASSES_DARK";
        picture = "\fr\gsri\headgear\ui\icon_gsri_bandMask_glasses_dark_ca.paa";
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {"\fr\gsri\headgear\data\gsri_bandMask_dark_co.paa","\fr\gsri\headgear\data\gsri_glasses_co.paa"};
        hiddenSelectionsMaterials[]={"\fr\gsri\headgear\data\gsri_bandMask.rvmat"};
        identityTypes[]={"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",50,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",00,"G_HAF_default",50,"G_CIVIL_female",0,"G_CIVIL_male",0};
        model = "\A3\Characters_F_Bootcamp\Guerrilla\g_bandana_sport.p3d"; 
        mass=6;
    };
    class GSRI_balaclava_light : None 
    {
        author = "$STR_GSRI_HELMETS_AUTHOR";
        scope = 2;
        scopeArsenal = 2;
        displayName="$STR_GSRI_BALACLAVA_LIGHT";
        model = "\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_clean.p3d";
        picture = "\fr\gsri\headgear\ui\icon_gsri_balaclava_light_ca.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[]={"\fr\gsri\headgear\data\gsri_balaclava_light_co.paa"};
        hiddenSelectionsMaterials[]={"\fr\gsri\headgear\data\gsri_balaclava.rvmat"};
        identityTypes[]={"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",50,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",00,"G_HAF_default",50,"G_CIVIL_female",0,"G_CIVIL_male",0};
        mass=6;
    };
    class GSRI_balaclava_med : None 
    {
        author = "$STR_GSRI_HELMETS_AUTHOR";
        scope = 2;
        scopeArsenal = 2;
        displayName="$STR_GSRI_BALACLAVA_MED";
        model = "\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_clean.p3d";
        picture = "\fr\gsri\headgear\ui\icon_gsri_balaclava_med_ca.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[]={"\fr\gsri\headgear\data\gsri_balaclava_med_co.paa"};
        hiddenSelectionsMaterials[]={"\fr\gsri\headgear\data\gsri_balaclava.rvmat"};
        identityTypes[]={"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",50,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",00,"G_HAF_default",50,"G_CIVIL_female",0,"G_CIVIL_male",0};
        mass=6;
    };
    class GSRI_balaclava_dark : None 
    {
        author = "$STR_GSRI_HELMETS_AUTHOR";
        scope = 2;
        scopeArsenal = 2;
        displayName="$STR_GSRI_BALACLAVA_DARK";
        model = "\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_clean.p3d";
        picture = "\fr\gsri\headgear\ui\icon_gsri_balaclava_dark_ca.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[]={"\fr\gsri\headgear\data\gsri_balaclava_dark_co.paa"};
        hiddenSelectionsMaterials[]={"\fr\gsri\headgear\data\gsri_balaclava.rvmat"};
        identityTypes[]={"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",50,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",00,"G_HAF_default",50,"G_CIVIL_female",0,"G_CIVIL_male",0};
        mass=6;
    };
    class GSRI_balaclava_v2_light : None 
    {
        author = "$STR_GSRI_HELMETS_AUTHOR";
        scope = 2;
        scopeArsenal = 2;
        displayName="$STR_GSRI_BALACLAVA_V2_LIGHT";
        model = "\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
        picture = "\fr\gsri\headgear\ui\icon_gsri_balaclava_v2_light_ca.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[]={"\fr\gsri\headgear\data\gsri_balaclava_v2_light_co.paa"};
        hiddenSelectionsMaterials[]={"\fr\gsri\headgear\data\gsri_balaclava_v2.rvmat"};
        identityTypes[]={"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",50,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",00,"G_HAF_default",50,"G_CIVIL_female",0,"G_CIVIL_male",0};
        mass=6;
    };
    class GSRI_balaclava_v2_med : None 
    {
        author = "$STR_GSRI_HELMETS_AUTHOR";
        scope = 2;
        scopeArsenal = 2;
        displayName="$STR_GSRI_BALACLAVA_V2_MED";
        model = "\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
        picture = "\fr\gsri\headgear\ui\icon_gsri_balaclava_v2_med_ca.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[]={"\fr\gsri\headgear\data\gsri_balaclava_v2_med_co.paa"};
        hiddenSelectionsMaterials[]={"\fr\gsri\headgear\data\gsri_balaclava_v2.rvmat"};
        identityTypes[]={"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",50,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",00,"G_HAF_default",50,"G_CIVIL_female",0,"G_CIVIL_male",0};
        mass=6;
    };
    class GSRI_balaclava_v2_dark : None 
    {
        author = "$STR_GSRI_HELMETS_AUTHOR";
        scope = 2;
        scopeArsenal = 2;
        displayName="$STR_GSRI_BALACLAVA_V2_DARK";
        model = "\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
        picture = "\fr\gsri\headgear\ui\icon_gsri_balaclava_v2_dark_ca.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[]={"\fr\gsri\headgear\data\gsri_balaclava_v2_dark_co.paa"};
        hiddenSelectionsMaterials[]={"\fr\gsri\headgear\data\gsri_balaclava_v2.rvmat"};
        identityTypes[]={"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",50,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",00,"G_HAF_default",50,"G_CIVIL_female",0,"G_CIVIL_male",0};
        mass=6;
    };
    class GSRI_balaclava_v2_camo : None 
    {
        author = "$STR_GSRI_HELMETS_AUTHOR";
        scope = 2;
        scopeArsenal = 2;
        displayName="$STR_GSRI_BALACLAVA_V2_CAMO";
        model = "\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
        picture = "\fr\gsri\headgear\ui\icon_gsri_balaclava_v2_camo_ca.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[]={"\fr\gsri\headgear\data\gsri_balaclava_v2_camo_co.paa"};
        hiddenSelectionsMaterials[]={"\fr\gsri\headgear\data\gsri_balaclava_v2.rvmat"};
        identityTypes[]={"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",50,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",00,"G_HAF_default",50,"G_CIVIL_female",0,"G_CIVIL_male",0};
        mass=6;
    };
};