/* speed.exe 0045f3c0 FUN_0045f3c0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045f3c0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = SQRT(*param_2 * *param_2 + param_2[1] * param_2[1]);
  if (fVar2 != _DAT_00890968) {
    fVar1 = param_2[1];
    fVar2 = _DAT_0089096c / fVar2;
    *param_1 = fVar2 * *param_2;
    param_1[1] = fVar2 * fVar1;
    return;
  }
  *param_1 = 1.0;
  param_1[1] = 0.0;
  return;
}

