/* speed.exe 005ca6f0 FUN_005ca6f0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ca6f0(float *param_1,float *param_2)

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
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = *param_1;
  fVar4 = param_1[2];
  fVar5 = param_1[3];
  fVar6 = param_1[1];
  fVar7 = param_1[3];
  fVar8 = param_1[2];
  fVar9 = param_1[2] * param_1[2];
  fVar10 = param_1[1] * param_1[1];
  *param_2 = _DAT_0089096c - (fVar10 + fVar10 + fVar9 + fVar9);
  param_2[1] = fVar7 * fVar8 + fVar7 * fVar8 + fVar1 * fVar2 + fVar1 * fVar2;
  param_2[2] = (fVar3 * fVar4 + fVar3 * fVar4) - (fVar5 * fVar6 + fVar5 * fVar6);
  return;
}

