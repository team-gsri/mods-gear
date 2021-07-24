class CfgPatches {
    class gsri_headgear {
        units[]={};
        requiredVersion=0.1;
        requiredAddons[]={"A3_Characters_F"};
        author="[-GSRI-]Seenri";
    };
};

class CfgWeapons 
{
    class H_Beret_02;
    class GSRI_beret : H_Beret_02 {
        author = "GSRI";
        displayName = "$STR_gsri_beret_displayName";
        picture = "\fr\gsri\headgear\data\beret_ico.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\gsri_beret\data\beret.paa"};
    };

    // Hiding the legacy beret
    class ItemCore;
    class gsri_le_beret : ItemCore {
        scope = 1;
        scopeArsenal = 0;
        displayName = "OBSOLETE";
        descriptionShort = "OBSOLETE, WILL BE REMOVED, USE NEW ITEM";
    };

    class H_watchcap_blk;
    class H_watchcap_wht : H_watchcap_blk
    {
        scope = 2;
        scopeArsenal = 2;
        author = "[-GSRI-]Seenri";
        displayName="Beanie (white)";
        hiddenSelections[]={"camo"};
        hiddenSelectionsTextures[]={"\fr\gsri\headgear\data\woolhat_white_co.paa"};
        hiddenSelectionsMaterials[]={};
    };
};    
class CfgGlasses
{
    class G_Balaclava_combat;
    class G_Balaclava_oli;

    class W_Balaclava_combat : G_Balaclava_combat 
    {
        scope = 2;
        scopeArsenal = 2;
        author = "[-GSRI-]Seenri";
        displayName="Balaclava (Combat Googles white)";
        hiddenSelections[]={"camo1"};
        hiddenSelectionsTextures[]={"\fr\gsri\headgear\data\balaclava_white_co.paa"};
        hiddenSelectionsMaterials[]={};
    };
    class W_Balaclava_white : G_Balaclava_oli 
    {
        scope = 2;
        scopeArsenal = 2;
        author = "[-GSRI-]Seenri";
        displayName="Balaclava (white)";
        hiddenSelections[]={"camo"};
        hiddenSelectionsTextures[]={"\fr\gsri\headgear\data\balaclava_white_co.paa"};
        hiddenSelectionsMaterials[]={};
    };
};