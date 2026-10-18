/* speed.exe 006e9390 FUN_006e9390; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006e9390(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  
  *param_4 = *param_2 - *param_1;
  param_4[1] = param_2[1] - param_1[1];
  fVar1 = param_2[2] - param_1[2];
  param_4[2] = fVar1;
  fVar1 = fVar1 * fVar1 + param_4[1] * param_4[1] + *param_4 * *param_4;
  if (fVar1 == _DAT_00890968) {
    *param_3 = 0.0;
    return;
  }
  *param_3 = _DAT_0089096c / fVar1;
  return;
}

