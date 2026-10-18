/* speed.exe 00691da0 FUN_00691da0; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 00452940 FUN_00452940
 * calls 0066bee0 FUN_0066bee0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00691da0(int param_1,float param_2,uint param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float *pfVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  fVar8 = (float10)FUN_0066bee0(param_1 + 0x16c,0);
  fVar10 = (float10)_DAT_008933d4;
  fVar9 = (float10)FUN_0066bee0(param_1 + 0x16c,1);
  fVar10 = (fVar9 * (float10)_DAT_008933d4 + (float10)(float)(fVar8 * fVar10)) *
           (float10)_DAT_008933d4;
  if (fVar10 < (float10)_DAT_00890968 != (fVar10 == (float10)_DAT_00890968)) {
    return (float10)*(float *)(*(int *)(param_1 + 0x14c) + 0x5c);
  }
  fVar8 = (float10)param_2;
  if (param_2 < _DAT_00890968) {
    fVar8 = -fVar8;
  }
  iVar1 = *(int *)(param_1 + 0x160);
  fVar2 = *(float *)(iVar1 + 0x80);
  fVar4 = *(float *)(*(int *)(param_1 + 0x14c) + 0x58) * _DAT_008a9398;
  fVar5 = *(float *)(*(int *)(param_1 + 0x14c) + 0x5c) * _DAT_008a9398;
  uVar6 = FUN_00452940();
  if (param_3 < uVar6) {
    pfVar7 = (float *)(iVar1 + 8 + param_3 * 4);
  }
  else {
    pfVar7 = (float *)FUN_006269b0(4);
  }
  fVar9 = (float10)*(float *)(*(int *)(param_1 + 0x14c) + 0x58);
  fVar3 = *(float *)(*(int *)(param_1 + 0x14c) + 0x5c);
  fVar10 = ((((float10)fVar4 - (float10)fVar5) / (float10)fVar4) *
            (float10)fVar2 * (float10)*pfVar7 * (float10)(float)(fVar8 / fVar10) + (float10)fVar5) *
           (float10)_DAT_008a9394;
  if (fVar10 < fVar9) {
    fVar9 = (float10)(float)fVar10;
  }
  if (fVar9 < (float10)fVar3) {
    fVar9 = (float10)fVar3;
  }
  return fVar9;
}

