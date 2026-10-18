/* speed.exe 00418990 FUN_00418990; analysis pseudocode, not buildable source.
 * calls 0040fe20 FUN_0040fe20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00418990(float *param_1,float *param_2,float param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float local_c;
  float local_8;
  float local_4;
  
  local_c = *param_2 - *param_4;
  local_8 = param_2[1] - param_4[1];
  local_4 = param_2[2] - param_4[2];
  FUN_0040fe20(&local_c,&local_c);
  fVar1 = param_3 * param_3;
  if (param_3 * param_3 <= _DAT_0089096c) {
    fVar1 = _DAT_0089096c;
  }
  fVar2 = _DAT_0089096c /
          ((param_2[2] - param_4[2]) * (param_2[2] - param_4[2]) +
          (param_2[1] - param_4[1]) * (param_2[1] - param_4[1]) +
          (*param_2 - *param_4) * (*param_2 - *param_4));
  fVar1 = fVar2 * fVar2 * fVar1;
  *param_1 = local_c * fVar1 + *param_1;
  param_1[1] = local_8 * fVar1 + param_1[1];
  param_1[2] = local_4 * fVar1 + param_1[2];
  return;
}

