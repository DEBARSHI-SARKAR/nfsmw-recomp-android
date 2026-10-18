/* speed.exe 0062b990 FUN_0062b990; analysis pseudocode, not buildable source.
 * calls 00605a50 FUN_00605a50
 * calls 00614d10 FUN_00614d10
 * calls 0060b060 FUN_0060b060
 * calls 007c4b80 FUN_007c4b80
 * calls 0062b890 FUN_0062b890
 */

undefined4 FUN_0062b990(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  float10 fVar6;
  float fVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087799f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00605a50(param_1);
  if (iVar1 == 4) {
    iVar1 = DAT_00920390 + 0x20;
    bVar5 = DAT_00920390 != 0;
    local_4 = 0;
    DAT_00920390 = iVar1;
    if (bVar5) {
      FUN_0060b060(param_1,4);
      uVar2 = FUN_007c4b80();
      FUN_0060b060(param_1,3,uVar2);
      uVar3 = FUN_007c4b80();
      fVar6 = (float10)FUN_0060b060(param_1,2,uVar3);
      fVar7 = (float)fVar6;
      uVar4 = FUN_00614d10(param_1,1,fVar7);
      FUN_0062b890(uVar4,fVar7,uVar3,uVar2);
    }
    ExceptionList = local_c;
    return 0;
  }
  ExceptionList = local_c;
  return 0;
}

