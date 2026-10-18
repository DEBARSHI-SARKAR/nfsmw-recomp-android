/* speed.exe 0075d710 FUN_0075d710; analysis pseudocode, not buildable source.
 * calls 0075d100 FUN_0075d100
 * calls 00754550 FUN_00754550
 * calls 0045a430 FUN_0045a430
 * calls 007454d0 FUN_007454d0
 * calls 00754510 FUN_00754510
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_0075d710(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_008814fe;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008b5254;
  param_1[0x1c] = &PTR_LAB_008b5250;
  local_4 = 5;
  FUN_00754550();
  FUN_00754550();
  piVar2 = param_1 + 0x1d;
  local_14 = 4;
  do {
    iVar1 = *piVar2;
    if (iVar1 != 0) {
      FUN_007454d0();
      FUN_005d0370(iVar1,0xf0,0);
    }
    piVar2 = piVar2 + 1;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  local_4._0_1_ = 4;
  FUN_00754510();
  local_4._0_1_ = 3;
  FUN_00754510();
  local_4._0_1_ = 2;
  FUN_0045a430();
  local_4._0_1_ = 1;
  FUN_0045a430();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0045a430();
  local_4 = 0xffffffff;
  FUN_0075d100();
  ExceptionList = local_c;
  return;
}

