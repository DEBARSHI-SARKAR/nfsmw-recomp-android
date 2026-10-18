/* speed.exe 006ac0a0 FUN_006ac0a0; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 006f8180 FUN_006f8180
 * calls 005d0370 FUN_005d0370
 * calls 0069d0a0 FUN_0069d0a0
 */

void __fastcall FUN_006ac0a0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0087cfb0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008abcb0;
  param_1[2] = &PTR_LAB_008abca8;
  param_1[0x13] = &PTR_LAB_008abc30;
  param_1[0x24] = &PTR_FUN_008abc2c;
  param_1[0x25] = &PTR_LAB_008abc28;
  local_4 = 4;
  piVar2 = param_1 + 0x4b;
  local_14 = 4;
  do {
    iVar1 = *piVar2;
    if (iVar1 != 0) {
      FUN_0045a430();
      FUN_005d0370(iVar1,0x120,0);
    }
    piVar2 = piVar2 + 1;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  FUN_006f8180(param_1 + 0x24);
  local_4._0_1_ = 3;
  FUN_0045a430();
  local_4._0_1_ = 2;
  FUN_0045a430();
  local_4._0_1_ = 1;
  FUN_0045a430();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0045a430();
  local_4 = 0xffffffff;
  FUN_0069d0a0();
  ExceptionList = local_c;
  return;
}

