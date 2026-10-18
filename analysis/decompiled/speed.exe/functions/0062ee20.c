/* speed.exe 0062ee20 FUN_0062ee20; analysis pseudocode, not buildable source.
 * calls 00605a50 FUN_00605a50
 * calls 006236c0 FUN_006236c0
 * calls 0060b060 FUN_0060b060
 * calls 007c4b80 FUN_007c4b80
 */

undefined4 FUN_0062ee20(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00877ecf;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00605a50(param_1);
  if (iVar1 == 6) {
    iVar1 = DAT_00920390 + 0x20;
    bVar3 = DAT_00920390 != 0;
    local_4 = 0;
    DAT_00920390 = iVar1;
    if (bVar3) {
      fVar4 = (float10)FUN_0060b060(param_1,6);
      fVar8 = (float)fVar4;
      fVar4 = (float10)FUN_0060b060(param_1,5,fVar8);
      fVar7 = (float)fVar4;
      FUN_0060b060(param_1,4,fVar7);
      uVar2 = FUN_007c4b80();
      fVar4 = (float10)FUN_0060b060(param_1,3,uVar2);
      fVar6 = (float)fVar4;
      fVar4 = (float10)FUN_0060b060(param_1,2,fVar6);
      fVar5 = (float)fVar4;
      fVar4 = (float10)FUN_0060b060(param_1,1,fVar5);
      FUN_006236c0((float)fVar4,fVar5,fVar6,uVar2,fVar7,fVar8);
    }
    ExceptionList = local_c;
    return 0;
  }
  ExceptionList = local_c;
  return 0;
}

