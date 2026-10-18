/* speed.exe 005e3800 FUN_005e3800; analysis pseudocode, not buildable source.
 * calls 004546a0 FUN_004546a0
 * calls 0045a430 FUN_0045a430
 * calls 005e2580 FUN_005e2580
 * calls 00452430 FUN_00452430
 */

undefined4 FUN_005e3800(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00875050;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = FUN_004546a0();
  FUN_005e2580(0x22eb0ee,0,0);
  local_4 = 0;
  FUN_005e2580(uVar1,0,0);
  local_4._0_1_ = 1;
  iVar2 = FUN_00452430();
  iVar3 = FUN_00452430();
  local_4 = (uint)local_4._1_3_ << 8;
  if (iVar2 == iVar3) {
    FUN_0045a430();
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return 1;
  }
  FUN_0045a430();
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return 0;
}

