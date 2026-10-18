/* speed.exe 006a0910 FUN_006a0910; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 00452940 FUN_00452940
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_006a0910(int param_1,float param_2)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float *pfVar6;
  int iVar7;
  float10 extraout_ST0;
  float10 fVar8;
  
  uVar3 = FUN_00452940();
  if (uVar3 < 2) {
    iVar1 = *(int *)(param_1 + 0x14c);
    iVar7 = FUN_00452940();
    if (iVar7 != 0) {
      return -((float10)param_2 * (float10)*(float *)(iVar1 + 0x44));
    }
    pfVar6 = (float *)FUN_006269b0(4);
    return -((float10)param_2 * (float10)*pfVar6);
  }
  uVar4 = FUN_007c4b80();
  fVar8 = (float10)(int)uVar4;
  if ((int)uVar4 < 0) {
    fVar8 = fVar8 + (float10)_DAT_00891214;
  }
  iVar1 = *(int *)(param_1 + 0x14c);
  uVar5 = FUN_00452940();
  if (uVar4 < uVar5) {
    pfVar6 = (float *)(iVar1 + 0x44 + uVar4 * 4);
  }
  else {
    pfVar6 = (float *)FUN_006269b0(4);
  }
  fVar2 = *pfVar6;
  uVar5 = uVar3 - 1;
  if (uVar4 + 1 < uVar3 - 1) {
    uVar5 = uVar4 + 1;
  }
  iVar1 = *(int *)(param_1 + 0x14c);
  uVar3 = FUN_00452940();
  if (uVar5 < uVar3) {
    pfVar6 = (float *)(iVar1 + 0x44 + uVar5 * 4);
  }
  else {
    pfVar6 = (float *)FUN_006269b0(4);
  }
  fVar2 = (*pfVar6 - fVar2) * (float)(extraout_ST0 - fVar8) + fVar2;
  if (fVar2 < _DAT_0089096c) {
    if (fVar2 < _DAT_00890968) {
      fVar2 = _DAT_00890968;
    }
    return -((float10)fVar2 * (float10)param_2);
  }
  return -((float10)_DAT_0089096c * (float10)param_2);
}

