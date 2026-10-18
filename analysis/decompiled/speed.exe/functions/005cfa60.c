/* speed.exe 005cfa60 FUN_005cfa60; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005cfa60(float *param_1,float param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  if ((float10)param_2 * (float10)_DAT_008a30a8 == (float10)_DAT_00890968) {
    param_1[0xf] = 1.0;
    param_1[10] = 1.0;
    param_1[5] = 1.0;
    *param_1 = 1.0;
    param_1[0xe] = 0.0;
    param_1[0xd] = 0.0;
    param_1[0xc] = 0.0;
    param_1[0xb] = 0.0;
    param_1[9] = 0.0;
    param_1[8] = 0.0;
    param_1[7] = 0.0;
    param_1[6] = 0.0;
    param_1[4] = 0.0;
    param_1[3] = 0.0;
    param_1[2] = 0.0;
    param_1[1] = 0.0;
    return;
  }
  fVar6 = (float10)param_2 * (float10)_DAT_008a30a8 * (float10)_DAT_008a2f94;
  fVar7 = (float10)fsin(fVar6);
  fVar1 = (float)fVar7;
  fVar6 = (float10)fcos(fVar6);
  fVar7 = SQRT((float10)param_5 * (float10)param_5 +
               (float10)param_4 * (float10)param_4 + (float10)param_3 * (float10)param_3);
  if (fVar7 == (float10)_DAT_00890968) {
    fVar7 = (float10)_DAT_00890968;
  }
  else {
    fVar7 = (float10)_DAT_0089096c / fVar7;
  }
  fVar8 = (float10)param_3 * fVar7;
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xc] = 0.0;
  fVar2 = (float)(fVar7 * (float10)param_4);
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = 1.0;
  fVar3 = (float)(fVar7 * (float10)param_5);
  fVar7 = (float10)_DAT_0089096c - fVar6;
  fVar9 = fVar7 * fVar8;
  fVar4 = (float)(fVar7 * (float10)fVar2);
  fVar5 = (float)(fVar7 * (float10)fVar3);
  *param_1 = (float)(fVar9 * fVar8 + fVar6);
  param_1[1] = (float)((float10)fVar2 * fVar9 + (float10)(fVar1 * fVar3));
  param_1[2] = (float)(fVar9 * (float10)fVar3 - (float10)(fVar1 * fVar2));
  param_1[4] = (float)((float10)fVar4 * fVar8 - (float10)(fVar1 * fVar3));
  param_1[5] = (float)((float10)fVar4 * (float10)fVar2 + fVar6);
  param_1[6] = fVar4 * fVar3 + (float)((float10)fVar1 * fVar8);
  param_1[8] = (float)((float10)fVar5 * fVar8 + (float10)(fVar1 * fVar2));
  param_1[9] = fVar5 * fVar2 - (float)((float10)fVar1 * fVar8);
  param_1[10] = (float)((float10)fVar5 * (float10)fVar3 + fVar6);
  return;
}

