/* speed.exe 005988b0 FUN_005988b0; analysis pseudocode, not buildable source.
 * calls 004643d0 FUN_004643d0
 * calls 005983c0 FUN_005983c0
 * calls 0056c5e0 FUN_0056c5e0
 */

void FUN_005988b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  undefined1 local_240 [512];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  
  FUN_0056c5e0();
  FUN_004643d0(local_240,param_8,param_9);
  local_3c = param_4;
  local_40 = param_3;
  local_1c = param_1;
  local_38 = param_5;
  local_24 = param_6;
  local_14 = 1;
  local_20 = 0;
  local_18 = param_2;
  local_10 = param_7;
  FUN_005983c0(local_240);
  return;
}

