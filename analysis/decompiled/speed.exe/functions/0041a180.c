/* speed.exe 0041a180 FUN_0041a180; analysis pseudocode, not buildable source.
 * calls 0040fe20 FUN_0040fe20
 * calls 007c4410 FUN_007c4410
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0041a180(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float10 fVar2;
  float local_c;
  float local_8;
  float local_4;
  
  local_c = *param_3 - *param_1;
  local_8 = param_3[1] - param_1[1];
  local_4 = param_3[2] - param_1[2];
  FUN_0040fe20(&local_c,&local_c);
  fVar1 = local_c * *param_2 + local_4 * param_2[2] + local_8 * param_2[1];
  if ((fVar1 < _DAT_0089096c) && (fVar1 < _DAT_00890da8)) {
    fVar2 = (float10)FUN_007c4410();
    return fVar2 * (float10)_DAT_00890964;
  }
  fVar2 = (float10)FUN_007c4410();
  return fVar2 * (float10)_DAT_00890964;
}

