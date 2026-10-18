/* speed.exe 005903b0 FUN_005903b0; analysis pseudocode, not buildable source.
 * calls 0056f510 FUN_0056f510
 * calls 00580f40 FUN_00580f40
 */

int FUN_005903b0(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  undefined **local_18;
  undefined4 local_14;
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008727f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_0056f510(param_1);
  local_18 = &PTR_FUN_008a1140;
  local_14 = param_1;
  local_10 = param_2;
  local_4 = 0;
  iVar2 = FUN_00580f40(&local_18);
  ExceptionList = local_c;
  return iVar2 + iVar1;
}

