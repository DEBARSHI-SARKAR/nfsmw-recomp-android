/* speed.exe 00492d40 FUN_00492d40; analysis pseudocode, not buildable source.
 * calls 00492bb0 FUN_00492bb0
 */

void __thiscall FUN_00492d40(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_24 = *param_1;
  local_20 = param_1[1];
  local_1c = param_1[2];
  local_18 = param_1[4];
  local_14 = param_1[5];
  local_c = param_1[8];
  local_8 = param_1[9];
  local_10 = param_1[6];
  local_4 = param_1[10];
  FUN_00492bb0(&local_24,param_2);
  *param_3 = param_1[0xc];
  param_3[1] = param_1[0xd];
  param_3[2] = param_1[0xe];
  param_3[3] = param_1[0xf];
  return;
}

