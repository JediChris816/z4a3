class Mode_SemiAuto;	// External class reference
class Mode_FullAuto;	// External class reference
class Mode_Burst;		// External class reference

class DZ_SingleMelee; 	// External class reference
class CfgWeapons {
	class Default {
		canlock = 0;
	};
	class ItemCore;
	class Crossbow;
	class Rifle;
	class MeleeWeapon : Rifle {
		canDrop = true;
		class Single : DZ_SingleMelee {
			displayName = $STR_ACTION_HACK;
		}; 
	};
	class PistolCore;
	class Pistol;
	class GrenadeLauncher;
	
	#include "CfgWeapons\Melee\MeleeMachete.hpp"
	#include "CfgWeapons\Melee\ItemMachete.hpp"
	#include "CfgWeapons\Melee\MeleeHatchet.hpp"
	#include "CfgWeapons\Melee\ItemHatchet.hpp"
	#include "CfgWeapons\Melee\MeleeCrowbar.hpp"
	#include "CfgWeapons\Melee\ItemCrowbar.hpp"
	#include "CfgWeapons\Melee\Crossbow.hpp"
	#include "CfgWeapons\Melee\MeleeBaseBallBat.hpp"
	#include "CfgWeapons\Melee\MeleeBaseBallBatBarbed.hpp"
	#include "CfgWeapons\Melee\MeleeBaseBallBatNails.hpp"
	#include "CfgWeapons\Melee\MeleeFishingPole.hpp"
	
	#include "CfgWeapons\Item\ItemWatch.hpp"
	#include "CfgWeapons\Item\ItemMap.hpp"
	#include "CfgWeapons\Item\ItemMap_Debug.hpp"
	#include "CfgWeapons\Item\ItemCompass.hpp"
	#include "CfgWeapons\Item\Flashlight.hpp"
	#include "CfgWeapons\Item\Flare.hpp"
	#include "CfgWeapons\Item\ItemEtool.hpp"
	#include "CfgWeapons\Item\ItemShovel.hpp"
	#include "CfgWeapons\Item\ItemFishingPole.hpp"
	
	//Pistols
	
	//Sniper
};