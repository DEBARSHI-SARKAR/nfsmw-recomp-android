/* speed.exe 00525a00 FUN_00525a00; analysis pseudocode, not buildable source.
 * calls 005720b0 FUN_005720b0
 * calls 005b1560 FUN_005b1560
 */

void __fastcall FUN_00525a00(int *param_1)

{
  int iVar1;
  void **ppvVar2;
  undefined **local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086e958;
  local_c = ExceptionList;
  if (*param_1 != -0xd8) {
    local_14 = &PTR_FUN_0089b4c0;
    iVar1 = *(int *)(*param_1 + 0xe0);
    local_4 = 0;
    ppvVar2 = &local_c;
    for (; ExceptionList = ppvVar2, iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      local_10 = FUN_005720b0(iVar1);
      FUN_005b1560(&local_14);
      ppvVar2 = ExceptionList;
    }
  }
  ExceptionList = local_c;
  return;
}

