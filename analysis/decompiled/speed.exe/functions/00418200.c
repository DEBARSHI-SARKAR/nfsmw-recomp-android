/* speed.exe 00418200 FUN_00418200; analysis pseudocode, not buildable source.
 * calls 00401da0 FUN_00401da0
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00418200(float *param_1,float *param_2,float param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  
  fVar6 = *param_5;
  fVar1 = *param_5;
  fVar7 = param_5[2];
  fVar2 = *param_4;
  fVar3 = *param_2;
  fVar8 = param_4[1];
  fVar4 = param_2[1];
  fVar9 = param_4[2];
  fVar5 = param_2[2];
  fVar10 = (float10)FUN_005c5e80(fVar6 * fVar6 + fVar7 * fVar7 + 0.0);
  if ((float10)_DAT_008910cc < fVar10) {
    fVar11 = (float10)_DAT_0089096c / fVar10;
    fVar12 = (float10)(fVar2 - fVar3) * (float10)(float)((float10)fVar6 * fVar11) +
             (float10)(fVar8 - fVar4) * (float10)(float)((float10)0.0 * fVar11) +
             (float10)(fVar9 - fVar5) * fVar11 * (float10)fVar7;
    fVar11 = (float10)(fVar2 - fVar3) * (float10)(float)((float10)fVar7 * fVar11) +
             (float10)(fVar8 - fVar4) * (float10)(float)((float10)0.0 * fVar11) +
             (float10)(fVar9 - fVar5) * (float10)(float)((float10)-fVar1 * fVar11);
    fVar1 = (float)(fVar10 * fVar10 - (float10)param_3 * (float10)param_3);
    fVar2 = (float)(fVar12 * fVar10);
    fVar10 = fVar12 * fVar12 + fVar11 * fVar11;
    fVar3 = fVar1;
    if (fVar1 < _DAT_00890968) {
      fVar3 = -fVar1;
    }
    if (fVar3 <= _DAT_008910cc) {
      fVar1 = fVar2;
      if ((float10)fVar2 < (float10)_DAT_00890968) {
        fVar1 = -fVar2;
      }
      if ((_DAT_008910cc < fVar1) &&
         (fVar10 = -(fVar10 / ((float10)fVar2 + (float10)fVar2)), (float10)_DAT_00890968 < fVar10))
      goto LAB_00418498;
    }
    else {
      fVar10 = (float10)fVar2 * (float10)fVar2 - fVar10 * (float10)fVar1;
      if ((float10)_DAT_00890968 <= fVar10) {
        fVar10 = (float10)FUN_005c5e80((float)fVar10);
        fVar3 = (float)((-(float10)fVar2 - fVar10) * ((float10)_DAT_0089096c / (float10)fVar1));
        fVar10 = (fVar10 - (float10)fVar2) * ((float10)_DAT_0089096c / (float10)fVar1);
        if (_DAT_00890968 <= fVar3) {
          if (fVar10 < (float10)_DAT_00890968) {
            fVar10 = (float10)fVar3;
          }
          else {
            fVar10 = (float10)FUN_00401da0(fVar3,(float)fVar10);
          }
          goto LAB_00418498;
        }
        if ((float10)_DAT_00890968 <= fVar10) goto LAB_00418498;
      }
    }
  }
  fVar10 = (float10)0.0;
LAB_00418498:
  fVar2 = (float)(fVar10 * (float10)*param_5 + (float10)*param_4) - *param_2;
  fVar3 = (float)(fVar10 * (float10)param_5[1] + (float10)param_4[1]) - param_2[1];
  fVar1 = (float)((fVar10 * (float10)param_5[2] + (float10)param_4[2]) - (float10)param_2[2]);
  fVar10 = (float10)FUN_005c5e80(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
  if (fVar10 <= (float10)_DAT_008910cc) {
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    return;
  }
  fVar10 = (float10)param_3 / fVar10;
  *param_1 = (float)((float10)fVar2 * fVar10);
  param_1[1] = (float)((float10)fVar3 * fVar10);
  param_1[2] = (float)((float10)fVar1 * fVar10);
  return;
}

