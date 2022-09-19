class ItemCore;
class UniformItem;
class Uniform_Base: ItemCore {
    class ItemInfo;
};

class GSRI_uniform: Uniform_Base {
    author="$STR_GSRI_AUTHORS_PHILEAS";
    scope=2;
    displayName="$STR_GSRI_UNIFORMS_BASE";
    picture="\fr\gsri\equipment\uniforms\UI\icon_gsri_uniform.paa";
    modelsides[]={3,2,1,0};
    model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\fr\gsri\equipment\uniforms\Data\gsri_uniform_co.paa"};
    class ItemInfo: UniformItem {
        uniformModel="-";
        uniformClass="GSRI_uniform_U";
        containerClass="Supply50";
        mass=25;
    };
};
class GSRI_uniform_rolled: GSRI_uniform {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    displayName="$STR_GSRI_UNIFORMS_ROLLED_SLEEVES";
    class ItemInfo: UniformItem {
        uniformModel="-";
        uniformClass="GSRI_uniform_rolled_U";
        containerClass="Supply50";
        mass=25;
    };
};
class GSRI_uniform_raised_collar: GSRI_uniform {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    displayName="$STR_GSRI_UNIFORMS_RAISED_COLLAR";
    class ItemInfo: UniformItem {
        uniformModel="-";
        uniformClass="GSRI_uniform_raised_collar_U";
        containerClass="Supply50";
        mass=25;
    };
};

class GSRI_shirt_camo: GSRI_uniform {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    displayName="$STR_GSRI_UNIFORMS_TSHIRT_CAMO";
    picture="\fr\gsri\equipment\uniforms\UI\icon_gsri_shirt.paa";
    hiddenSelections[] = {"camo","camo2"};
    class ItemInfo: UniformItem {
        uniformModel="-";
        uniformClass="GSRI_shirt_camo_U";
        containerClass="Supply50";
        mass=25;
    };
};
class GSRI_shirt_green: GSRI_shirt_camo {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    displayName="$STR_GSRI_UNIFORMS_TSHIRT_GREEN";
    class ItemInfo: UniformItem {
        uniformModel="-";
        uniformClass="GSRI_shirt_green_U";
        containerClass="Supply50";
        mass=25;
    };
};

class GSRI_gorka_camo: Uniform_Base {
    author="$STR_GSRI_AUTHORS_PHILEAS";
    scope=2;
    displayName="$STR_GSRI_UNIFORMS_GORKA_CAMO";
    picture="\fr\gsri\equipment\uniforms\UI\icon_gsri_uniform.paa";
    modelsides[]={3,2,1,0};
    model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\fr\gsri\equipment\uniforms\Data\gsri_gorka_camo_co.paa"};
    class ItemInfo: UniformItem {
        uniformModel="-";
        uniformClass="GSRI_gorka_camo_U";
        containerClass="Supply50";
        mass=25;
    };
};
class GSRI_gorka_green: GSRI_gorka_camo {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    displayName="$STR_GSRI_UNIFORMS_GORKA_GREEN";
    hiddenSelectionsTextures[] = {"\fr\gsri\equipment\uniforms\Data\gsri_gorka_green_co.paa"};
    class ItemInfo: UniformItem {
        uniformModel="-";
        uniformClass="GSRI_gorka_green_U";
        containerClass="Supply50";
        mass=25;
    };
};
