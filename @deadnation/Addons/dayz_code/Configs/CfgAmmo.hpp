class CfgAmmo {
	class BulletBase;
    class SurvivalPack : BulletBase
	{
		model = "\A3\Weapons_F\Items\FirstAidkit";
		hit = 0;
		caliber = 0;
		timeToLive = 0;
	};
	class Bolt;
	class WoodenArrow : Bolt {
		model = "\dayz_weapons\models\bolt";
		hit = 8;
		caliber = 0.33;
	};
	class Melee;
	class Machete_Swing_Ammo : Melee {
		hit = 15;
		simulation = "shotBullet";
		minRange = 1;
		minRangeProbab = 0.8;
		midRange = 2;
		midRangeProbab = 1.5;
		maxRange = 3;
		maxRangeProbab = 2.5;
		explosive = 0;
		simulationStep = 0.001;
		timeToLive = 0.03;
		soundHit[] = {"", db-90, 1};
		soundEngine[] = {"", db-80, 4};
	};
	class Hatchet_Swing_Ammo : Melee {
		hit = 12;
		simulation = "shotBullet";
		minRange = 1;
		minRangeProbab = 0.8;
		midRange = 2;
		midRangeProbab = 1.5;
		maxRange = 3;
		maxRangeProbab = 2.5;
		explosive = 0;
		simulationStep = 0.001;
		timeToLive = 0.03;
		soundHit[] = {"", db-90, 1};
		soundEngine[] = {"", db-80, 4};
	};
	class Crowbar_Swing_Ammo : Melee {
		hit = 10;
		simulation = "shotBullet";
		minRange = 1;
		minRangeProbab = 0.8;
		midRange = 2;
		midRangeProbab = 1.5;
		maxRange = 3;
		maxRangeProbab = 2.5;
		explosive = 0;
		simulationStep = 0.001;
		timeToLive = 0.03;
		soundHit[] = {"", db-90, 1};
		soundEngine[] = {"", db-80, 4};
	};
	class Fishing_Swing_Ammo : Melee {
		hit = 7;
		simulation = "shotBullet";
		minRange = 1;
		minRangeProbab = 0.8;
		midRange = 2;
		midRangeProbab = 1.5;
		maxRange = 3;
		maxRangeProbab = 2.5;
		explosive = 0;
		simulationStep = 0.001;
		timeToLive = 0.03;
		soundHit[] = {"", db-90, 1};
		soundEngine[] = {"", db-80, 4};
	};
	class Bat_Swing_Ammo : Melee {
		hit = 10;
		simulation = "shotBullet";
		minRange = 1;
		minRangeProbab = 0.8;
		midRange = 2;
		midRangeProbab = 1.5;
		maxRange = 3;
		maxRangeProbab = 2.5;
		explosive = 0;
		simulationStep = 0.001;
		timeToLive = 0.04;
		soundHit[] = {"", db-90, 1};
		soundEngine[] = {"", db-80, 4};
	};
	class BatBarbed_Swing_Ammo : Melee {
		hit = 12;
		simulation = "shotBullet";
		minRange = 1;
		minRangeProbab = 0.8;
		midRange = 2;
		midRangeProbab = 1.5;
		maxRange = 3;
		maxRangeProbab = 2.5;
		explosive = 0;
		simulationStep = 0.001;
		timeToLive = 0.03;
		soundHit[] = {"", db-90, 1};
		soundEngine[] = {"", db-80, 4};
	};
	class BatNailed_Swing_Ammo : Melee {
		hit = 12;
		simulation = "shotBullet";
		minRange = 1;
		minRangeProbab = 0.8;
		midRange = 2;
		midRangeProbab = 1.5;
		maxRange = 3;
		maxRangeProbab = 2.5;
		explosive = 0;
		simulationStep = 0.001;
		timeToLive = 0.03;
		soundHit[] = {"", db-90, 1};
		soundEngine[] = {"", db-80, 4};
	};

	// used for grenade traps
	class GrenadeHand;
	class GrenadeHandTimedWest_DZ : GrenadeHand {
		//explosiontime = 1;
		fusedistance = 0;
	};
};
