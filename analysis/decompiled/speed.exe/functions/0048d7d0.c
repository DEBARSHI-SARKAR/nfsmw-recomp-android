/* speed.exe 0048d7d0 FUN_0048d7d0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048d7d0(float param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  
  if (param_3[3] * param_2[3] +
      param_2[1] * param_3[1] + param_2[2] * param_3[2] + *param_2 * *param_3 <= _DAT_00890968) {
    *param_4 = *param_2 - (*param_2 + *param_3) * param_1;
    param_4[1] = param_2[1] - (param_2[1] + param_3[1]) * param_1;
    param_4[2] = param_2[2] - (param_2[2] + param_3[2]) * param_1;
    fVar1 = param_2[3] - (param_3[3] + param_2[3]) * param_1;
  }
  else {
    *param_4 = (*param_3 - *param_2) * param_1 + *param_2;
    param_4[1] = (param_3[1] - param_2[1]) * param_1 + param_2[1];
    param_4[2] = (param_3[2] - param_2[2]) * param_1 + param_2[2];
    fVar1 = (param_3[3] - param_2[3]) * param_1 + param_2[3];
  }
  param_4[3] = fVar1;
  fVar1 = _DAT_0089096c /
          SQRT(param_4[1] * param_4[1] +
               *param_4 * *param_4 + param_4[3] * param_4[3] + param_4[2] * param_4[2]);
  *param_4 = fVar1 * *param_4;
  param_4[1] = fVar1 * param_4[1];
  param_4[2] = fVar1 * param_4[2];
  param_4[3] = fVar1 * param_4[3];
  return;
}

