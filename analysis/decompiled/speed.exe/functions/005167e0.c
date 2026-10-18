/* speed.exe 005167e0 FUN_005167e0; analysis pseudocode, not buildable source.
 * calls 005720b0 FUN_005720b0
 * calls 005b1560 FUN_005b1560
 */

void FUN_005167e0(undefined4 param_1)

{
  undefined **local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086e368;
  local_c = ExceptionList;
  local_18 = &PTR_FUN_0089b4b0;
  local_4 = 0;
  local_10 = DAT_0091cfa8;
  ExceptionList = &local_c;
  local_14 = FUN_005720b0(param_1);
  FUN_005b1560(&local_18);
  ExceptionList = local_c;
  return;
}

