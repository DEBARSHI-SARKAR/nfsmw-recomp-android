/* speed.exe 00567830 FUN_00567830; analysis pseudocode, not buildable source.
 * calls 00514e20 FUN_00514e20
 * calls 005675d0 FUN_005675d0
 * calls 005db5e0 FUN_005db5e0
 */

void FUN_00567830(undefined4 param_1)

{
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  float local_c [2];
  undefined4 local_4;
  
  FUN_005db5e0(local_c);
  local_10 = -local_c[0];
  local_14 = local_4;
  local_1c = 0x3f800000;
  local_18 = 0;
  FUN_005675d0(&local_14,&local_1c,param_1,0);
  FUN_00514e20(param_1,0);
  return;
}

