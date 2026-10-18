/* speed.exe 0062db80 FUN_0062db80; analysis pseudocode, not buildable source.
 * calls 00605a50 FUN_00605a50
 * calls 0060b060 FUN_0060b060
 * calls 007c4b80 FUN_007c4b80
 * calls 00622b60 FUN_00622b60
 */

undefined4 FUN_0062db80(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00877ccf;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00605a50(param_1);
  if (iVar1 == 4) {
    iVar1 = DAT_00920390 + 0x20;
    bVar3 = DAT_00920390 != 0;
    local_4 = 0;
    DAT_00920390 = iVar1;
    if (bVar3) {
      fVar4 = (float10)FUN_0060b060(param_1,4);
      fVar7 = (float)fVar4;
      fVar4 = (float10)FUN_0060b060(param_1,3,fVar7);
      fVar6 = (float)fVar4;
      fVar4 = (float10)FUN_0060b060(param_1,2,fVar6);
      fVar5 = (float)fVar4;
      FUN_0060b060(param_1,1,fVar5);
      uVar2 = FUN_007c4b80();
      FUN_00622b60(uVar2,fVar5,fVar6,fVar7);
    }
    ExceptionList = local_c;
    return 0;
  }
  ExceptionList = local_c;
  return 0;
}

