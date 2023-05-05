class Vest_Camo_Base : ItemCore {
    class ItemInfo;
};

class GSRI_vest_carrier : Vest_Camo_Base {
    author="$STR_GSRI_AUTHORS_PHILEAS";
    scope = 2;
    displayName = "$STR_GSRI_VESTS_CARRIER";
    picture = "\fr\gsri\equipment\vests\UI\icon_gsri_vest_carrier_ca.paa";
    model = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
    hiddenSelectionsTextures[] = {"\fr\gsri\equipment\vests\Data\gsri_vest_carrier_co.paa"};
    hiddenSelectionsMaterials[] = {"\fr\gsri\equipment\vests\Data\gsri_vest_carrier.rvmat"};
    descriptionShort="$STR_A3_SP_AL_III";
    class ItemInfo : ItemInfo {
        author = "$STR_GSRI_AUTHORS_PHILEAS";
        uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
        containerClass="Supply140";
        mass=100;
        class HitpointsProtectionInfo {
            class Chest {
                HitpointName="HitChest";
                armor=20;
                PassThrough=0.3;
            };
            class Diaphragm {
                HitpointName="HitDiaphragm";
                armor=20;
                PassThrough=0.3;
            };
            class Abdomen {
                hitpointName="HitAbdomen";
                armor=10;
                passThrough=0.3;
            };
            class Body {
                hitpointName="HitBody";
                passThrough=0.3;
            };
        };
    };
};

class GSRI_vest_carrier_lite : GSRI_vest_carrier {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    displayName = "$STR_GSRI_VESTS_CARRIER_LIGHT";
    picture = "\fr\gsri\equipment\vests\UI\icon_gsri_vest_carrier_lite_ca.paa";
    model = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
    class ItemInfo : ItemInfo {
        author = "$STR_GSRI_AUTHORS_PHILEAS";
        uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
        containerClass="Supply140";
        mass=80;
        class HitpointsProtectionInfo {
            class Chest {
                HitpointName="HitChest";
                armor=20;
                PassThrough=0.3;
            };
            class Diaphragm {
                HitpointName="HitDiaphragm";
                armor=20;
                PassThrough=0.3;
            };
            class Abdomen {
                hitpointName="HitAbdomen";
                armor=10;
                passThrough=0.3;
            };
            class Body {
                hitpointName="HitBody";
                passThrough=0.3;
            };
        };
    };
};

class GSRI_vest_modular : GSRI_vest_carrier {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    displayName = "$STR_GSRI_VESTS_MODULAR";
    picture = "\fr\gsri\equipment\vests\UI\icon_gsri_vest_modular_ca.paa";
    model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
    hiddenSelectionsTextures[] = {"\fr\gsri\equipment\vests\Data\gsri_vest_modular_co.paa"};
    hiddenSelectionsMaterials[] = {"\fr\gsri\equipment\vests\Data\gsri_vest_modular.rvmat"};
    descriptionShort="$STR_A3_SP_AL_IV";
    class ItemInfo : ItemInfo {
        author = "$STR_GSRI_AUTHORS_PHILEAS";
        uniformModel = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_F.p3d";
        containerClass="Supply30";
        mass=100;
        class HitpointsProtectionInfo {
            class Chest {
                HitpointName="HitChest";
                armor=25;
                PassThrough=0.2;
            };
            class Diaphragm {
                HitpointName="HitDiaphragm";
                armor=25;
                PassThrough=0.2;
            };
            class Abdomen {
                hitpointName="HitAbdomen";
                armor=25;
                passThrough=0.2;
            };
            class Body {
                hitpointName="HitBody";
                passThrough=0.3;
            };
        };
    };
};

class GSRI_vest_modular_accessories : GSRI_vest_modular {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    displayName = "$STR_GSRI_VESTS_MODULAR_ACCESSORIES";
    class ItemInfo : ItemInfo {
        author = "$STR_GSRI_AUTHORS_PHILEAS";
        uniformModel = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
        containerClass="Supply140";
        mass=120;
        class HitpointsProtectionInfo {
            class Chest {
                HitpointName="HitChest";
                armor=25;
                PassThrough=0.2;
            };
            class Diaphragm {
                HitpointName="HitDiaphragm";
                armor=25;
                PassThrough=0.2;
            };
            class Abdomen {
                hitpointName="HitAbdomen";
                armor=25;
                passThrough=0.2;
            };
            class Body {
                hitpointName="HitBody";
                passThrough=0.3;
            };
        };
    };
};

