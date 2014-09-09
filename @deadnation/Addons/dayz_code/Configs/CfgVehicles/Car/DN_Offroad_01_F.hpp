    class C_Offroad_01_F;
	
	class DN_Offroad_01_F : C_Offroad_01_F {
		scope = 2;
		side = 3;
		crew = "";
		displayName = "Old Offroad";
		typicalCargo[] = {};
		
		class Library {
			libTextDesc = "$STR_A3_CfgVehicles_Offroad_Base_Library0";
		};
		model = "\A3\soft_f\Offroad_01\Offroad_01_unarmed_F";
		picture = "\A3\soft_f\Offroad_01\Data\UI\Offroad_01_base_CA.paa";
		Icon = "\A3\soft_f\Offroad_01\Data\UI\map_offroad_01_CA.paa";
		accuracy = 0.25;
		transportSoldier = 5;
		transportMaxBackpacks = 0;
		armor = 32;
		cost = 50000;
		weapons[] = {"SportCarHorn"};
		
		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 0;
			};
		};
		showNVGCargo[] = {0, 1};
		soundAttenuationCargo[] = {1, 0};
		hiddenSelections[] = {"camo", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"\dayz\textures\test1.paa", "\dayz\textures\test2.paa", "\dayz\textures\test3.paa"};
		
		class eventHandlers {
			init = "(_this select 0) execVM ""\dayz\textures\randomize.sqf""";
		};
		
	};	