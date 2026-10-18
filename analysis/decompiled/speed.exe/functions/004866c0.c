/* speed.exe 004866c0 FUN_004866c0; analysis pseudocode, not buildable source.
 */

void FUN_004866c0(float *param_1,float *param_2,float *param_3)

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
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  fVar1 = *param_1;
  fVar2 = param_2[2];
  fVar3 = *param_2;
  fVar4 = param_1[2];
  fVar5 = param_1[3];
  fVar6 = param_2[1];
  fVar7 = param_2[3];
  fVar8 = param_1[1];
  fVar9 = *param_2;
  fVar10 = param_1[1];
  fVar11 = *param_1;
  fVar12 = param_2[1];
  fVar13 = param_1[3];
  fVar14 = param_2[2];
  fVar15 = param_2[3];
  fVar16 = param_1[2];
  fVar17 = param_1[3];
  fVar18 = param_2[3];
  fVar19 = *param_1;
  fVar20 = *param_2;
  fVar21 = param_2[1];
  fVar22 = param_1[1];
  fVar23 = param_2[2];
  fVar24 = param_1[2];
  *param_3 = param_1[3] * *param_2 +
             *param_1 * param_2[3] + (param_2[1] * param_1[2] - param_2[2] * param_1[1]);
  param_3[1] = fVar7 * fVar8 + fVar5 * fVar6 + (fVar1 * fVar2 - fVar3 * fVar4);
  param_3[2] = fVar15 * fVar16 + fVar13 * fVar14 + (fVar9 * fVar10 - fVar11 * fVar12);
  param_3[3] = ((fVar17 * fVar18 - fVar19 * fVar20) - fVar21 * fVar22) - fVar23 * fVar24;
  return;
}

