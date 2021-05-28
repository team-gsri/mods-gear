class CfgPatches {
    class gsri_vanilla_compat {
        units[]={};
        requiredVersion=0.1;
        requiredAddons[]={"cba_jr", "cba_jam"};
        author="[-GSRI-] Cheitan";
    };
};

class CfgMagazineWells {
    class CBA_556x45_STANAG {
        SMA_mags[] = {
            "SMA_30Rnd_556x45_M855A1",
            "SMA_30Rnd_556x45_M855A1_Tracer",
            "SMA_30Rnd_556x45_M855A1_IR",
            "SMA_30Rnd_556x45_Mk318",
            "SMA_30Rnd_556x45_Mk318_Tracer",
            "SMA_30Rnd_556x45_Mk318_IR",
            "SMA_30Rnd_556x45_Mk262",
            "SMA_30Rnd_556x45_Mk262_Tracer",
            "SMA_30Rnd_556x45_Mk262_IR"
        };
    };
};

class asdg_OpticRail1913;
class asdg_FrontSideRail;

class CfgWeapons {
    class Rifle;
    class Rifle_Base_F : Rifle {
        class WeaponSlotsInfo;
    };
    class arifle_MSBS65_base_F : Rifle_Base_F {
        magazineWell[] += {"CBA_556x45_STANAG"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot: asdg_OpticRail1913 {
                iconPosition[] = {0.45,0.28};
                iconScale = 0.2;
            };
            class PointerSlot: asdg_FrontSideRail {
                iconPosition[] = {0.35,0.45};
                iconScale = 0.2;
            };
        };
    };
};