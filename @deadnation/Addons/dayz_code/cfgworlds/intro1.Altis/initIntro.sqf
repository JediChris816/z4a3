titleCut ["", "BLACK FADED", 10e10];

_camera = "camera" camCreate (getPos bobo);
hcam_offset = [-5,-20,5];
_camera attachTo [bobo,hcam_offset];
_camera camSetFov 0.6;
_camera camSetTarget bobo; 
_camera camCommit 2;
_camera cameraEffect ["external", "back"];
0 fadeMusic 0;
playMusic ["z_suspense_26", 26];
5 fadeMusic 0.5;
titleCut ["", "BLACK IN", 5];