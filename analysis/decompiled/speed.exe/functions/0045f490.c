/* speed.exe 0045f490 FUN_0045f490; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045f490(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = SQRT(param_2[2] * param_2[2] + param_2[1] * param_2[1] + *param_2 * *param_2);
  if (fVar3 != _DAT_00890968) {
    fVar3 = _DAT_0089096c / fVar3;
    fVar2 = param_2[2];
    fVar1 = param_2[1];
    *param_1 = fVar3 * *param_2;
    param_1[1] = fVar1 * fVar3;
    param_1[2] = fVar2 * fVar3;
    return;
  }
  *param_1 = 1.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  return;
}

