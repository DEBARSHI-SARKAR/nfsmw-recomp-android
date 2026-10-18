/* speed.exe 005bb8e0 FUN_005bb8e0; analysis pseudocode, not buildable source.
 * calls 005b1560 FUN_005b1560
 */

void __fastcall FUN_005bb8e0(int param_1)

{
  int iVar1;
  char cVar2;
  undefined **local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_00874178;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 0x524d) = 0;
  local_10 = &PTR_FUN_008a2c88;
  iVar1 = *(int *)(param_1 + 0xe0);
  local_4 = 0;
  while ((iVar1 != 0 && (cVar2 = FUN_005b1560(&local_10), cVar2 != '\0'))) {
    iVar1 = *(int *)(iVar1 + 4);
  }
  ExceptionList = local_c;
  return;
}

