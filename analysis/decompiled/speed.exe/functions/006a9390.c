/* speed.exe 006a9390 FUN_006a9390; analysis pseudocode, not buildable source.
 * calls 006f8180 FUN_006f8180
 * calls 0045a430 FUN_0045a430
 * calls 00653c30 FUN_00653c30
 * calls 005d0370 FUN_005d0370
 * calls 0069d0a0 FUN_0069d0a0
 */

void __fastcall FUN_006a9390(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0087cf09;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008abb48;
  param_1[2] = &PTR_LAB_008abb40;
  param_1[0x13] = &PTR_LAB_008abac8;
  param_1[0x24] = &PTR_LAB_008abac4;
  param_1[0x25] = &PTR_LAB_008abac0;
  local_4 = 5;
  FUN_006f8180(param_1 + 0x24);
  piVar2 = param_1 + 0x6d;
  iVar3 = 4;
  do {
    iVar1 = *piVar2;
    if (iVar1 != 0) {
      FUN_0045a430();
      FUN_005d0370(iVar1,0x140,0);
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_4._0_1_ = 6;
  FUN_00653c30();
  local_4._0_1_ = 4;
  FUN_00653c30();
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

