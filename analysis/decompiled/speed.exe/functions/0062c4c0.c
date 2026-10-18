/* speed.exe 0062c4c0 FUN_0062c4c0; analysis pseudocode, not buildable source.
 * calls 00605a50 FUN_00605a50
 * calls 0062c2d0 FUN_0062c2d0
 * calls 0060b060 FUN_0060b060
 * calls 007c4b80 FUN_007c4b80
 */

undefined4 FUN_0062c4c0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00877a2f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00605a50(param_1);
  if (iVar1 == 1) {
    iVar1 = DAT_00920390 + 0x10;
    bVar3 = DAT_00920390 != 0;
    local_4 = 0;
    DAT_00920390 = iVar1;
    if (bVar3) {
      FUN_0060b060(param_1,1);
      uVar2 = FUN_007c4b80();
      FUN_0062c2d0(uVar2);
    }
    ExceptionList = local_c;
    return 0;
  }
  ExceptionList = local_c;
  return 0;
}

