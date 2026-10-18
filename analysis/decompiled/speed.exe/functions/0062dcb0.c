/* speed.exe 0062dcb0 FUN_0062dcb0; analysis pseudocode, not buildable source.
 * calls 00605a50 FUN_00605a50
 * calls 00622c20 FUN_00622c20
 * calls 0060b060 FUN_0060b060
 * calls 007c4b80 FUN_007c4b80
 */

undefined4 FUN_0062dcb0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar1 = FUN_00605a50(param_1);
  if (iVar1 == 5) {
    iVar1 = DAT_00920390 + 0x20;
    bVar3 = DAT_00920390 != 0;
    DAT_00920390 = iVar1;
    if (bVar3) {
      fVar4 = (float10)FUN_0060b060(param_1,5);
      fVar8 = (float)fVar4;
      fVar4 = (float10)FUN_0060b060(param_1,4,fVar8);
      fVar7 = (float)fVar4;
      fVar4 = (float10)FUN_0060b060(param_1,3,fVar7);
      fVar6 = (float)fVar4;
      fVar4 = (float10)FUN_0060b060(param_1,2,fVar6);
      fVar5 = (float)fVar4;
      FUN_0060b060(param_1,1,fVar5);
      uVar2 = FUN_007c4b80();
      FUN_00622c20(uVar2,fVar5,fVar6,fVar7,fVar8);
    }
    return 0;
  }
  return 0;
}

