/* speed.exe 005b3a70 FUN_005b3a70; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b3a70(float *param_1)

{
  float fVar1;
  
  fVar1 = _DAT_0089096c /
          SQRT(param_1[3] * param_1[3] +
               param_1[2] * param_1[2] + param_1[1] * param_1[1] + *param_1 * *param_1);
  if (_DAT_008910cc < fVar1) {
    *param_1 = fVar1 * *param_1;
    param_1[1] = fVar1 * param_1[1];
    param_1[2] = fVar1 * param_1[2];
    param_1[3] = fVar1 * param_1[3];
    return;
  }
  param_1[2] = 0.0;
  param_1[1] = 0.0;
  *param_1 = 0.0;
  param_1[3] = 1.0;
  return;
}

