/* speed.exe 007627b0 FUN_007627b0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_007627b0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float10 fVar8;
  
  fVar1 = param_1[2];
  fVar2 = *param_1;
  fVar3 = param_1[4];
  fVar7 = param_1[6] - fVar1;
  fVar4 = *param_2;
  fVar5 = param_2[2];
  fVar6 = ((fVar5 - fVar1) * fVar7 + (fVar4 - fVar2) * (fVar3 - fVar2)) * param_1[7] * param_1[7];
  if (_DAT_00890968 <= fVar6) {
    if (fVar6 <= _DAT_0089096c) {
      fVar5 = (fVar7 * fVar6 + fVar1) - fVar5;
      fVar8 = ((float10)(fVar3 - fVar2) * (float10)fVar6 + (float10)fVar2) - (float10)fVar4;
      return (float10)fVar5 * (float10)fVar5 + fVar8 * fVar8;
    }
    fVar8 = (float10)param_1[6] - (float10)fVar5;
  }
  else {
    fVar8 = (float10)fVar1 - (float10)fVar5;
    fVar3 = fVar2;
  }
  return fVar8 * fVar8 + ((float10)fVar3 - (float10)fVar4) * ((float10)fVar3 - (float10)fVar4);
}

