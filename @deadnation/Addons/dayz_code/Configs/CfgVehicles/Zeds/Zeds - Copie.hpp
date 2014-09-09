    class DN_zedmalebig;	// External class reference
	
	class zZombie_Base : DN_zedmalebig {
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
		modelSides[] = {2};
		isMan = false;
		weapons[] = {};
		magazines[] = {};
		speaker = "NoVoice";
		sensitivity = 6;	// sensor sensitivity
		sensitivityEar = 4;
		identityTypes[] = {"Head_O1", "Head_O2", "Head_O3"};
		
		class Eventhandlers {
			init = "_this call zombie_initialize;";
			local = "if(_this select 1) then {[(position (_this select 0)),(_this select 0),true] execFSM '\z\AddOns\dayz_code\system\zombie_agent.fsm'};";
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
	    _generalMacro = "C_man_w_worker_F";
		model = "\A3\characters_F\civil\c_poor";
		uniformClass = "U_C_Po2";
		displayName = "zombie villager3";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"A3\characters_f\civil\data\c_cloth1_v2_co.paa"};
		zombieLoot = "civilian";
		moves = "CfgMovesZombie2"; 
		head = "MaleAfricanHead_01";
		identityTypes[] = {"Head_O2"};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
	};
	class z_villager2 : zZombie_Base {
		_generalMacro = "C_man_w_worker_F";
		model = "\A3\characters_F\common\coveralls";
		zombieLoot = "civilian";
		uniformClass = "U_C_Worke";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\coveralls_bandit_co.paa"};
		displayName = "zombie villager2";
		moves = "CfgMovesZombie3"; 
		head = "MaleAfricanHead_01";
		identityTypes[] = {"Head_O2"};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		
		class HitPoints : HitPoints {
			class HitBody : HitBody {
				armor = 0.6*10;
			};
			
			class HitHands : HitHands {
				armor = 0.5*5;
			};
			
			class HitLegs : HitLegs {
				armor = 0.5*5;
			};
		};
	};
	class z_deadsurvivor : zZombie_Base {
		displayName = "Dead Survivor";
		model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";		
		hiddenSelections[] = {"Camo"};
		uniformClass = "U_C_Polo";
		hiddenSelectionsTextures[] = {"\charextras\textures\c_poloshirtpants_1_co.paa"};
		moves = "CfgMovesZombie4"; 
		zombieLoot = "civilian";
		head = "MaleAfricanHead_01";
		identityTypes[] = {"Head_O2"};		
		weapons[] = {"Throw", "Put"};
		backpack = "B_AssaultPack_blkDN";
		respawnWeapons[] = {"Throw", "Put"};
		magazines[] = {"16Rnd_9x21_Mag", "Itembandage", "16Rnd_9x21_Mag"};
		respawnMagazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "Itembandage"};
		linkeditems[] = {"V_Rangemaster_belt", "Tan_Backwards_hat"};
		respawnlinkeditems[] = {"V_Rangemaster_belt", "Tan_Backwards_hat"};
		
		class Wounds {
			tex[] = {};
			mat[] = {"A3\Characters_F\Civil\Data\c_poloshirtpants.rvmat", "A3\Characters_F\Civil\Data\c_poloshirtpants_injury.rvmat", "A3\Characters_F\Civil\Data\c_poloshirtpants_injury.rvmat"};
		};
	};
	class z_villager1 : zZombie_Base {
		displayName = "Zombie Orestes";
		zombieLoot = "civilian";
		model = "\A3\characters_F\civil\c_orestes";
		uniformClass = "U_OrestesDN";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\charextras\textures\orestes_co.paa"};
		moves = "CfgMovesZombie2"; 
		head = "MaleAfricanHead_01";
		identityTypes[] = {"Head_O2"};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		
		class Wounds {
			tex[] = {};
			mat[] = {"A3\Characters_F\Civil\Data\orestes.rvmat", "A3\Characters_F\Civil\Data\orestes_injury.rvmat", "A3\Characters_F\Civil\Data\orestes_injury.rvmat"};
		};
	};
	class z_policeman : zZombie_Base {
		displayName = "Zombie policeman";
		zombieLoot = "military";
		model = "\A3\characters_F\civil\c_hunter_f";
		uniformClass = "U_C_Hunter";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\charextras\textures\hunter_bushman_co.paa"};
		moves = "CfgMovesZombie3"; 
		head = "MaleAfricanHead_01";
		identityTypes[] = {"Head_O1"};
		linkedItems[] = {"H_Booniehat_grn", "ItemWatch"};
		respawnLinkedItems[] = {"H_Booniehat_grn", "ItemWatch"};
	};
	
	
	class z_soldier : zZombie_Base {
		displayName = "Zombie Soldier";
		zombieLoot = "military";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass = "U_C_Coverall_grey";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\charextras\textures\clothing1_co.paa"};
		moves = "CfgMovesZombie4"; 
		head = "MaleAfricanHead_01";
		identityTypes[] = {"Head_OO"};
		linkeditems[] = {"V_Rangemaster_belt", "H_HelmetB_light"};
		respawnlinkeditems[] = {"V_Rangemaster_belt", "H_HelmetB_light"};
		
	};
	
	class z_soldier_pilot : zZombie_Base {
		displayName = "Zombie Soldier";
		zombieLoot = "military";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass = "U_C_Coverall_grey";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\charextras\textures\clothing1_co.paa"};
		moves = "CfgMovesZombie3"; 
		head = "MaleAfricanHead_01";
		identityTypes[] = {"Head_O1"};
		linkeditems[] = {"V_Rangemaster_belt"};
		respawnlinkeditems[] = {"V_Rangemaster_belt"};
	};
	
	class z_soldier_heavy : zZombie_Base {
		displayName = "Zombie Soldier";
		zombieLoot = "military";
		model = "\A3\Characters_F\Common\coveralls.p3d";
		uniformClass = "U_C_Coverall_grey";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\charextras\textures\coveralls_urbancamo_co.paa"};
		moves = "CfgMovesZombie3"; 
		head = "MaleAfricanHead_01";
		identityTypes[] = {"Head_O2"};
		linkeditems[] = {"V_Rangemaster_belt"};
		respawnlinkeditems[] = {"V_Rangemaster_belt"};
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