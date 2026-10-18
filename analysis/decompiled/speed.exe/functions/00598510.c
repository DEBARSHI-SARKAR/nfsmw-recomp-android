/* speed.exe 00598510 FUN_00598510; analysis pseudocode, not buildable source.
 * calls 004643d0 FUN_004643d0
 * calls 005983c0 FUN_005983c0
 * calls 0056c5e0 FUN_0056c5e0
 */

void FUN_00598510(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined1 local_240 [512];
  undefined4 local_40;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  
  FUN_0056c5e0();
  FUN_004643d0(local_240,param_4,param_5);
  local_40 = param_3;
  local_14 = 0;
  local_10 = 0;
  local_1c = param_1;
  local_18 = param_2;
  FUN_005983c0(local_240);
  return;
}

