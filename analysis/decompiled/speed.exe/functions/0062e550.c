/* speed.exe 0062e550 FUN_0062e550; analysis pseudocode, not buildable source.
 * calls 00605a50 FUN_00605a50
 * calls 00614d10 FUN_00614d10
 * calls 00623060 FUN_00623060
 */

undefined4 FUN_0062e550(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00877dcf;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00605a50(param_1);
  if (iVar1 == 2) {
    iVar1 = DAT_00920390 + 0x10;
    bVar4 = DAT_00920390 != 0;
    local_4 = 0;
    DAT_00920390 = iVar1;
    if (bVar4) {
      uVar2 = FUN_00614d10(param_1,2);
      uVar3 = FUN_00614d10(param_1,1,uVar2);
      FUN_00623060(uVar3,uVar2);
    }
    ExceptionList = local_c;
    return 0;
  }
  ExceptionList = local_c;
  return 0;
}

