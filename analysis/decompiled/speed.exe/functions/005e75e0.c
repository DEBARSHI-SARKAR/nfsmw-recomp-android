/* speed.exe 005e75e0 FUN_005e75e0; analysis pseudocode, not buildable source.
 * calls 004546c0 FUN_004546c0
 * calls 00452bd0 FUN_00452bd0
 * calls 00459040 FUN_00459040
 * calls 00454c30 FUN_00454c30
 */

void FUN_005e75e0(undefined4 param_1,undefined1 *param_2,int param_3)

{
  undefined1 local_1c [12];
  undefined1 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008753b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00459040(param_1,1);
  FUN_004546c0(local_1c,param_1);
  local_4 = 0;
  if (local_10 == (undefined1 *)0x0) {
    local_10 = (undefined1 *)FUN_00454c30(param_3);
  }
  else if (param_3 != 0) goto LAB_005e764f;
  if (local_10 != (undefined1 *)0x0) {
    *local_10 = *param_2;
  }
LAB_005e764f:
  local_4 = 0xffffffff;
  FUN_00452bd0();
  ExceptionList = local_c;
  return;
}

