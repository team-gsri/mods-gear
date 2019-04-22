class CfgPatches {
    class gsri_Headgear {
        units[]={};
        requiredVersion=0.1;
        requiredAddons[]={"A3_Characters_F"};
        author="[-GSRI-]Seenri";
    };
};

class CfgWeapons 
{
    class H_watchcap_blk;

    class H_watchcap_wht : H_watchcap_blk
    {
        scope = 2;
        scopeArsenal = 2;
        author = "[-GSRI-]Seenri";
	    displayName="Beanie (white)";
        hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\gsri_headgear\data\woolhat_white_co"};
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
		hiddenSelectionsTextures[]={"\gsri_headgear\data\balaclava_white_co"};
		hiddenSelectionsMaterials[]={};
    };
    class W_Balaclava_white : G_Balaclava_oli 
    {
    scope = 2;
    scopeArsenal = 2;
    author = "[-GSRI-]Seenri";
	displayName="Balaclava (white)";
    hiddenSelections[]={"camo"};
	hiddenSelectionsTextures[]={"\gsri_headgear\data\balaclava_white_co"};
	hiddenSelectionsMaterials[]={};
    };
};