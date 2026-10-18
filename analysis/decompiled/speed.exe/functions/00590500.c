/* speed.exe 00590500 FUN_00590500; analysis pseudocode, not buildable source.
 * calls 00580f40 FUN_00580f40
 */

int __fastcall FUN_00590500(int param_1)

{
  int iVar1;
  undefined **local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00872838;
  local_c = ExceptionList;
  local_10 = &PTR_FUN_008a0728;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_00580f40(&local_10);
  ExceptionList = local_c;
  return iVar1 + *(int *)(param_1 + 36000);
}

