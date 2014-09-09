    
    class B_AssaultPack_blkDN : Bag_Base {
		scope = 2;
		picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_blk_ca.paa";
		displayName = "$STR_A3_B_AssaultPack_blk0";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_compact_blk_co.paa"};
		transportMaxWeapons = 1;
		transportMaxMagazines = 10;
        mass = 40;
        maximumload = 100;
    };
	
	class B_FieldPack_blkDN : Bag_Base {
		scope = 2;
		displayName = "$STR_A3_B_FieldPack_blk0";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_gorod_blk_co.paa"};
		transportMaxWeapons = 2;
		transportMaxMagazines = 16;
        mass = 50;
        maximumload = 100;
	};
	class B_Kitbag_BaseDN : Bag_Base {
		picture = "\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_rgr";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_rgr_co.paa"};
		transportMaxWeapons = 3;
		transportMaxMagazines = 15;
        mass = 70;
        maximumload = 150;
	};	
	class B_Bergen_BaseDN : B_Kitbag_BaseDN {
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_small_co.paa"};
		transportMaxWeapons = 3;
		transportMaxMagazines = 15;
        mass = 70;
        maximumload = 150;
	};
	class B_Carryall_oucamoDN : Bag_Base {
		scope = 2;
		displayName = "$STR_A3_B_Carryall_oucamo0";
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_oucamo.paa";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_tortila_oucamo_co.paa"};
		transportMaxWeapons = 3;
		transportMaxMagazines = 20;
        mass = 70;
        maximumload = 200;
	};