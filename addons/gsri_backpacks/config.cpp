class CfgPatches {
    class gsri_backpacks {
        units[]={};
        requiredVersion=0.1;
        requiredAddons[]={"COS_back_pack", "ace_logistics_wirecutter"};
        author="[-GSRI-]Cheitan";
    };
};

class CfgVehicles {
    class B_AssaultPack_mcamo;

    class KIT_BAG_pince_OD : B_AssaultPack_mcamo {
        ace_logistics_wirecutter_hasWireCutter = 1;
    };

    class SOG_BAG_BREACHER_od : B_AssaultPack_mcamo {
        ace_logistics_wirecutter_hasWireCutter = 1;
    };
};