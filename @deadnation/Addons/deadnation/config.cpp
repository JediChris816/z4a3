#include "basicdefines_A3.hpp"
class DefaultEventhandlers;

class CfgPatches
{
	class deadnation
	{
		units[]={"DN_survivor"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"A3_Characters_F"};
	};
};

class UniformSlotInfo;

class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class HitPoints
		{
			class HitHead;
			class HitBody;
			class HitHands;
			class HitLegs;
		};
	};
	class SoldierWB: CAManBase
	{
		threat[] = {1, 0.1, 0.1};
	};
	class O_Soldier_base_F: CAManBase
	{
		threat[] = {1, 0.1, 0.1};
	};


	//Base class for BLUFOR soldiers
	class Test_Soldier_base_F: SoldierWB
	{
		faceType = Man_A3; /// this soldier is going to use standard faces
		side = 1; /// that means BLUFOR
		faction = BLU_F; /// Standard NATO faction
		vehicleClass = Men; /// Should be listed under Men
		
		scope = 2; /// base class should not be visible in editor
		class Wounds /// changes material of skin according to damage
		{
			tex[] = {};
			mat[] = {
				"A3\Characters_F\Common\Data\basicbody.rvmat", 			/// what material is changed
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",	/// how does the material look like in damage 0.5 and more
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",	/// how does the material look like while the part has damage 1	

				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",			/// next materials are used through personality of the soldier
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",	

				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",	
				
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",	
				
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",	
				
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",						
			};
		};

		model 			= "\deadnation\models\survivor.p3d"; /// path to model
		modelSides[] 	= {3, 1}; 				/// what sides could use this uniform, means civilians and BLUFOR can use it
		nakedUniform 	= "U_BasicBody";		/// what "uniform" does this soldier use without any other uniform
		uniformClass 	= "U_Test_uniform";		/// standard uniform used by this soldier, there is a special one defined later

		class UniformInfo /// defines allowed slots of the uniform
		{
			class SlotsInfo
			{
				class NVG : UniformSlotInfo{slotType = NVG_SLOT; };
				class Scuba : UniformSlotInfo{slotType = SCUBA_SLOT;};
				class Googles : UniformSlotInfo{slotType = GOGGLE_SLOT;};
				class Headgear : UniformSlotInfo{slotType = HEADGEAR_SLOT;};
			};
		};
		
		class HitPoints : HitPoints
		{
			class HitHead:HitHead {armor = 0.3*HeadArmourCoef;}; /// default soldier doesn't have any head armour, uses helmet
			class HitBody:HitBody {armor = 0.5*BodyArmourCoef;}; /// default soldier doesn't have protective uniform on body, uses vest
			class HitHands: HitHands {armor = 0.8*HandArmourCoef;}; /// some protection for hands by uniform
			class HitLegs: HitLegs {armor = 0.8*LegArmourCoef;}; /// some protection for legs by uniform
		};

		hiddenSelections[] = {"Camo"}; /// selection defined in sections of model that may have texture and materials changed by setObjectTexture or next parameter
		hiddenSelectionsTextures[] = {"\deadnation\textures\underwear_white_co.paa"}; /// what texture does this soldier use for camo selection

		weapons[] = {Throw, Put}; /// we have a sample weapon, why not use it? Throw and put weapons are required for grenades/mines
		respawnWeapons[] = {Throw, Put}; /// should be the same as previous most of the time
		Items[] = {}; /// one First aid kit is good to start with
		RespawnItems[] = {};
		magazines[] = {};
		respawnMagazines[] = {};		
		linkedItems[] = {DN_Vest}; /// items directly in inventory slots
		respawnLinkedItems[] = {DN_Vest};
	};
	
	class Test_zed_base_F : O_Soldier_base_F {
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "O_Soldier_base_F";
		expansion = 1;
		identityTypes[] = {"LanguagePER_F", "Head_TK", "G_IRAN_default"};
		faceType = "Man_A3";
		side = 0;
		faction = OPF_F;
		genericNames = "TakistaniMen";
		vehicleClass = "Men";
		portrait = "";
		picture = "";
		icon = "iconMan";
		accuracy = 2.3;
		sensitivity = 3;
		threat[] = {1, 0.1, 0.1};
		camouflage = 1.4;
		minFireTime = 7;
		cost = 40000;
		canCarryBackPack = 1;
		scope = 0;
		
		class Wounds {
			tex[] = {};
			mat[] = {"A3\Characters_F\OPFOR\Data\clothing.rvmat", "A3\Characters_F\OPFOR\Data\clothing_injury.rvmat", "A3\Characters_F\OPFOR\Data\clothing_injury.rvmat"};
		};
		
		class HitPoints : HitPoints {
			class HitHead : HitHead {
				armor = 0.3*2.5;
			};
			
			class HitBody : HitBody {
				armor = 0.7*10;
			};
			
			class HitHands : HitHands {
				armor = 0.9*5;
			};
			
			class HitLegs : HitLegs {
				armor = 0.9*5;
			};
		};
		model = "\A3\characters_F\OPFOR\o_soldier_01.p3d";
		modelSides[] = {0, 3};
		nakedUniform = "U_BasicBody";
		uniformClass = "U_O_CombatUniform_ocamo";
		
		class UniformInfo {
			class SlotsInfo {
				class NVG : UniformSlotInfo {
					slotType = 602;
				};
				
				class Scuba : UniformSlotInfo {
					slotType = 604;
				};
				
				class Googles : UniformSlotInfo {
					slotType = 603;
				};
				
				class Headgear : UniformSlotInfo {
					slotType = 605;
				};
			};
		};
		class EventHandlers;	// External class reference
		weapons[] = {"Throw", "Put"};
		respawnWeapons[] = {"Throw", "Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		Items[] = {};
		RespawnItems[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\OPFOR\Data\clothing_co.paa", "\A3\Characters_F\OPFOR\Data\tech_CO.paa"};
	};
	class DN_survivor: Test_Soldier_base_F /// class visible in editor
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		displayName = "DN survivor"; /// what's displayed in editor or on cursor over
		model = "\deadnation\models\survivor.p3d"; /// path to model
		uniformClass = "U_Test_uniform";
		backpack = "";
		linkedItems[] = {"DN_Vest", "ItemCompass", "ItemWatch", "ItemRadio"}; /// items directly in inventory slots
		respawnLinkedItems[] = {"DN_Vest", "ItemCompass", "ItemWatch", "ItemRadio"};
		magazines[] = {};
		respawnMagazines[] = {};
		hiddenSelections[] = {"Camo"}; /// selection defined in sections of model that may have texture and materials changed by setObjectTexture or next parameter
		hiddenSelectionsTextures[] = {"\deadnation\textures\underwear_white_co.paa"}; /// what texture does this soldier use for camo selection
	};
	class DN_zed: O_Soldier_base_F /// class visible in editor
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		displayName = "DN zombie Policeman"; /// what's displayed in editor or on cursor over
		model = "\deadnation\models\zed.p3d"; /// path to model
		uniformClass = "U_zed_uniform";
		moves = "CfgMovesZombie2";
		backpack = "";
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"DN_zedcap"}; /// items directly in inventory slots
		respawnLinkedItems[] = {"DN_zedcap"};
	};
	class DN_woman: O_Soldier_base_F /// class visible in editor
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		displayName = "DN Woman survivor"; /// what's displayed in editor or on cursor over
		model = "\deadnation\models\woman.p3d"; /// path to model
		uniformClass = "U_woman_uniform";
		moves = "CfgMovesZombie2";
		backpack = "";
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {}; /// items directly in inventory slots
		respawnLinkedItems[] = {};
	};
	class DN_boomer: O_Soldier_base_F /// class visible in editor
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		displayName = "DN Fat zombie"; /// what's displayed in editor or on cursor over
		model = "\deadnation\models\boomer.p3d"; /// path to model
		uniformClass = "U_boomer_uniform";
		moves = "CfgMovesZombie";
		backpack = "";
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {}; /// items directly in inventory slots
		respawnLinkedItems[] = {};
		armor = 50;
		cost = 1000000;
	
	};
	class DN_officer: O_Soldier_base_F /// class visible in editor
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		displayName = "DN Officer zombie"; /// what's displayed in editor or on cursor over
		model = "\deadnation\models\zedofficer.p3d"; /// path to model
		uniformClass = "U_officer_uniform";
		moves = "CfgMovesZombie2";
		backpack = "";
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"DN_hatofficer"}; /// items directly in inventory slots
		respawnLinkedItems[] = {"DN_hatofficer"};
	};
	class DN_zedwoman: O_Soldier_base_F /// class visible in editor
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		displayName = "DN Woman zombie"; /// what's displayed in editor or on cursor over
		model = "\deadnation\models\zedwoman.p3d"; /// path to model
		uniformClass = "U_zedwoman_uniform";
		moves = "CfgMovesZombie2";
		backpack = "";
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {}; /// items directly in inventory slots
		respawnLinkedItems[] = {};
	};
	class DN_zedmalebig: O_Soldier_base_F /// class visible in editor
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		displayName = "DN Big zombie"; /// what's displayed in editor or on cursor over
		model = "\deadnation\models\zedmalebig.p3d"; /// path to model
		uniformClass = "U_zedmalebig_uniform";
		moves = "CfgMovesZombie";
		backpack = "";
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {}; /// items directly in inventory slots
		respawnLinkedItems[] = {};
	};
	class DN_medic: O_Soldier_base_F /// class visible in editor
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		displayName = "DN Medic zombie"; /// what's displayed in editor or on cursor over
		model = "\deadnation\models\test.p3d"; /// path to model
		uniformClass = "U_zedmedic_uniform";
		moves = "CfgMovesZombie2";
		backpack = "";
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"DN_maskmed"}; /// items directly in inventory slots
		respawnLinkedItems[] = {"DN_maskmed"};
	};
	class ReammoBox;
	class B_Carryall_Base : ReammoBox {
		scope = 1;
		
		class TransportMagazines {};
		
		class TransportWeapons {};
		isbackpack = 1;
		reversed = 1;
		mapSize = 2;
		vehicleClass = "Backpacks";
		allowedSlots[] = {901};
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Small";
		displayName = "$STR_A3_Bag_Base0";
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\ui\backpack_CA.paa";
		icon = "iconBackpack";
		transportMaxWeapons = 1;
		transportMaxMagazines = 20;
		
		class DestructionEffects {};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_small_co.paa"};
		maximumLoad = 0;
	};
	
	class DN_backpack1 : B_Carryall_Base {
		displayName  = "Large Backpack";
		picture = "\deadnation\textures\icobackpack1.paa"; /// this icon fits the vest surprisingly well
		model   = "\deadnation\models\backpack1.p3d"; /// what model does the vest use
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\deadnation\textures\camo.paa"}; /// what texture is going to be used
		maximumLoad = 260;
		mass = 20;
	};
};

class cfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;
	#include "cfgUniforms.hpp"	/// sample uniform is defined in a separate file to make it cleaner
	#include "cfgVests.hpp"		/// sample vest is defined in a separate file to make it cleaner
	#include "cfgHeadgear.hpp"	/// sample cap is defined in a separate file to make it cleaner
};