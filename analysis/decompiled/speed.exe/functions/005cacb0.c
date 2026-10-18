/* speed.exe 005cacb0 FUN_005cacb0; analysis pseudocode, not buildable source.
 */

void FUN_005cacb0(float *param_1,float *param_2,float *param_3)

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
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[4];
  fVar5 = param_1[5];
  fVar6 = param_1[6];
  fVar7 = param_1[8];
  fVar8 = param_1[9];
  fVar9 = param_1[10];
  fVar10 = *param_2;
  fVar11 = param_2[1];
  fVar12 = param_2[2];
  fVar13 = param_2[4];
  fVar14 = param_2[5];
  fVar15 = param_2[6];
  fVar16 = param_2[8];
  fVar17 = param_2[9];
  fVar18 = param_2[10];
  *param_3 = fVar1 * fVar10 + fVar2 * fVar13 + fVar3 * fVar16;
  param_3[1] = fVar11 * fVar1 + fVar14 * fVar2 + fVar17 * fVar3;
  param_3[2] = fVar12 * fVar1 + fVar15 * fVar2 + fVar18 * fVar3;
  param_3[4] = fVar4 * fVar10 + fVar5 * fVar13 + fVar6 * fVar16;
  param_3[5] = fVar4 * fVar11 + fVar5 * fVar14 + fVar6 * fVar17;
  param_3[6] = fVar4 * fVar12 + fVar5 * fVar15 + fVar6 * fVar18;
  param_3[8] = fVar7 * fVar10 + fVar8 * fVar13 + fVar9 * fVar16;
  param_3[9] = fVar7 * fVar11 + fVar8 * fVar14 + fVar9 * fVar17;
  param_3[10] = fVar7 * fVar12 + fVar8 * fVar15 + fVar9 * fVar18;
  param_3[0xb] = 0.0;
  param_3[7] = 0.0;
  param_3[3] = 0.0;
  return;
}

