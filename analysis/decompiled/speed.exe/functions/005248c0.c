/* speed.exe 005248c0 FUN_005248c0; analysis pseudocode, not buildable source.
 * calls 005b1560 FUN_005b1560
 * calls 00516af0 FUN_00516af0
 */

void FUN_005248c0(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  undefined **local_14;
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086e868;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00516af0(param_1);
  if (iVar1 != 0) {
    local_14 = &PTR_FUN_0089b380;
    local_10 = param_2;
    local_4 = 0;
    FUN_005b1560(&local_14);
  }
  ExceptionList = local_c;
  return;
}

