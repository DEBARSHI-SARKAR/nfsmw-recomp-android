/* speed.exe 0057f920 FUN_0057f920; analysis pseudocode, not buildable source.
 * calls 0065b6e0 FUN_0065b6e0
 * calls 0065b760 FUN_0065b760
 */

void FUN_0057f920(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00871fdb;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0065b6e0(param_1,param_3);
  FUN_0065b760();
  puVar1 = (undefined4 *)FUN_0065b760();
  if (param_2 + 4 <= param_4) {
    *param_2 = *puVar1;
    param_2[1] = puVar1[1];
    param_2[2] = puVar1[2];
    param_2[3] = puVar1[3];
  }
  ExceptionList = local_c;
  return;
}

