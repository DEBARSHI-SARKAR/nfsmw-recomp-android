/* speed.exe 0040a390 FUN_0040a390; analysis pseudocode, not buildable source.
 * calls 00409f90 FUN_00409f90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a390(float *param_1,undefined4 param_2,undefined4 param_3,float param_4,
                 undefined4 param_5,undefined4 param_6,float param_7)

{
  float fVar1;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_00409f90(&local_c,param_2,param_3,param_5,param_6);
  fVar1 = local_8 * local_8 + local_c * local_c + local_4 * local_4;
  fVar1 = SQRT(fVar1) * fVar1;
  if (fVar1 <= _DAT_00890cd4) {
    fVar1 = _DAT_00890cd4;
  }
  fVar1 = ((param_4 + param_7) * (param_4 + param_7)) / fVar1;
  *param_1 = local_c * fVar1 + *param_1;
  param_1[1] = local_8 * fVar1 + param_1[1];
  param_1[2] = local_4 * fVar1 + param_1[2];
  return;
}

