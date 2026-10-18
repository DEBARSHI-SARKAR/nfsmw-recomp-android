/* speed.exe 00663f40 FUN_00663f40; analysis pseudocode, not buildable source.
 * calls 006634b0 FUN_006634b0
 * calls 00454830 FUN_00454830
 * calls 0065ec70 FUN_0065ec70
 */

undefined4 FUN_00663f40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 local_1c;
  uint local_18 [2];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar1 = FUN_00454830(param_1);
  local_1c = uVar1;
  FUN_0065ec70(local_18,&local_1c);
  if (local_18[0] == DAT_00925af0) {
    local_8 = param_2;
    local_4 = param_3;
    local_c = 0;
    local_10 = uVar1;
    FUN_006634b0(local_18,&local_10);
    return 1;
  }
  return 0;
}

