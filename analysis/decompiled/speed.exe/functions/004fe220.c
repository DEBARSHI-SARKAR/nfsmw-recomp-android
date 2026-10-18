/* speed.exe 004fe220 FUN_004fe220; analysis pseudocode, not buildable source.
 */

void FUN_004fe220(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6,float *param_7)

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
  
  fVar1 = *param_2;
  fVar2 = *param_3;
  fVar3 = param_2[1];
  fVar4 = param_3[1];
  fVar5 = param_2[2];
  fVar6 = param_3[2];
  fVar7 = param_2[3];
  fVar8 = param_3[3];
  fVar9 = *param_2;
  fVar10 = *param_3;
  fVar11 = param_2[1];
  fVar12 = param_3[1];
  fVar13 = param_3[2];
  fVar14 = param_2[2];
  fVar15 = param_2[3];
  fVar16 = param_3[3];
  fVar17 = *param_1;
  fVar18 = param_1[1];
  fVar19 = param_1[2];
  param_4[3] = param_1[3] - (fVar7 - fVar8);
  *param_4 = fVar17 - (fVar1 - fVar2);
  param_4[1] = fVar18 - (fVar3 - fVar4);
  param_4[2] = fVar19 - (fVar5 - fVar6);
  fVar17 = *param_1;
  fVar18 = param_1[1];
  fVar19 = param_1[2];
  param_5[3] = param_1[3] - (fVar15 + fVar16);
  *param_5 = fVar17 - (fVar9 + fVar10);
  param_5[1] = fVar18 - (fVar11 + fVar12);
  param_5[2] = fVar19 - (fVar13 + fVar14);
  fVar17 = *param_1;
  fVar18 = param_1[1];
  fVar19 = param_1[2];
  param_6[3] = fVar15 + fVar16 + param_1[3];
  *param_6 = fVar9 + fVar10 + fVar17;
  param_6[1] = fVar11 + fVar12 + fVar18;
  param_6[2] = fVar13 + fVar14 + fVar19;
  fVar9 = param_1[1];
  fVar10 = param_1[2];
  fVar11 = param_1[3];
  *param_7 = (fVar1 - fVar2) + *param_1;
  param_7[3] = (fVar7 - fVar8) + fVar11;
  param_7[1] = (fVar3 - fVar4) + fVar9;
  param_7[2] = (fVar5 - fVar6) + fVar10;
  return;
}