class GSRI_vest_modular_reinforced : GSRI_vest_carrier {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    displayName = "$STR_GSRI_VESTS_MODULAR_REINFORCED";
    picture = "\fr\gsri\equipment\vests\UI\icon_gsri_vest_modular_ca.paa";
    model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
    hiddenSelectionsTextures[] = {"\fr\gsri\equipment\vests\Data\gsri_vest_modular_co.paa"};
    hiddenSelectionsMaterials[] = {"\fr\gsri\equipment\vests\Data\gsri_vest_modular.rvmat"};
    class ItemInfo : ItemInfo {
        author = "$STR_GSRI_AUTHORS_PHILEAS";
        uniformModel = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_heavy_F.p3d";
        containerClass="Supply140";
        mass=150;
        class HitpointsProtectionInfo {
            class Neck {
                hitpointName="HitNeck";
                armor=15;
                passThrough=0.2;
            };
            class Arms {
                hitpointName="HitArms";
                armor=15;
                passThrough=0.2;
            };
            class Chest {
                HitpointName="HitChest";
                armor=25;
                PassThrough=0.2;
            };
            class Diaphragm {
                HitpointName="HitDiaphragm";
                armor=25;
                PassThrough=0.2;
            };
            class Abdomen {
                hitpointName="HitAbdomen";
                armor=25;
                passThrough=0.2;
            };
            class Body {
                hitpointName="HitBody";
                passThrough=0.3;
            };
        };
    };
};

class GSRI_vest_ga_carrier_lite : GSRI_vest_carrier {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    displayName = "$STR_GSRI_VESTS_GA_CARRIER_LITE";
    picture = "\fr\gsri\equipment\vests\UI\icon_gsri_vest_ga_carrier_lite_ca.paa";
    model = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
    hiddenSelectionsTextures[] = {"\fr\gsri\equipment\vests\Data\gsri_vest_ga_carrier_co.paa"};
    hiddenSelectionsMaterials[] = {"\fr\gsri\equipment\vests\Data\gsri_vest_ga_carrier.rvmat"};
    descriptionShort="$STR_A3_SP_AL_II";
    class ItemInfo : ItemInfo {
        author = "$STR_GSRI_AUTHORS_PHILEAS";
        uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
        containerClass="Supply160";
        mass=80;
        class HitpointsProtectionInfo {
            class Chest {
                HitpointName="HitChest";
                armor=15;
                PassThrough=0.2;
            };
            class Diaphragm {
                HitpointName="HitDiaphragm";
                armor=15;
                PassThrough=0.2;
            };
            class Abdomen {
                hitpointName="HitAbdomen";
                armor=15;
                passThrough=0.2;
            };
            class Body {
                hitpointName="HitBody";
                passThrough=0.3;
            };
        };
    };
};

class GSRI_vest_ga_carrier : GSRI_vest_ga_carrier_lite {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    displayName = "$STR_GSRI_VESTS_GA_CARRIER";
    picture = "\fr\gsri\equipment\vests\UI\icon_gsri_vest_ga_carrier_ca.paa";
    model = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
    class ItemInfo : ItemInfo {
        author = "$STR_GSRI_AUTHORS_PHILEAS";
        uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
        containerClass="Supply160";
        mass=110;
        class HitpointsProtectionInfo {
            class Neck {
                hitpointName="HitNeck";
                armor=10;
                passThrough=0.2;
            };
            class Chest {
                HitpointName="HitChest";
                armor=15;
                PassThrough=0.2;
            };
            class Diaphragm {
                HitpointName="HitDiaphragm";
                armor=15;
                PassThrough=0.2;
            };
            class Abdomen {
                hitpointName="HitAbdomen";
                armor=15;
                passThrough=0.2;
            };
            class Pelvis {
                hitpointName="HitBody";
                armor=15;
                passThrough=0.2;
            };
            class Body {
                hitpointName="HitBody";
                passThrough=0.3;
            };
        };
    };
};

