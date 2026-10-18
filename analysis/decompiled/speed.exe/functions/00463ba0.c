/* speed.exe 00463ba0 FUN_00463ba0; analysis pseudocode, not buildable source.
 */

void FUN_00463ba0(float *param_1,float *param_2,float *param_3)

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
  
  fVar19 = param_2[3];
  fVar20 = param_3[3];
  fVar1 = param_2[2];
  fVar2 = param_3[2];
  fVar3 = param_3[1];
  fVar4 = param_2[1];
  fVar5 = *param_2;
  fVar6 = *param_3;
  fVar7 = param_2[2];
  fVar8 = *param_3;
  fVar9 = *param_2;
  fVar10 = param_3[2];
  fVar11 = param_3[1];
  fVar12 = *param_2;
  fVar13 = param_2[1];
  fVar14 = *param_3;
  fVar15 = param_3[1];
  fVar16 = param_3[2];
  fVar17 = param_2[1];
  fVar18 = param_2[2];
  *param_1 = fVar20 * *param_2 +
             fVar19 * *param_3 + (param_2[1] * param_3[2] - param_2[2] * param_3[1]);
  param_1[1] = fVar20 * fVar17 + fVar19 * fVar15 + (fVar7 * fVar8 - fVar9 * fVar10);
  param_1[2] = fVar20 * fVar18 + fVar19 * fVar16 + (fVar11 * fVar12 - fVar13 * fVar14);
  param_1[3] = fVar20 * fVar19 - (fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2);
  return;
}

