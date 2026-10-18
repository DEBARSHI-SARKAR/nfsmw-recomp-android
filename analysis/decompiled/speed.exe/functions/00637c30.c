/* speed.exe 00637c30 FUN_00637c30; analysis pseudocode, not buildable source.
 * calls 00605a50 FUN_00605a50
 * calls 00637a80 FUN_00637a80
 * calls 0060b060 FUN_0060b060
 * calls 007c4b80 FUN_007c4b80
 */

undefined4 FUN_00637c30(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00878bcf;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00605a50(param_1);
  if (iVar1 == 2) {
    iVar1 = DAT_00920390 + 0x20;
    bVar4 = DAT_00920390 != 0;
    local_4 = 0;
    DAT_00920390 = iVar1;
    if (bVar4) {
      FUN_0060b060(param_1,2);
      uVar2 = FUN_007c4b80();
      FUN_0060b060(param_1,1,uVar2);
      uVar3 = FUN_007c4b80();
      FUN_00637a80(DAT_0091f1b8,uVar3,uVar2);
    }
    ExceptionList = local_c;
    return 0;
  }
  ExceptionList = local_c;
  return 0;
}

