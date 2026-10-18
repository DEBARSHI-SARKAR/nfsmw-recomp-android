/* speed.exe 005aff50 FUN_005aff50; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005aff50(float *param_1,float *param_2)

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
  
  fVar8 = *param_1 + *param_1;
  fVar10 = param_1[1] + param_1[1];
  fVar11 = param_1[2] + param_1[2];
  fVar9 = fVar8 * *param_1;
  fVar1 = *param_1;
  fVar2 = *param_1;
  fVar3 = param_1[1];
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar8 = fVar8 * param_1[3];
  fVar6 = param_1[3];
  fVar7 = param_1[3];
  param_2[0xc] = 0.0;
  param_2[0xd] = 0.0;
  param_2[0xe] = 0.0;
  param_2[3] = 0.0;
  fVar12 = _DAT_0089096c - (fVar11 * fVar5 + fVar10 * fVar3);
  param_2[7] = 0.0;
  param_2[0xb] = 0.0;
  *param_2 = fVar12;
  param_2[0xf] = 1.0;
  param_2[4] = fVar10 * fVar1 - fVar11 * fVar7;
  param_2[8] = fVar10 * fVar6 + fVar11 * fVar2;
  param_2[1] = fVar11 * fVar7 + fVar10 * fVar1;
  param_2[5] = _DAT_0089096c - (fVar11 * fVar5 + fVar9);
  param_2[9] = fVar11 * fVar4 - fVar8;
  param_2[2] = fVar11 * fVar2 - fVar10 * fVar6;
  param_2[6] = fVar8 + fVar11 * fVar4;
  param_2[10] = _DAT_0089096c - (fVar10 * fVar3 + fVar9);
  return;
}

