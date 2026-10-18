/* speed.exe 005b8550 FUN_005b8550; analysis pseudocode, not buildable source.
 * calls 005b1560 FUN_005b1560
 */

undefined4 FUN_005b8550(undefined4 param_1)

{
  undefined **local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00873f48;
  local_c = ExceptionList;
  local_18 = &PTR_FUN_008a2ca8;
  local_4 = 0;
  local_10 = 0;
  local_14 = param_1;
  ExceptionList = &local_c;
  FUN_005b1560(&local_18);
  ExceptionList = local_c;
  return local_10;
}

