class Rifle;
class Rifle_Base_F : Rifle {
	class WeaponSlotsInfo;
};
class arifle_MSBS65_base_F : Rifle_Base_F {
	magazineWell[] += {"CBA_556x45_STANAG"};
	class WeaponSlotsInfo: WeaponSlotsInfo {
		class CowsSlot: asdg_OpticRail1913 {
			iconPosition[] = {0.45,0.28};
			iconScale = 0.2;
		};
		class PointerSlot: asdg_FrontSideRail {
			iconPosition[] = {0.35,0.45};
			iconScale = 0.2;
		};
	};
};
