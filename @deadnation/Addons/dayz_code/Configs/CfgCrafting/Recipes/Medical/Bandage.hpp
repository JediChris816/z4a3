class Blueprint_Bandage : Recipe {
	displayName = $STR_CRAFT_NAME_Bandage;
	input[] = 
	{
		{"equip_rag","CfgMagazines",2},
		{"equip_gauze","CfgMagazines",2},
		{"equip_string","CfgMagazines",1}
	};
	output[] = 
	{
		{"ItemBandage","CfgMagazines",2}
	};
	required[] = 
	{
	};
};

class Blueprint_Bandage_Packaged : Recipe {
	displayName = $STR_CRAFT_NAME_Bandage;
	input[] = 
	{
		{"equip_rag","CfgMagazines",2},
		{"equip_gauzepackaged","CfgMagazines",1},
		{"equip_string","CfgMagazines",1}
	};
	output[] = 
	{
		{"ItemBandage","CfgMagazines",2}
	};
	required[] = 
	{
	};
};

class Blueprint_Survival : Recipe {
	displayName = "Survival Kit";
	input[] = 
	{
		{"ItemBandage","CfgMagazines",1},
		{"ItemEpinephrine","CfgMagazines",1}
	};
	output[] = 
	{
		{"SurvivalPack","CfgMagazines",1}
	};
	required[] = 
	{
	};
};