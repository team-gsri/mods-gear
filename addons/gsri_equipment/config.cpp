#define TEast			0
#define TWest			1
#define TGuerrila		2
#define TCivilian		3
#define TSideUnknown	4
#define TEnemy			5
#define TFriendly		6
#define TLogic			7

class CfgPatches {
    class gsri_equipment {
        author="$STR_GSRI_AUTHORS";
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[] = {
            "A3_Characters_F",
            "A3_Characters_F_Beta", 
            "A3_Characters_F_Enoch",
            "A3_Characters_F_EXP",
            "A3_Supplies_F_Enoch",
            "A3_Weapons_F",
            "cba_jr",
            "cba_jam",
            "tfar_core"
        };
    };
};

class asdg_OpticRail1913;
class asdg_FrontSideRail;

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

class CfgVehicles {
    #include "backpacks.hpp"
    #include "uniforms.hpp"
};

class CfgWeapons {
    #include "weapons_compat.hpp"
    #include "headgear.hpp"
    #include "uniformItems.hpp"
    #include "vests.hpp"
};

class CfgGlasses {
    #include "facewear.hpp"
};
