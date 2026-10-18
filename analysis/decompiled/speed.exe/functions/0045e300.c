/* speed.exe 0045e300 FUN_0045e300; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045e300(float *param_1,float *param_2)

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
  
  fVar1 = *param_2;
  fVar6 = param_2[5];
  fVar2 = param_2[1];
  fVar7 = param_2[4];
  fVar3 = param_2[2];
  fVar4 = param_2[6];
  fVar8 = param_2[9];
  fVar5 = param_2[10];
  fVar9 = param_2[8];
  fVar10 = param_2[0xc];
  fVar11 = param_2[0xd];
  fVar12 = param_2[0xe];
  fVar17 = fVar6 * fVar5 - fVar8 * fVar4;
  param_1[3] = 0.0;
  fVar14 = fVar5 * fVar7 - fVar9 * fVar4;
  fVar13 = fVar8 * fVar7 - fVar9 * fVar6;
  fVar18 = _DAT_0089096c / (fVar13 * fVar3 + (fVar17 * fVar1 - fVar14 * fVar2));
  fVar17 = fVar17 * fVar18;
  *param_1 = fVar17;
  fVar16 = -((fVar5 * fVar2 - fVar8 * fVar3) * fVar18);
  param_1[1] = fVar16;
  fVar15 = (fVar4 * fVar2 - fVar6 * fVar3) * fVar18;
  param_1[2] = fVar15;
  fVar14 = -(fVar14 * fVar18);
  param_1[4] = fVar14;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xf] = 1.0;
  fVar5 = (fVar5 * fVar1 - fVar9 * fVar3) * fVar18;
  param_1[5] = fVar5;
  fVar3 = -((fVar4 * fVar1 - fVar7 * fVar3) * fVar18);
  param_1[6] = fVar3;
  fVar13 = fVar13 * fVar18;
  param_1[8] = fVar13;
  fVar4 = -((fVar8 * fVar1 - fVar9 * fVar2) * fVar18);
  param_1[9] = fVar4;
  fVar18 = (fVar6 * fVar1 - fVar7 * fVar2) * fVar18;
  param_1[10] = fVar18;
  param_1[0xc] = -(fVar17 * fVar10 + fVar14 * fVar11 + fVar13 * fVar12);
  param_1[0xd] = -(fVar16 * fVar10 + fVar5 * fVar11 + fVar4 * fVar12);
  param_1[0xe] = -(fVar15 * fVar10 + fVar3 * fVar11 + fVar18 * fVar12);
  return;
}

