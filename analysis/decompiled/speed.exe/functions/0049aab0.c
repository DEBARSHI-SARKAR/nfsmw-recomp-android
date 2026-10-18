/* speed.exe 0049aab0 FUN_0049aab0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049aab0(float *param_1,float *param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar7 = param_2[1];
  fVar1 = param_1[1];
  fVar8 = *param_2;
  fVar2 = *param_1;
  fVar3 = param_1[1];
  fVar4 = param_2[1];
  fVar5 = *param_1;
  fVar6 = *param_2;
  *param_3 = 0;
  param_3[2] = 0;
  fVar1 = ((fVar5 * fVar6 + fVar3 * fVar4) /
           (SQRT(fVar7 * fVar7 + fVar8 * fVar8) * SQRT(fVar1 * fVar1 + fVar2 * fVar2)) +
          _DAT_0089096c) * _DAT_008933d4;
  fVar2 = SQRT(_DAT_0089096c - fVar1);
  param_3[1] = fVar2;
  param_3[3] = SQRT(fVar1);
  if (_DAT_00890968 < *param_1 * param_2[1] - param_1[1] * *param_2) {
    param_3[1] = fVar2 * _DAT_00890da8;
  }
  return;
}

