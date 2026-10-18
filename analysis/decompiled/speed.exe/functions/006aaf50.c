/* speed.exe 006aaf50 FUN_006aaf50; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 005d0370 FUN_005d0370
 * calls 0069d0a0 FUN_0069d0a0
 */

void __fastcall FUN_006aaf50(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0087cf60;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008abc00;
  param_1[2] = &PTR_LAB_008abbf8;
  param_1[0x13] = &PTR_LAB_008abb80;
  iVar3 = 4;
  local_4 = 4;
  piVar2 = param_1 + 0x3f;
  do {
    iVar1 = *piVar2;
    if (iVar1 != 0) {
      FUN_0045a430();
      FUN_005d0370(iVar1,0x10c,0);
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
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

