/* speed.exe 005ed7d0 FUN_005ed7d0; analysis pseudocode, not buildable source.
 * calls 00452430 FUN_00452430
 * calls 005ed750 FUN_005ed750
 * calls 00627400 FUN_00627400
 * calls 00621070 FUN_00621070
 * calls 00614d10 FUN_00614d10
 * calls 00605d60 FUN_00605d60
 */

undefined4 FUN_005ed7d0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087555f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00605d60(param_1,0xffffd8ee);
  uVar1 = FUN_00614d10(param_1,1);
  FUN_005ed750(uVar1);
  iVar2 = FUN_00627400(0x10);
  local_4 = 0;
  if (iVar2 != 0) {
    uVar1 = FUN_00452430();
    uVar3 = FUN_00452430(uVar1);
    FUN_00621070(uVar3,uVar1);
  }
  ExceptionList = local_c;
  return 0;
}

