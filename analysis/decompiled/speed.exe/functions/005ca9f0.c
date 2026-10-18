/* speed.exe 005ca9f0 FUN_005ca9f0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ca9f0(float *param_1,float *param_2,float *param_3,float *param_4)

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
  
  fVar7 = *param_2 * *param_2;
  fVar7 = fVar7 + fVar7;
  fVar8 = param_2[1] * param_2[1];
  fVar8 = fVar8 + fVar8;
  fVar9 = param_2[2] * param_2[2];
  fVar9 = fVar9 + fVar9;
  fVar1 = *param_2 * param_2[1] + *param_2 * param_2[1];
  fVar3 = param_2[2] * *param_2 + param_2[2] * *param_2;
  fVar4 = param_2[3] * *param_2 + param_2[3] * *param_2;
  fVar5 = param_2[2] * param_2[1] + param_2[2] * param_2[1];
  fVar6 = param_2[3] * param_2[1] + param_2[3] * param_2[1];
  fVar2 = param_2[3] * param_2[2] + param_2[3] * param_2[2];
  *param_4 = (_DAT_0089096c - (fVar9 + fVar8)) * *param_1;
  param_4[1] = (fVar2 + fVar1) * param_1[1];
  param_4[2] = (fVar3 - fVar6) * param_1[2];
  param_4[3] = 0.0;
  param_4[4] = (fVar1 - fVar2) * *param_1;
  param_4[5] = (_DAT_0089096c - (fVar9 + fVar7)) * param_1[1];
  param_4[6] = (fVar5 + fVar4) * param_1[2];
  param_4[7] = 0.0;
  param_4[8] = (fVar6 + fVar3) * *param_1;
  param_4[9] = (fVar5 - fVar4) * param_1[1];
  param_4[10] = (_DAT_0089096c - (fVar8 + fVar7)) * param_1[2];
  param_4[0xb] = 0.0;
  param_4[0xc] = *param_3;
  param_4[0xd] = param_3[1];
  param_4[0xe] = param_3[2];
  param_4[0xf] = 1.0;
  return;
}

