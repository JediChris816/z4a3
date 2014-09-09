class CfgVehicles {
	class AllVehicles;
	class Air : AllVehicles
	{
		class NewTurret;
		class ViewPilot;
		class AnimationSources;
	};
	class Helicopter : Air
	{
		class HitPoints;
		class Turrets
        {
            class MainTurret: NewTurret
            {
                class Turrets;
				class ViewOptics;
            };
        };
	};


	//External Class
	class Ship;
	class House;
	class House_F;
	class Land_Wreck_Heli_Attack_01_F;
	class SpawnableWreck : Land_Wreck_Heli_Attack_01_F {};
	class Strategic;
	class NonStrategic;
	class Land_FirePlace_F;
	class Animal;
	class Bag_Base;

	#include "CfgVehicles\RepairParts.hpp" //names for all reapir parts. Needs moving to hitpoints
	//ZEDS
	#include "CfgVehicles\Zeds\Zeds.hpp" //old type zeds
	//#include "CfgVehicles\Zeds\ViralZeds.hpp" //Viral type zeds
	//#include "CfgVehicles\Zeds\WildZeds.hpp" //Viral type zeds
	//Survivor Skins
	//#include "CfgVehicles\Skins.hpp"
	//Bags
	#include "CfgVehicles\Bags.hpp"
	//DZAnimal and DZ_Fin
	//#include "CfgVehicles\Animal.hpp"

	//Includes all DayZ Vehilces
	//Car's
	#include "CfgVehicles\Car\DN_Offroad_01_F.hpp"
	//Helicopter's
	//Wreck's
	#include "CfgVehicles\Wrecks\wrecks.hpp"
	//Plane's
	//Bikes
	//Boat

	//Includes all Building Stuff
	// This parent class is made to make referring t
	//Fire
	//Buildings

	//camo


	//WeaponHolder
	#include "CfgVehicles\WeaponHolder.hpp"

	//itemBox's
	//#include "CfgVehicles\CardboardBox.hpp"

	//Tents,storage
	#include "CfgVehicles\Storage.hpp"
	
	// Traps
	#include "CfgVehicles\Traps.hpp"

	//Antihack
	#include "CfgVehicles\antihack_logic.hpp"
	#include "CfgVehicles\antihack_plants.hpp"
	
	//WorldPlants
	class Building;
	class Plant_Base: Building {
		scope = 2;
		displayname = "Plant Sphere 100cm";
		favouritezones = "(meadow) * (forest) * (1 - House_Fs) * (1 - sea)";
	};
	class Dayz_Plant1: Plant_Base {
		displayname = $STR_ITEM_NAME_comfrey;
		output = "equip_comfreyleafs";
		outamount = "1";
		favouritezones = "(meadow) * (forest) * (1 - House_Fs) * (1 - sea)";
		model = "z\addons\dayz_communityassets\models\comfrey_up_mid.p3d";
	};
	class Dayz_Plant2: Plant_Base {
		displayname = $STR_ITEM_NAME_comfrey;
		output = "equip_comfreyleafs";
		outamount = "1";
		favouritezones = "(meadow) * (forest) * (1 - House_Fs) * (1 - sea)";
		model = "z\addons\dayz_communityassets\models\comfrey_up_small.p3d";
	};
	class Dayz_Plant3: Plant_Base {
		displayname = $STR_ITEM_NAME_comfrey;
		output = "equip_comfreyleafs";
		outamount = "1";
		favouritezones = "(meadow) * (forest) * (1 - House_Fs) * (1 - sea)";
		model = "z\addons\dayz_communityassets\models\comfrey_up.p3d";
	};

	class BuiltItems;
	class Wire_cat1 : BuiltItems {
		displayName = $STR_BUILT_WIRE1;
	};
	
	class Wire_cat2 : Wire_cat1 {
		displayName = $STR_BUILT_WIRE2;
	};
	
	class Hedgehog_DZ : BuiltItems {
		displayName = $STR_BUILT_HEDGEHOG;
	};
	
	class Sandbag1_DZ : BuiltItems {
		displayName = $STR_BUILT_SANDBAG;
	}; 
};
