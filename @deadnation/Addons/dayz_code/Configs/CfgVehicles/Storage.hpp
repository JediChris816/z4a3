class Land_TentDome_F;
class StashSmall : Land_TentDome_F {
	armor = 5;
	displayname = $STR_VEH_NAME_STASH;
	icon = "iconObject_circle";
	mapsize = 3;
	model = "\z\addons\dayz_communityassets\models\dirt_stash.p3d";
	scope = 2;
	vehicleClass = "Survival";
	transportMaxMagazines = 12;
	transportMaxWeapons = 0;
	transportMaxBackpacks = 0;
};

//class House;
class StashMedium : Land_TentDome_F {
	armor = 50;
	displayname = $STR_VEH_NAME_STASH_MED;
	icon = "iconObject_circle";
	mapsize = 3;
	model = "\z\addons\dayz_communityassets\models\dirt_stash_reinforced.p3d";
	scope = 2;
	vehicleClass = "Survival";
	transportMaxMagazines = 25;
	transportMaxWeapons = 1;
	transportMaxBackpacks = 0;
};

class DomeLand_TentDome_F : Land_TentDome_F {
	displayname = $STR_VEH_NAME_DOME_TENT;
	icon = "iconObject_circle";
	mapsize = 3;
	model = "\A3\Structures_F\Civ\Camping\TentDome_F.p3d";
	armor = 10;
	destrtype = "DestructTent";
	vehicleClass = "Survival";
	transportMaxMagazines = 35;
	transportMaxWeapons = 15;
	transportMaxBackpacks = 0;
};