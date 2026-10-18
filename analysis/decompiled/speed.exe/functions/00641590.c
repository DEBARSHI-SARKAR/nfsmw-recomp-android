/* speed.exe 00641590 FUN_00641590; analysis pseudocode, not buildable source.
 * calls 00605a50 FUN_00605a50
 * calls 00640f00 FUN_00640f00
 * calls 00614d10 FUN_00614d10
 * calls 0060b060 FUN_0060b060
 * calls 007c4b80 FUN_007c4b80
 */

undefined4 FUN_00641590(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087981f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00605a50(param_1);
  if (iVar1 == 7) {
    iVar1 = DAT_00920390 + 0x30;
    bVar9 = DAT_00920390 != 0;
    local_4 = 0;
    DAT_00920390 = iVar1;
    if (bVar9) {
      uVar2 = FUN_00614d10(param_1,7);
      uVar3 = FUN_00614d10(param_1,6,uVar2);
      FUN_0060b060(param_1,5,uVar3);
      uVar4 = FUN_007c4b80();
      FUN_0060b060(param_1,4,uVar4);
      uVar5 = FUN_007c4b80();
      uVar6 = FUN_00614d10(param_1,3,uVar5);
      uVar7 = FUN_00614d10(param_1,2,uVar6);
      uVar8 = FUN_00614d10(param_1,1,uVar7);
      FUN_00640f00(uVar8,uVar7,uVar6,uVar5,uVar4,uVar3,uVar2);
    }
    ExceptionList = local_c;
    return 0;
  }
  ExceptionList = local_c;
  return 0;
}

