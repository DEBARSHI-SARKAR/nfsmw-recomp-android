/* speed.exe 0041a230 FUN_0041a230; analysis pseudocode, not buildable source.
 * calls 00410220 FUN_00410220
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0041a230(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float10 fVar1;
  float10 fVar2;
  float local_c;
  float local_8;
  float local_4;
  
  local_c = *param_3 - *param_1;
  local_8 = param_3[1] - param_1[1];
  local_4 = param_3[2] - param_1[2];
  fVar1 = (float10)FUN_00410220(&local_c);
  if ((fVar1 < (float10)_DAT_00890968 == (fVar1 == (float10)_DAT_00890968)) &&
     (fVar2 = ((float10)param_2[1] - (float10)param_4[1]) * (float10)local_8 +
              ((float10)param_2[2] - (float10)param_4[2]) * (float10)local_4 +
              ((float10)*param_2 - (float10)*param_4) * (float10)local_c,
     fVar2 < (float10)_DAT_00890968 == (fVar2 == (float10)_DAT_00890968))) {
    return (float10)(float)fVar1 / fVar2;
  }
  return (float10)_DAT_00890968;
}

