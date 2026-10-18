/* speed.exe 00466af0 FUN_00466af0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00466af0(float *param_1,float *param_2)

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
  
  fVar13 = _DAT_0089096c;
  fVar9 = *param_1 + *param_1;
  fVar11 = param_1[1] + param_1[1];
  fVar12 = param_1[2] + param_1[2];
  fVar1 = *param_1;
  fVar2 = *param_1;
  fVar3 = *param_1;
  fVar4 = param_1[1];
  fVar5 = param_1[1];
  fVar6 = param_1[2];
  fVar10 = fVar9 * param_1[3];
  fVar7 = param_1[3];
  fVar8 = param_1[3];
  param_2[0xc] = 0.0;
  param_2[0xd] = 0.0;
  param_2[0xe] = 0.0;
  param_2[3] = 0.0;
  param_2[7] = 0.0;
  param_2[0xb] = 0.0;
  param_2[0xf] = 1.0;
  *param_2 = (fVar13 - fVar11 * fVar4) - fVar12 * fVar6;
  param_2[4] = fVar11 * fVar2 - fVar12 * fVar8;
  param_2[8] = fVar11 * fVar7 + fVar12 * fVar3;
  param_2[1] = fVar12 * fVar8 + fVar11 * fVar2;
  fVar1 = _DAT_0089096c - fVar9 * fVar1;
  param_2[5] = fVar1 - fVar12 * fVar6;
  param_2[9] = fVar12 * fVar5 - fVar10;
  param_2[2] = fVar12 * fVar3 - fVar11 * fVar7;
  param_2[6] = fVar10 + fVar12 * fVar5;
  param_2[10] = fVar1 - fVar11 * fVar4;
  return;
}

