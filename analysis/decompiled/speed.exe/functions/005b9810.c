/* speed.exe 005b9810 FUN_005b9810; analysis pseudocode, not buildable source.
 * calls 005b1560 FUN_005b1560
 * calls 00652ad0 _malloc
 * calls 00652b10 thunk_FUN_007c7250
 */

void __fastcall FUN_005b9810(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  undefined **local_20;
  int local_1c;
  undefined **local_18;
  undefined4 *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00874020;
  local_c = ExceptionList;
  local_20 = &PTR_FUN_008a2cf0;
  local_18 = &PTR_FUN_008a2cf8;
  local_4 = 1;
  local_1c = 0;
  ExceptionList = &local_c;
  FUN_005b1560(&local_20);
  iVar2 = local_1c;
  puVar1 = (undefined4 *)(param_1 + 0x90);
  thunk_FUN_007c7250(*(undefined4 *)(param_1 + 0x90));
  *puVar1 = 0;
  if (iVar2 != 0) {
    pvVar3 = _malloc(iVar2 * 4);
    *puVar1 = pvVar3;
  }
  *(int *)(param_1 + 0x94) = iVar2;
  local_10 = 0;
  local_14 = puVar1;
  FUN_005b1560(&local_18);
  ExceptionList = local_c;
  return;
}

