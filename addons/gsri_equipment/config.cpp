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
		author="$STR_GSRI_BACKPACKS_AUTHOR";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[] = {
			"A3_Weapons_F",
			"A3_Supplies_F_Enoch",
			"tfar_core"
		};
	};
};

class CfgVehicles {
	#include "backpacks.hpp"
};

class CfgWeapons {
    #include "headgear.hpp"
};

class CfgGlasses {
    #include "facewear.hpp"
};
