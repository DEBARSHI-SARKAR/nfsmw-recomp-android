/* speed.exe 004948c0 FUN_004948c0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004948c0(int param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = param_2[2] * param_2[2] + param_2[1] * param_2[1] + *param_2 * *param_2;
  if (_DAT_0089096c < fVar1) {
    param_2[3] = 0.0;
    fVar1 = _DAT_0089096c / SQRT(fVar1);
    *param_2 = fVar1 * *param_2;
    param_2[1] = fVar1 * param_2[1];
    param_2[2] = fVar1 * param_2[2];
    return;
  }
  fVar1 = _DAT_0089096c - fVar1;
  param_2[3] = SQRT(fVar1);
  if (0 < param_1) {
    param_2[3] = -SQRT(fVar1);
    return;
  }
  return;
}

