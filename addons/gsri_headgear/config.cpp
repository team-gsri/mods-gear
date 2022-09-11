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
    // Hiding the legacy beret
    class ItemCore;
    class gsri_le_beret : ItemCore {
        author = "$STR_GSRI_AUTHOR_SEENRI";
        scope = 1;
        scopeArsenal = 0;
        displayName = "OBSOLETE";
        descriptionShort = "OBSOLETE, WILL BE REMOVED, USE NEW ITEM";
    };
};    