class GSRI_vest_carrier_bme : Vest_Camo_Base {
    author="$STR_GSRI_AUTHORS_PHILEAS";
    scope = 2;
    displayName = "$STR_GSRI_VESTS_CARRIER_BME";
    picture = "\fr\gsri\equipment\vests\UI\icon_gsri_vest_carrier_bme_ca.paa";
    model = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
    hiddenSelectionsTextures[] = {"\fr\gsri\equipment\vests\Data\gsri_vest_carrier_bme_co.paa"};
    hiddenSelectionsMaterials[] = {"\fr\gsri\equipment\vests\Data\gsri_vest_carrier.rvmat"};
    descriptionShort="$STR_A3_SP_AL_III";
    class ItemInfo : ItemInfo {
        author = "$STR_GSRI_AUTHORS_PHILEAS";
        uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
        containerClass="Supply140";
        mass=100;
        class HitpointsProtectionInfo {
            class Chest {
                HitpointName="HitChest";
                armor=20;
                PassThrough=0.3;
            };
            class Diaphragm {
                HitpointName="HitDiaphragm";
                armor=20;
                PassThrough=0.3;
            };
            class Abdomen {
                hitpointName="HitAbdomen";
                armor=10;
                passThrough=0.3;
            };
            class Body {
                hitpointName="HitBody";
                passThrough=0.3;
            };
        };
    };
};

class GSRI_vest_carrier_bme_lite : GSRI_vest_carrier_bme {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    displayName = "$STR_GSRI_VESTS_CARRIER_BME_LIGHT";
    picture = "\fr\gsri\equipment\vests\UI\icon_gsri_vest_carrier_bme_lite_ca.paa";
    model = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
    class ItemInfo : ItemInfo {
        author = "$STR_GSRI_AUTHORS_PHILEAS";
        uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
        containerClass="Supply140";
        mass=80;
        class HitpointsProtectionInfo {
            class Chest {
                HitpointName="HitChest";
                armor=20;
                PassThrough=0.3;
            };
            class Diaphragm {
                HitpointName="HitDiaphragm";
                armor=20;
                PassThrough=0.3;
            };
            class Abdomen {
                hitpointName="HitAbdomen";
                armor=10;
                passThrough=0.3;
            };
            class Body {
                hitpointName="HitBody";
                passThrough=0.3;
            };
        };
    };
};

class GSRI_vest_modular_bme : GSRI_vest_carrier_bme {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    displayName = "$STR_GSRI_VESTS_MODULAR_BME";
    picture = "\fr\gsri\equipment\vests\UI\icon_gsri_vest_modular_bme_ca.paa";
    model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
    hiddenSelectionsTextures[] = {"\fr\gsri\equipment\vests\Data\gsri_vest_modular_bme_co.paa"};
    hiddenSelectionsMaterials[] = {"\fr\gsri\equipment\vests\Data\gsri_vest_modular.rvmat"};
    descriptionShort="$STR_A3_SP_AL_IV";
    class ItemInfo : ItemInfo {
        author = "$STR_GSRI_AUTHORS_PHILEAS";
        uniformModel = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_F.p3d";
        containerClass="Supply30";
        mass=100;
        class HitpointsProtectionInfo {
            class Chest {
                HitpointName="HitChest";
                armor=25;
                PassThrough=0.2;
            };
            class Diaphragm {
                HitpointName="HitDiaphragm";
                armor=25;
                PassThrough=0.2;
            };
            class Abdomen {
                hitpointName="HitAbdomen";
                armor=25;
                passThrough=0.2;
            };
            class Body {
                hitpointName="HitBody";
                passThrough=0.3;
            };
        };
    };
};

class GSRI_vest_modular_bme_accessories : GSRI_vest_modular_bme {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    displayName = "$STR_GSRI_VESTS_MODULAR_BME_ACCESSORIES";
    class ItemInfo : ItemInfo {
        author = "$STR_GSRI_AUTHORS_PHILEAS";
        uniformModel = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
        containerClass="Supply140";
        mass=120;
        class HitpointsProtectionInfo {
            class Chest {
                HitpointName="HitChest";
                armor=25;
                PassThrough=0.2;
            };
            class Diaphragm {
                HitpointName="HitDiaphragm";
                armor=25;
                PassThrough=0.2;
            };
            class Abdomen {
                hitpointName="HitAbdomen";
                armor=25;
                passThrough=0.2;
            };
            class Body {
                hitpointName="HitBody";
                passThrough=0.3;
            };
        };
    };
};

