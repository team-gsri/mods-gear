class G_Balaclava_combat;
class G_Balaclava_oli;
class None;

class GSRI_bandMask_camo : None {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    scope = 2;
    scopeArsenal = 2;
    displayName="$STR_GSRI_FACEWEAR_BANDMASK_CAMO";
    model = "\A3\Characters_F_Bootcamp\Guerrilla\g_bandana_clean.p3d";
    picture = "\fr\gsri\equipment\ui\facewear\icon_gsri_bandMask_camo_ca.paa";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[]={"\fr\gsri\equipment\Data\facewear\gsri_bandMask_camo_co.paa"};
    hiddenSelectionsMaterials[]={"\fr\gsri\equipment\Data\facewear\gsri_bandMask.rvmat"};
    identityTypes[]={"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",50,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",00,"G_HAF_default",50,"G_CIVIL_female",0,"G_CIVIL_male",0};
    mass=4;
};
class GSRI_bandMask_light : GSRI_bandMask_camo {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    displayName="$STR_GSRI_FACEWEAR_BANDMASK_LIGHT";
    picture = "\fr\gsri\equipment\ui\facewear\icon_gsri_bandMask_light_ca.paa";
    hiddenSelectionsTextures[]={"\fr\gsri\equipment\Data\facewear\gsri_bandMask_light_co.paa"};
};
class GSRI_bandMask_med : GSRI_bandMask_camo {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    displayName="$STR_GSRI_FACEWEAR_BANDMASK_MEDIUM";
    picture = "\fr\gsri\equipment\ui\facewear\icon_gsri_bandMask_med_ca.paa";
    hiddenSelectionsTextures[]={"\fr\gsri\equipment\Data\facewear\gsri_bandMask_med_co.paa"};
};
class GSRI_bandMask_dark : GSRI_bandMask_camo {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    displayName="$STR_GSRI_FACEWEAR_BANDMASK_DARK";
    picture = "\fr\gsri\equipment\ui\facewear\icon_gsri_bandMask_dark_ca.paa";
    hiddenSelectionsTextures[]={"\fr\gsri\equipment\Data\facewear\gsri_bandMask_dark_co.paa"};
};
class GSRI_bandMask_glasses_camo : None {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    scope = 2;
    scopeArsenal = 2;
    displayName="$STR_GSRI_FACEWEAR_BANDMASK_GLASSES_CAMO";
    picture = "\fr\gsri\equipment\ui\facewear\icon_gsri_bandMask_glasses_camo_ca.paa";
    hiddenSelections[] = {"camo1","camo2"};
    hiddenSelectionsTextures[] = {"\fr\gsri\equipment\Data\facewear\gsri_bandMask_camo_co.paa","\fr\gsri\equipment\Data\facewear\gsri_glasses_co.paa"};
    hiddenSelectionsMaterials[]={"\fr\gsri\equipment\Data\facewear\gsri_bandMask.rvmat"};
    identityTypes[]={"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",50,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",00,"G_HAF_default",50,"G_CIVIL_female",0,"G_CIVIL_male",0};
    model = "\A3\Characters_F_Bootcamp\Guerrilla\g_bandana_sport.p3d"; 
    mass=6;
};
class GSRI_bandMask_glasses_light : GSRI_bandMask_glasses_camo {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    displayName="$STR_GSRI_FACEWEAR_BANDMASK_GLASSES_LIGHT";
    picture = "\fr\gsri\equipment\ui\facewear\icon_gsri_bandMask_glasses_light_ca.paa";
    hiddenSelectionsTextures[] = {"\fr\gsri\equipment\Data\facewear\gsri_bandMask_light_co.paa","\fr\gsri\equipment\Data\facewear\gsri_glasses_co.paa"};
};
class GSRI_bandMask_glasses_med : GSRI_bandMask_glasses_camo {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    displayName="$STR_GSRI_FACEWEAR_BANDMASK_GLASSES_MEDIUM";
    picture = "\fr\gsri\equipment\ui\facewear\icon_gsri_bandMask_glasses_med_ca.paa";
    hiddenSelectionsTextures[] = {"\fr\gsri\equipment\Data\facewear\gsri_bandMask_med_co.paa","\fr\gsri\equipment\Data\facewear\gsri_glasses_co.paa"};
};
class GSRI_bandMask_glasses_dark : GSRI_bandMask_glasses_camo {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    displayName="$STR_GSRI_FACEWEAR_BANDMASK_GLASSES_DARK";
    picture = "\fr\gsri\equipment\ui\facewear\icon_gsri_bandMask_glasses_dark_ca.paa";
    hiddenSelectionsTextures[] = {"\fr\gsri\equipment\Data\facewear\gsri_bandMask_dark_co.paa","\fr\gsri\equipment\Data\facewear\gsri_glasses_co.paa"};
};

class GSRI_balaclava_white : None {
    author = "$STR_GSRI_AUTHORS_SEENRI";
    scope = 2;
    scopeArsenal = 2;
    displayName="$STR_GSRI_FACEWEAR_BALACLAVA_WHITE";
    picture = "\fr\gsri\equipment\ui\facewear\icon_gsri_balaclava_white_ca.paa";
    model = "\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_clean.p3d";
    hiddenSelections[]={"camo"};
    hiddenSelectionsTextures[]={"\fr\gsri\equipment\Data\facewear\balaclava_white_co.paa"};
    hiddenSelectionsMaterials[]={"\fr\gsri\equipment\Data\facewear\gsri_balaclava.rvmat"};
    identityTypes[]={"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",50,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",00,"G_HAF_default",50,"G_CIVIL_female",0,"G_CIVIL_male",0};
    mass=6;
};
class GSRI_balaclava_white_glasses : GSRI_balaclava_white {
    author = "$STR_GSRI_AUTHORS_SEENRI";
    displayName="$STR_GSRI_FACEWEAR_BALACLAVA_WHITE_GLASSES";
    model = "\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_lowprofile.p3d";
    picture = "\fr\gsri\equipment\ui\facewear\icon_gsri_balaclava_white_goggles_ca.paa";
    hiddenSelections[]={"camo1"};
};
class GSRI_balaclava_white_goggles : GSRI_balaclava_white {
    author = "$STR_GSRI_AUTHORS_SEENRI";
    displayName="$STR_GSRI_FACEWEAR_BALACLAVA_WHITE_goggles";
    model = "\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_combat.p3d";
    picture = "\fr\gsri\equipment\ui\facewear\icon_gsri_balaclava_white_goggles_ca.paa";
    hiddenSelections[]={"camo1"};
};

class GSRI_balaclava_med : GSRI_balaclava_white {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    displayName="$STR_GSRI_FACEWEAR_BALACLAVA_GREEN";
    picture = "\fr\gsri\equipment\ui\facewear\icon_gsri_balaclava_med_ca.paa";
    hiddenSelectionsTextures[]={"\fr\gsri\equipment\Data\facewear\gsri_balaclava_med_co.paa"};
};
class GSRI_balaclava_med_glasses : GSRI_balaclava_white_glasses {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    displayName="$STR_GSRI_FACEWEAR_BALACLAVA_GREEN_GLASSES";
    picture = "\fr\gsri\equipment\ui\facewear\icon_gsri_balaclava_med_ca.paa";
    hiddenSelectionsTextures[]={"\fr\gsri\equipment\Data\facewear\gsri_balaclava_med_co.paa"};
};
class GSRI_balaclava_med_googles : GSRI_balaclava_white_goggles {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    displayName="$STR_GSRI_FACEWEAR_BALACLAVA_GREEN_GOGGLES";
    picture = "\fr\gsri\equipment\ui\facewear\icon_gsri_balaclava_med_ca.paa";
    hiddenSelectionsTextures[]={"\fr\gsri\equipment\Data\facewear\gsri_balaclava_med_co.paa"};
};

class GSRI_balaclava_light : GSRI_balaclava_white {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    displayName="$STR_GSRI_FACEWEAR_BALACLAVA_LIGHT";
    picture = "\fr\gsri\equipment\ui\facewear\icon_gsri_balaclava_light_ca.paa";
    hiddenSelectionsTextures[]={"\fr\gsri\equipment\Data\facewear\gsri_balaclava_light_co.paa"};
};
class GSRI_balaclava_light_glasses : GSRI_balaclava_white_glasses {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    displayName="$STR_GSRI_FACEWEAR_BALACLAVA_LIGHT_GLASSES";
    picture = "\fr\gsri\equipment\ui\facewear\icon_gsri_balaclava_light_ca.paa";
    hiddenSelectionsTextures[]={"\fr\gsri\equipment\Data\facewear\gsri_balaclava_light_co.paa"};
};
class GSRI_balaclava_light_googles : GSRI_balaclava_white_goggles {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    displayName="$STR_GSRI_FACEWEAR_BALACLAVA_LIGHT_GOGGLES";
    picture = "\fr\gsri\equipment\ui\facewear\icon_gsri_balaclava_light_ca.paa";
    hiddenSelectionsTextures[]={"\fr\gsri\equipment\Data\facewear\gsri_balaclava_light_co.paa"};
};

class GSRI_balaclava_dark : GSRI_balaclava_white {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    displayName="$STR_GSRI_FACEWEAR_BALACLAVA_DARK";
    picture = "\fr\gsri\equipment\ui\facewear\icon_gsri_balaclava_dark_ca.paa";
    hiddenSelectionsTextures[]={"\fr\gsri\equipment\Data\facewear\gsri_balaclava_dark_co.paa"};
};
class GSRI_balaclava_dark_glasses : GSRI_balaclava_white_glasses {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    displayName="$STR_GSRI_FACEWEAR_BALACLAVA_DARK_GLASSES";
    picture = "\fr\gsri\equipment\ui\facewear\icon_gsri_balaclava_dark_ca.paa";
    hiddenSelectionsTextures[]={"\fr\gsri\equipment\Data\facewear\gsri_balaclava_dark_co.paa"};
};
class GSRI_balaclava_dark_goggles : GSRI_balaclava_white_goggles {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    displayName="$STR_GSRI_FACEWEAR_BALACLAVA_DARK_GOGGLES";
    picture = "\fr\gsri\equipment\ui\facewear\icon_gsri_balaclava_dark_ca.paa";
    hiddenSelectionsTextures[]={"\fr\gsri\equipment\Data\facewear\gsri_balaclava_dark_co.paa"};
};

class GSRI_balaclava_v2_camo : None {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    scope = 2;
    scopeArsenal = 2;
    displayName="$STR_GSRI_FACEWEAR_BALACLAVA_V2_CAMO";
    model = "\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
    picture = "\fr\gsri\equipment\ui\facewear\icon_gsri_balaclava_v2_camo_ca.paa";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[]={"\fr\gsri\equipment\Data\facewear\gsri_balaclava_v2_camo_co.paa"};
    hiddenSelectionsMaterials[]={"\fr\gsri\equipment\Data\facewear\gsri_balaclava_v2.rvmat"};
    identityTypes[]={"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",50,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",00,"G_HAF_default",50,"G_CIVIL_female",0,"G_CIVIL_male",0};
    mass=6;
};
class GSRI_balaclava_v2_camo_goggles : GSRI_balaclava_v2_camo {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    displayName="$STR_GSRI_FACEWEAR_BALACLAVA_V2_CAMO_GOGGLES";
    model = "\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
    hiddenSelections[] = {"camo1"};
};
class GSRI_balaclava_v2_light : GSRI_balaclava_v2_camo {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    displayName="$STR_GSRI_FACEWEAR_BALACLAVA_V2_LIGHT";
    picture = "\fr\gsri\equipment\ui\facewear\icon_gsri_balaclava_v2_light_ca.paa";
    hiddenSelectionsTextures[]={"\fr\gsri\equipment\Data\facewear\gsri_balaclava_v2_light_co.paa"};
};
class GSRI_balaclava_v2_light_goggles : GSRI_balaclava_v2_camo_goggles {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    displayName="$STR_GSRI_FACEWEAR_BALACLAVA_V2_LIGHT_GOGGLES";
    picture = "\fr\gsri\equipment\ui\facewear\icon_gsri_balaclava_v2_light_ca.paa";
    hiddenSelectionsTextures[]={"\fr\gsri\equipment\Data\facewear\gsri_balaclava_v2_light_co.paa"};
};
class GSRI_balaclava_v2_med : GSRI_balaclava_v2_camo {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    displayName="$STR_GSRI_FACEWEAR_BALACLAVA_V2_MEDIUM";
    picture = "\fr\gsri\equipment\ui\facewear\icon_gsri_balaclava_v2_med_ca.paa";
    hiddenSelectionsTextures[]={"\fr\gsri\equipment\Data\facewear\gsri_balaclava_v2_med_co.paa"};
};
class GSRI_balaclava_v2_med_goggles : GSRI_balaclava_v2_camo_goggles {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    displayName="$STR_GSRI_FACEWEAR_BALACLAVA_V2_MEDIUM_GOGGLES";
    picture = "\fr\gsri\equipment\ui\facewear\icon_gsri_balaclava_v2_med_ca.paa";
    hiddenSelectionsTextures[]={"\fr\gsri\equipment\Data\facewear\gsri_balaclava_v2_med_co.paa"};
};
class GSRI_balaclava_v2_dark : GSRI_balaclava_v2_camo {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    displayName="$STR_GSRI_FACEWEAR_BALACLAVA_V2_DARK";
    picture = "\fr\gsri\equipment\ui\facewear\icon_gsri_balaclava_v2_dark_ca.paa";
    hiddenSelectionsTextures[]={"\fr\gsri\equipment\Data\facewear\gsri_balaclava_v2_dark_co.paa"};
};
class GSRI_balaclava_v2_dark_goggles : GSRI_balaclava_v2_camo_goggles {
    author = "$STR_GSRI_AUTHORS_PHILEAS";
    displayName="$STR_GSRI_FACEWEAR_BALACLAVA_V2_DARK_GOGGLES";
    picture = "\fr\gsri\equipment\ui\facewear\icon_gsri_balaclava_v2_dark_ca.paa";
    hiddenSelectionsTextures[]={"\fr\gsri\equipment\Data\facewear\gsri_balaclava_v2_dark_co.paa"};
};
