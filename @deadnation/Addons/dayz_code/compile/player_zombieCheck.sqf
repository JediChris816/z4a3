private["_listTalk","_isZombie","_group","_eyeDir","_attacked","_continue","_type","_chance","_last","_audial","_distance","_refObj","_list","_scaleMvmt","_scalePose","_scaleLight","_anim","_activators","_nearFire","_nearFlare","_scaleAlert","_inAngle","_scaler","_initial","_tPos","_zPos","_cantSee"];
_refObj = vehicle player;
_listTalk = (getPos _refObj) nearEntities ["zZombie_Base",30];
_pHeight = (getPosATL _refObj) select 2;
_attacked = false;
//_multiplier = 1;

//Old System

{
	_continue = true;
	_type = "zombie";
	_targets = [];

	if (alive _x && _continue) then {
		private["_dist"];
		_dist = (_x distance _refObj);
		_group = _x;
        _targets = _group getVariable ["targets",[]];

		_chance = 10;
		if ((_x distance player < dayz_areaAffect) and !(animationState _x == "ZombieFeed")) then {
			if (_type == "zombie") then { [_x, "attack", 10, true] call dayz_zombieSpeak; };
			//perform an attack
			_last = _x getVariable["lastAttack",0];
			_entHeight = (getPosATL _x) select 2;
			_delta = _pHeight - _entHeight;
			if ( ((time - _last) > 1) and ((_delta < 1.5) and (_delta > -1.5)) ) then {
				zedattack = [_x, _type] spawn player_zombieAttack;
				[_x,"attack",(_chance + 10),true] call dayz_zombieSpeak;
				_x setVariable["lastAttack",time];
			};
			_attacked = true;
		} else {
			if (_type == "zombie") then {
				if (speed _x < 3) then {
					[_x, "idle", (_chance + 4), true] call dayz_zombieSpeak;
				} else {
					[_x, "chase", (_chance + 3), true] call dayz_zombieSpeak;
				};
			};
		};

		//Noise Activation
		if (!(_refObj in _targets)) then {
			if (_dist < DAYZ_disAudial) then {
				if (DAYZ_disAudial > 80) then {
					if (!(_refObj in _targets)) then {
						_targets set [count _targets, driver _refObj];
						_group setVariable ["targets",_targets,true];
					};					
				} else {
					if (_dist < (DAYZ_disAudial / 2)) then {
						if (!(_refObj in _targets)) then {
							_targets set [count _targets, driver _refObj];
							_group setVariable ["targets",_targets,true];
						};
					};
				};
			};
		};
		//Sight Activation
		if (!(_refObj in _targets)) then {
			if (_dist < DAYZ_disVisual) then {
				//_chance = [_x,_dist,DAYZ_disVisual] call dayz_losChance;
				//diag_log ("Visual Detection: m" + str([_x,_dist]) + " " + str(_chance));
				//if ((random 1) < _chance) then {
					//diag_log ("Chance Detection");
					_tPos = (getPosASL _refObj);
					_zPos = (getPosASL _x);
					//_eyeDir = _x call dayz_eyeDir;
					_eyeDir = direction _x;
					_inAngle = [_zPos,_eyeDir,30,_tPos] call fnc_inAngleSector;
					if (_inAngle) then {
						//LOS check
						_cantSee = [_x,_refObj] call dayz_losCheck;
						//diag_log ("LOS Check: " + str(_cantSee));
						if (!_cantSee) then {
							//diag_log ("Within LOS! Target");
							if (!(_refObj in _targets)) then {
								_targets set [count _targets, driver _refObj];
								_group setVariable ["targets",_targets,true];
							};
						};
					};
				//};
			};
		};
	};
	//diag_log ("Targets Array: " +str(_targets));
} forEach _listTalk;

if (_attacked) then {
	if (r_player_unconscious) then {
		[_refObj,"scream",3,true] call dayz_zombieSpeak;
	} else {
		_lowBlood = (r_player_blood / r_player_bloodTotal) < 0.5;
		if (_lowBlood) then {
			dayz_panicCooldown = time;
			[_refObj,"panic",3,true] call dayz_zombieSpeak;
		};
	};
};