class GSRI_vest_modular_bme_reinforced : GSRI_vest_carrier_bme {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    displayName = "$STR_GSRI_VESTS_MODULAR_BME_REINFORCED";
    picture = "\fr\gsri\equipment\vests\UI\icon_gsri_vest_modular_bme_ca.paa";
    model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
    hiddenSelectionsTextures[] = {"\fr\gsri\equipment\vests\Data\gsri_vest_modular_bme_co.paa"};
    hiddenSelectionsMaterials[] = {"\fr\gsri\equipment\vests\Data\gsri_vest_modular.rvmat"};
    class ItemInfo : ItemInfo {
        author = "$STR_GSRI_AUTHORS_PHILEAS";
        uniformModel = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_heavy_F.p3d";
        containerClass="Supply140";
        mass=150;
        class HitpointsProtectionInfo {
            class Neck {
                hitpointName="HitNeck";
                armor=15;
                passThrough=0.2;
            };
            class Arms {
                hitpointName="HitArms";
                armor=15;
                passThrough=0.2;
            };
            class Chest {
                HitpointName="HitChest";
                armor=25;
                PassThrough=0.2;
            };
            class Diaphragm {
                HitpointName="HitDiaphragm";
                armor=25;
                PassThrough=0.2;
            };
            class Abdomen {
                hitpointName="HitAbdomen";
                armor=25;
                passThrough=0.2;
            };
            class Body {
                hitpointName="HitBody";
                passThrough=0.3;
            };
        };
    };
};

class GSRI_vest_ga_carrier_bme_lite : GSRI_vest_carrier_bme {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    displayName = "$STR_GSRI_VESTS_GA_CARRIER_BME_LITE";
    picture = "\fr\gsri\equipment\vests\UI\icon_gsri_vest_ga_carrier_bme_lite_ca.paa";
    model = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
    hiddenSelectionsTextures[] = {"\fr\gsri\equipment\vests\Data\gsri_vest_ga_carrier_bme_co.paa"};
    hiddenSelectionsMaterials[] = {"\fr\gsri\equipment\vests\Data\gsri_vest_ga_carrier.rvmat"};
    descriptionShort="$STR_A3_SP_AL_II";
    class ItemInfo : ItemInfo {
        author = "$STR_GSRI_AUTHORS_PHILEAS";
        uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
        containerClass="Supply160";
        mass=80;
        class HitpointsProtectionInfo {
            class Chest {
                HitpointName="HitChest";
                armor=15;
                PassThrough=0.2;
            };
            class Diaphragm {
                HitpointName="HitDiaphragm";
                armor=15;
                PassThrough=0.2;
            };
            class Abdomen {
                hitpointName="HitAbdomen";
                armor=15;
                passThrough=0.2;
            };
            class Body {
                hitpointName="HitBody";
                passThrough=0.3;
            };
        };
    };
};

class GSRI_vest_ga_carrier_bme : GSRI_vest_ga_carrier_bme_lite {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    displayName = "$STR_GSRI_VESTS_GA_CARRIER_BME";
    picture = "\fr\gsri\equipment\vests\UI\icon_gsri_vest_ga_carrier_bme_ca.paa";
    model = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
    class ItemInfo : ItemInfo {
        author = "$STR_GSRI_AUTHORS_PHILEAS";
        uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
        containerClass="Supply160";
        mass=110;
        class HitpointsProtectionInfo {
            class Neck {
                hitpointName="HitNeck";
                armor=10;
                passThrough=0.2;
            };
            class Chest {
                HitpointName="HitChest";
                armor=15;
                PassThrough=0.2;
            };
            class Diaphragm {
                HitpointName="HitDiaphragm";
                armor=15;
                PassThrough=0.2;
            };
            class Abdomen {
                hitpointName="HitAbdomen";
                armor=15;
                passThrough=0.2;
            };
            class Pelvis {
                hitpointName="HitBody";
                armor=15;
                passThrough=0.2;
            };
            class Body {
                hitpointName="HitBody";
                passThrough=0.3;
            };
        };
    };
};
