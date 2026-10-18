/* speed.exe 00493850 FUN_00493850; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00493850(float *param_1,float *param_2,float *param_3)

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
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar15 = *param_2 * *param_1 + param_1[4] * param_2[1] + param_1[8] * param_2[2] + param_1[0xc];
  if (param_2 != param_3) {
    *param_3 = fVar15;
    param_3[1] = param_1[5] * param_2[1] + param_1[9] * param_2[2] + param_1[1] * *param_2 +
                 param_1[0xd];
    param_3[2] = param_1[6] * param_2[1] + param_1[10] * param_2[2] + param_1[2] * *param_2 +
                 param_1[0xe];
    return;
  }
  fVar1 = param_1[1];
  fVar2 = *param_2;
  fVar3 = param_1[9];
  fVar4 = param_2[2];
  fVar5 = param_1[5];
  fVar6 = param_2[1];
  fVar7 = param_1[0xd];
  fVar8 = param_1[2];
  fVar9 = *param_2;
  fVar10 = param_1[10];
  fVar11 = param_2[2];
  fVar12 = param_1[6];
  fVar13 = param_2[1];
  fVar14 = param_1[0xe];
  *param_3 = fVar15;
  param_3[1] = fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2 + fVar7;
  param_3[2] = fVar12 * fVar13 + fVar10 * fVar11 + fVar8 * fVar9 + fVar14;
  return;
}

