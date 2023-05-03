class B_Soldier_F;
class GSRI_uniform_U: B_Soldier_F {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    modelsides[]={3,2,1,0};
    scope = 1;
    displayName="$STR_GSRI_UNIFORMS_BASE";
    model="\A3\Characters_F\BLUFOR\B_Soldier_01.p3d";
    uniformClass="GSRI_uniform";
    hiddenSelections[] = {"camo","insignia"};
    hiddenSelectionsTextures[] = {"\fr\gsri\equipment\uniforms\Data\gsri_uniform_co.paa"};
    hiddenSelectionsMaterials[] = {"\fr\gsri\equipment\uniforms\Data\gsri_uniform.rvmat"};
    linkedItems[] = {};
    respawnLinkedItems[] = {};
    weapons[] = {};
    respawnWeapons[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    items[] = {};
    respawnItems[] = {};
};
class GSRI_uniform_rolled_U: GSRI_uniform_U {
    displayName="$STR_GSRI_UNIFORMS_ROLLED_SLEEVES";
    model="\A3\Characters_F\BLUFOR\B_Soldier_03.p3d";
    uniformClass="GSRI_uniform_rolled";
};
class GSRI_uniform_raised_collar_U: GSRI_uniform_U {
    modelsides[]={3,2,1,0};
    displayName="$STR_GSRI_UNIFORMS_RAISED_COLLAR";
    model="\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
    uniformClass="GSRI_uniform_raised_collar";
};

class GSRI_uniform_bme_U: B_Soldier_F {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    modelsides[]={3,2,1,0};
    scope = 1;
    displayName="$STR_GSRI_UNIFORMS_BASE_BME";
    model="\A3\Characters_F\BLUFOR\B_Soldier_01.p3d";
    uniformClass="GSRI_uniform_bme";
    hiddenSelections[] = {"camo","insignia"};
    hiddenSelectionsTextures[] = {"\fr\gsri\equipment\uniforms\Data\gsri_uniform_bme_co.paa"};
    hiddenSelectionsMaterials[] = {"\fr\gsri\equipment\uniforms\Data\gsri_uniform.rvmat"};
    linkedItems[] = {};
    respawnLinkedItems[] = {};
    weapons[] = {};
    respawnWeapons[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    items[] = {};
    respawnItems[] = {};
};
class GSRI_uniform_rolled_bme_U: GSRI_uniform_bme_U {
    displayName="$STR_GSRI_UNIFORMS_ROLLED_SLEEVES_BME";
    model="\A3\Characters_F\BLUFOR\B_Soldier_03.p3d";
    uniformClass="GSRI_uniform_rolled_bme";
};
class GSRI_uniform_raised_collar_bme_U: GSRI_uniform_bme_U {
    modelsides[]={3,2,1,0};
    displayName="$STR_GSRI_UNIFORMS_RAISED_COLLAR_BME";
    model="\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
    uniformClass="GSRI_uniform_raised_collar_bme";
};

class GSRI_shirt_camo_U: GSRI_uniform_U {
    displayName="$STR_GSRI_UNIFORMS_TSHIRT_CAMO";
    model="\A3\Characters_F\BLUFOR\B_Soldier_02.p3d";
    uniformClass="GSRI_shirt_camo";
    hiddenSelections[] = {"camo","camo2","insignia"};
    hiddenSelectionsTextures[] = {
        "\fr\gsri\equipment\uniforms\Data\gsri_uniform_co.paa",
        "\fr\gsri\equipment\uniforms\Data\gsri_shirt_camo_co.paa"
    };
    hiddenSelectionsMaterials[] = {
        "\fr\gsri\equipment\uniforms\Data\gsri_uniform.rvmat",
        "\fr\gsri\equipment\uniforms\Data\gsri_basicbody.rvmat"
    };
};
class GSRI_shirt_green_U: GSRI_shirt_camo_U {
    displayName="$STR_GSRI_UNIFORMS_TSHIRT_GREEN";
    uniformClass="GSRI_shirt_green";
    hiddenSelectionsTextures[] = {
        "\fr\gsri\equipment\uniforms\Data\gsri_uniform_co.paa",
        "\fr\gsri\equipment\uniforms\Data\gsri_shirt_green_co.paa"
    };
};
class GSRI_shirt_bme_U: GSRI_uniform_bme_U {
    displayName="$STR_GSRI_UNIFORMS_TSHIRT_BME";
    model="\A3\Characters_F\BLUFOR\B_Soldier_02.p3d";
    uniformClass="GSRI_shirt_bme";
    hiddenSelections[] = {"camo","camo2","insignia"};
    hiddenSelectionsTextures[] = {
        "\fr\gsri\equipment\uniforms\Data\gsri_uniform_bme_co.paa",
        "\fr\gsri\equipment\uniforms\Data\gsri_shirt_bme_co.paa"
    };
    hiddenSelectionsMaterials[] = {
        "\fr\gsri\equipment\uniforms\Data\gsri_uniform.rvmat",
        "\fr\gsri\equipment\uniforms\Data\gsri_basicbody.rvmat"
    };
};

class GSRI_gorka_camo_U: B_Soldier_F {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    scope = 1;
    modelsides[]={3,2,1,0};
    displayName="$STR_GSRI_UNIFORMS_GORKA_CAMO";
    model="\A3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
    uniformClass="GSRI_gorka_camo";
    hiddenSelections[] = {"camo_1","camo_2","insignia"};
    hiddenSelectionsTextures[] = {"\fr\gsri\equipment\uniforms\Data\gsri_gorka_camo_co.paa"};
    hiddenSelectionsMaterials[] = {"\fr\gsri\equipment\uniforms\Data\gsri_gorka.rvmat"};
    linkedItems[] = {};
    respawnLinkedItems[] = {};
    weapons[] = {};
    respawnWeapons[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    items[] = {};
    respawnItems[] = {};
};
class GSRI_gorka_green_U: GSRI_gorka_camo_U {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    displayName="$STR_GSRI_GORKA_GREEN"
    uniformClass="GSRI_gorka_green";
    hiddenSelectionsTextures[] = {"\fr\gsri\equipment\uniforms\Data\gsri_gorka_green_co.paa"};
};
