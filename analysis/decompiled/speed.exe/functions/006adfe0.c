/* speed.exe 006adfe0 FUN_006adfe0; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 005d0370 FUN_005d0370
 * calls 005d5a50 FUN_005d5a50
 * calls 0069d0a0 FUN_0069d0a0
 */

void __fastcall FUN_006adfe0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0087d05b;
  local_c = ExceptionList;
  puVar1 = param_1 + 0x24;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008abe40;
  param_1[2] = &PTR_LAB_008abe38;
  param_1[0x13] = &PTR_LAB_008abdc0;
  *puVar1 = &PTR_LAB_008abd88;
  local_4 = 4;
  piVar3 = param_1 + 0x60;
  local_14 = 4;
  do {
    iVar2 = *piVar3;
    if (iVar2 != 0) {
      FUN_0045a430();
      FUN_005d0370(iVar2,0xe8,0);
    }
    piVar3 = piVar3 + 1;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  local_4._0_1_ = 3;
  FUN_0045a430();
  local_4._0_1_ = 2;
  FUN_0045a430();
  local_4._0_1_ = 1;
  FUN_0045a430();
  *puVar1 = &PTR_FUN_00890970;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005d5a50(puVar1);
  local_4 = 0xffffffff;
  FUN_0069d0a0();
  ExceptionList = local_c;
  return;
}

