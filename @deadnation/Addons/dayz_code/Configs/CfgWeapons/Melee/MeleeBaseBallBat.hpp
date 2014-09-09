class MeleeBaseBallBat: MeleeWeapon
	{
		scope=2;
		melee= "true";
		autoreload=1;
		magazineReloadTime=0;
		model="\z\addons\dayz_communityassets\models\baseball_bat_weaponized.p3d";
		picture="\z\addons\dayz_communityassets\pictures\equip_baseball.paa";
		displayName=$STR_EQUIP_NAME_BASEBALLBAT;
		descriptionShort=$STR_EQUIP_DESC_BASEBALLBAT;
		droppeditem= "MeleeBaseBallBat";
		magazines[]=
		{
			"Bat_Swing"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\dayz_weapons\anim\melee_hatchet_holding.rtm"
		};
		class Library
		{
			libTextDesc="$STR_EQUIP_DESC_BASEBALLBAT";
		};
	};