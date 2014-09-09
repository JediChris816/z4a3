class C_man_hunter_1_F;	
	
	class zZombie_Base : C_man_hunter_1_F {
		scope = public;
		side = 3;
		faction = CIV_F;
		glassesEnabled = 0;
		vehicleClass = "Zombie";
		displayName = "Zombie";
		fsmDanger = "";
		fsmFormation = "";
		zombieLoot = "civilian";
		uniformclass = "";
		moves = "CfgMovesZombie";
		isMan = false;
		weapons[] = {};
		magazines[] = {};
		speaker = "NoVoice";
		sensitivity = 6;	// sensor sensitivity
		sensitivityEar = 4;
		identityTypes[] = {"Head_O1", "Head_O2", "Head_O3"};
		
		class Eventhandlers {
			init = "_this call zombie_initialize;";
			local = "if(_this select 1) then {[(position (_this select 0)),(_this select 0),true] execFSM '\z\AddOns\dayz_code\system\zombie_agent.fsm'};this setdamage 0.45;";
		};
		
		class HitPoints {
			class HitHead {
				armor = 0.3;
				material = -1;
				name = "head_hit";
				passThrough = true;
				memoryPoint = "pilot";
			};
			
			class HitBody : HitHead {
				armor = 1.6;
				name = "body";
				memoryPoint = "aimPoint";
			};
			
			class HitSpine : HitHead {
				armor = 1.6;
				name = "Spine2";
				memoryPoint = "aimPoint";
			};
			
			class HitHands : HitHead {
				armor = 0.5;
				material = -1;
				name = "hands";
				passThrough = true;
			};
			
			class HitLArm : HitHands {
				name = "LeftArm";
				memoryPoint = "lelbow";
			};
			
			class HitRArm : HitHands {
				name = "RightArm";
				memoryPoint = "relbow";
			};
			
			class HitLForeArm : HitHands {
				name = "LeftForeArm";
				memoryPoint = "lwrist";
			};
			
			class HitRForeArm : HitHands {
				name = "RightForeArm";
				memoryPoint = "rwrist";
			};
			
			class HitLHand : HitHands {
				name = "LeftHand";
				memoryPoint = "LeftHandMiddle1";
			};
			
			class HitRHand : HitHands {
				name = "RightHand";
				memoryPoint = "RightHandMiddle1";
			};
			
			class HitLegs : HitHands {
				name = "legs";
				memoryPoint = "pelvis";
			};
			
			class HitLLeg : HitHands {
				name = "LeftLeg";
				memoryPoint = "lknee";
			};
			
			class HitLLegUp : HitHands {
				name = "LeftUpLeg";
				memoryPoint = "lfemur";
			};
			
			class HitRLeg : HitHands {
				name = "RightLeg";
				memoryPoint = "rknee";
			};
			
			class HitRLegUp : HitHands {
				name = "RightUpLeg";
				memoryPoint = "rfemur";
			};
		};
	};
	class z_villager3 : zZombie_Base {
	    author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "C_man_p_beggar_F";
		model = "\A3\characters_F\civil\c_poor";
		uniformClass = "";
		moves = "CfgMovesZombie2";
		displayName = "$STR_A3_C_man_p_beggar_F0";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"A3\characters_f\civil\data\c_cloth1_v2_co.paa"};
	};
	class z_villager2 : zZombie_Base {
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "B_RangeMaster_F";
		scope = 2;
		model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		identityTypes[] = {"Head_Rangemaster", "G_Rangemaster"};
		uniformClass = "";
		vehicleClass = "Zombie";
		moves = "CfgMovesZombie3";
		Items[] = {};
		respawnItems[] = {};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\c_poloshirtpants_1_co.paa"};
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"V_Rangemaster_belt"};
		respawnlinkedItems[] = {"V_Rangemaster_belt"};
		
		class Wounds {
			tex[] = {};
			mat[] = {"A3\Characters_F\Civil\Data\c_poloshirtpants.rvmat", "A3\Characters_F\Civil\Data\c_poloshirtpants_injury.rvmat", "A3\Characters_F\Civil\Data\c_poloshirtpants_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_old.rvmat", "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat", "A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	};
	class z_deadsurvivor : zZombie_Base {
		_generalMacro = "B_RangeMaster_F";
		scope = 2;
		model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		moves = "CfgMovesZombie2";
		vehicleClass = "Zombie";
		Items[] = {};
		respawnItems[] = {};
		identityTypes[] = {"Head_Rangemaster", "G_Competitor"};
		uniformClass = "";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Beta\Civil\Data\c_competitor_co.paa"};
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"V_Rangemaster_belt"};
		respawnlinkedItems[] = {"V_Rangemaster_belt"};
		
		class Wounds {
			tex[] = {};
			mat[] = {"A3\Characters_F\Civil\Data\c_poloshirtpants.rvmat", "A3\Characters_F\Civil\Data\c_poloshirtpants_injury.rvmat", "A3\Characters_F\Civil\Data\c_poloshirtpants_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_old.rvmat", "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat", "A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	};
	class z_villager1 : zZombie_Base {
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "B_Story_Protagonist_F";
		scope = 2;
		displayName = "$STR_A3_character_Kerry";
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		uniformClass = "";
		moves = "CfgMovesZombie2";
		vehicleClass = "Zombie";		
		Items[] = {};
		respawnItems[] = {};
		weapons[] = {"Throw", "Put"};
		respawnweapons[] = {"Throw", "Put"};
		magazines[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnlinkedItems[] = {};
		faceType = "Kerry";
		identityTypes[] = {"Kerry", "G_NATO_default"};
	};
	class z_policeman : zZombie_Base {
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "C_Nikos";
		model = "\A3\characters_F\civil\c_Nikos";
		displayName = "Nikos";
		vehicleClass = "Zombie";		
		identityTypes[] = {"Nikos", "NoGlasses"};
		uniformClass = "";
		
		class Wounds {
			tex[] = {};
			mat[] = {"A3\Characters_F\Civil\Data\nikos.rvmat", "A3\Characters_F\Civil\Data\nikos_injury.rvmat", "A3\Characters_F\Civil\Data\nikos_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat"};
		};
	};
	
	
	class z_soldier : zZombie_Base {
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "C_Orestes";
		model = "\A3\characters_F\civil\c_orestes";
		vehicleClass = "Zombie";		
		displayName = "Orestes";
		uniformClass = "";
		
		class Wounds {
			tex[] = {};
			mat[] = {"A3\Characters_F\Civil\Data\orestes.rvmat", "A3\Characters_F\Civil\Data\orestes_injury.rvmat", "A3\Characters_F\Civil\Data\orestes_injury.rvmat"};
		};
	};
	
	class z_soldier_pilot : zZombie_Base {
		scope = public;
		side = 3;
		faction = CIV_F;
		glassesEnabled = 0;
		vehicleClass = "Zombie";
		displayName = "Zombie";
		fsmDanger = "";
		fsmFormation = "";
		zombieLoot = "civilian";
		uniformclass = "";
		moves = "CfgMovesZombie";
		isMan = false;
		weapons[] = {};
		magazines[] = {};
		speaker = "NoVoice";
		sensitivity = 6;	// sensor sensitivity
		sensitivityEar = 4;
		identityTypes[] = {"Head_O1", "Head_O2", "Head_O3"};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		class Eventhandlers {
			init = "_this call zombie_initialize;";
			local = "if(_this select 1) then {[(position (_this select 0)),(_this select 0),true] execFSM '\z\AddOns\dayz_code\system\zombie_agent.fsm'};";
		};
	};
	
	class z_soldier_heavy : zZombie_Base {
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "I_G_Soldier_base_F";
		expansion = 1;
		identityTypes[] = {"LanguageGRE_F", "Head_Greek", "G_GUERIL_default"};
		faceType = "Man_A3";
		side = 2;
		faction = IND_G_F;
		genericNames = "GreekMen";
		vehicleClass = "Zombie";
		portrait = "";
		picture = "";
		icon = "iconMan";
		accuracy = 3.9;
		sensitivity = 2;
		threat[] = {1, 0.1, 0.1};
		camouflage = 1.1;
		minFireTime = 10;
		cost = 100000;
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		modelSides[] = {2, 3};
		uniformClass = "";
		canCarryBackPack = 1;
		scope = 0;
		
		class Wounds {
			tex[] = {};
			mat[] = {"A3\Characters_F\Civil\Data\c_cloth1.rvmat", "A3\Characters_F\Civil\Data\c_cloth1_injury.rvmat", "A3\Characters_F\Civil\Data\c_cloth1_injury.rvmat", "A3\Characters_F\Civil\Data\c_cloth2.rvmat", "A3\Characters_F\Civil\Data\c_cloth2_injury.rvmat", "A3\Characters_F\Civil\Data\c_cloth2_injury.rvmat", "A3\Characters_F\Civil\Data\c_cloth3.rvmat", "A3\Characters_F\Civil\Data\c_cloth3_injury.rvmat", "A3\Characters_F\Civil\Data\c_cloth3_injury.rvmat", "A3\Characters_F\Civil\Data\c_cloth4.rvmat", "A3\Characters_F\Civil\Data\c_cloth4_injury.rvmat", "A3\Characters_F\Civil\Data\c_cloth4_injury.rvmat", "A3\characters_f\civil\data\c_poloshirt.rvmat", "A3\Characters_F\Civil\Data\c_poloshirt_injury.rvmat", "A3\Characters_F\Civil\Data\c_poloshirt_injury.rvmat", "A3\characters_f\common\data\coveralls.rvmat", "A3\Characters_F\Common\Data\coveralls_injury.rvmat", "A3\Characters_F\Common\Data\coveralls_injury.rvmat", "A3\Characters_F\Civil\Data\hunter.rvmat", "A3\Characters_F\Civil\Data\hunter_injury.rvmat", "A3\Characters_F\Civil\Data\hunter_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_old.rvmat", "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat", "A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	};
	class z_DN_zed: zZombie_Base /// class visible in editor
	{
		displayName = "DN zombie Policeman"; /// what's displayed in editor or on cursor over
		model = "\deadnation\models\zed.p3d"; /// path to model				
		uniformClass = "U_zed_uniform";
		moves = "CfgMovesZombie4";
		backpack = "";
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"DN_zedcap"}; /// items directly in inventory slots
		respawnLinkedItems[] = {"DN_zedcap"};
	};
	class z_DN_officer: zZombie_Base /// class visible in editor
	{
		displayName = "DN Officer zombie"; /// what's displayed in editor or on cursor over
		model = "\deadnation\models\zedofficer.p3d"; /// path to model
		uniformClass = "U_officer_uniform";
		moves = "CfgMovesZombie";
		backpack = "";
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"DN_hatofficer"}; /// items directly in inventory slots
		respawnLinkedItems[] = {"DN_hatofficer"};
	};
	class z_DN_zedwoman: zZombie_Base /// class visible in editor
	{
		displayName = "DN Woman zombie"; /// what's displayed in editor or on cursor over
		model = "\deadnation\models\zedwoman.p3d"; /// path to model
		uniformClass = "U_zedwoman_uniform";
		moves = "CfgMovesZombie3";
		backpack = "";
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {}; /// items directly in inventory slots
		respawnLinkedItems[] = {};
	};
	class z_DN_zedmalebig: zZombie_Base /// class visible in editor
	{
		displayName = "DN Big zombie"; /// what's displayed in editor or on cursor over
		zombieLoot = "military";
		model = "\deadnation\models\zedmalebig.p3d"; /// path to model
		uniformClass = "U_zedmalebig_uniform";
		moves = "CfgMovesZombie";
		backpack = "";
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {}; /// items directly in inventory slots
		respawnLinkedItems[] = {};
	};