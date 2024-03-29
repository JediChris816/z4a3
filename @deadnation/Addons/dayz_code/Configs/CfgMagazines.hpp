class CfgMagazines {
	class CA_Magazine;	// External class reference
	class FoodDrink; //External class reference
	class ItemSodaEmpty; //External class reference
	class FoodEdible; //External class reference
	class TrashTinCan; //External class reference
	class HandGrenade; //External class reference
	
	class SurvivalPack: CA_Magazine {
		scope = 2;
		ammo = "SurvivalPack";
		count = 1;
        mass = 3;
		descriptionshort = "Medical pack for universal needs.";
		displayname = "Survival Medical Pack";
		model = "\A3\Weapons_F\Items\FirstAidkit";
		picture = "\A3\Weapons_F\Items\data\UI\gear_FirstAidKit_CA.paa";
		initSpeed = 0;
	};
	class Quiver : CA_Magazine {
		scope = public;
		ammo = "WoodenArrow";
		count = 6;
		type = 256;
		descriptionShort = $STR_ITEMQUIVER_CODE_DESC;
		displayName = $STR_ITEMQUIVER_CODE_NAME;
		initSpeed = 150;
		model = "\z\addons\dayz_communityassets\models\quiver";
		picture = "\z\addons\dayz_communityassets\pictures\equip_quiver_ca.paa";
		class ItemActions {
			class TakeArrow {
				text = $STR_ACTION_TAKEARROW;
				script = "spawn player_takearrow;";
			};
			class FillQuiver {
				text = $STR_ACTION_FILLQUIVER;
				script = "spawn player_fillquiver;";
			};
		};
	};
	
	class WoodenArrow : CA_Magazine {
		scope = public;
		displayName = $STR_ITEMWOODENARROW_CODE_NAME;
		model = "\dayz_weapons\models\bolt_gear";
		picture = "\z\addons\dayz_communityassets\pictures\equip_warrow_ca.paa";
		ammo = "WoodenArrow";
		count = 1;
		initSpeed = 150;
		descriptionShort = $STR_ITEMWOODENARROW_CODE_DESC;
		
		class ItemActions {
			class CreateQuiver {
				text = $STR_ACTION_CREATEQUIVER;
				script = "spawn player_createquiver;";
			};
		};
	};
	
	class ItemSoda : FoodDrink {
		scope = public;
		sfx = "soda";
		sfxdis = 3;
	};
	
	class FoodRaw : FoodEdible {
		scope = public;
		count = 1;
		type = 256;
	};
	
	class FoodCooked : FoodEdible {
		scope = public;
		count = 1;
	};
	
	//add here any magazines types you want to be re-combined like shown before
	
	#include "CfgMagazines\CombineMag.hpp"
	#include "CfgMagazines\FoodEdible.hpp"
	#include "CfgMagazines\FoodCooked.hpp"
	#include "CfgMagazines\FoodRaw.hpp"
	#include "CfgMagazines\ItemSoda.hpp"
	#include "CfgMagazines\ItemSodaEmpty.hpp"
	#include "CfgMagazines\MeleeSwing.hpp"
	#include "CfgMagazines\TrashTinCan.hpp"
	#include "CfgMagazines\Deployable.hpp"
	#include "CfgMagazines\TrashLoot.hpp"
	//Chemlight and Roadflare
	#include "CfgMagazines\HandGrenade.hpp"
	//Skins
	//#include "CfgMagazines\Skin.hpp"
	//Fuelcan
	#include "CfgMagazines\Fuelcan.hpp"
	#include "CfgMagazines\Jerrycan.hpp"
	//medical
	#include "CfgMagazines\medical.hpp"
	
	
	//crafting
	#include "CfgCrafting\Mats.hpp"
	
	class PartWoodPile : CA_Magazine {
		scope = public;
		count = 1;
		type = (256 * 2);
		displayName = $STR_EQUIP_NAME_40;
		model = "\dayz_equip\models\woodPile.p3d";
		picture = "\dayz_equip\textures\equip_woodPile_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_40;
	};
	
	class PartWoodLumber: CA_Magazine {
		scope = 2;
		count = 1;
		type = 256 * 4;
		displayName = "Lumber";
		model = "\z\addons\dayz_communityassets\models\planks.p3d";
		picture = "\dayz_equip\textures\equip_woodPile_ca.paa";
		descriptionShort = "Lumber: Used for building many structures and can also be used to make plywood.";
	};
	
};
