/* speed.exe 005c67f0 FUN_005c67f0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c67f0(float *param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = SQRT(param_1[2] * param_1[2] + param_1[1] * param_1[1] + *param_1 * *param_1);
  if (_DAT_00890968 < fVar1) {
    fVar1 = _DAT_0089096c / fVar1;
    *param_2 = fVar1 * *param_1;
    param_2[1] = fVar1 * param_1[1];
    param_2[2] = fVar1 * param_1[2];
    return;
  }
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  return;
}

