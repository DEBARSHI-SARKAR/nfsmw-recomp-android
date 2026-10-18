/* speed.exe 005d3cb0 FUN_005d3cb0; analysis pseudocode, not buildable source.
 * calls 005d3bc0 FUN_005d3bc0
 * calls 005ce080 FUN_005ce080
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005d3cb0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  uVar4 = FUN_005ce080(param_1,param_2,param_3,param_4);
  if ((char)uVar4 == '\0') {
    return uVar4 & 0xffffff00;
  }
  local_18 = *param_2 - *param_3;
  local_14 = param_2[1] - param_3[1];
  local_10 = param_2[2] - param_3[2];
  local_24 = *param_4 - *param_3;
  local_20 = param_4[1] - param_3[1];
  local_1c = param_4[2] - param_3[2];
  FUN_005d3bc0(&local_18,&local_24,&local_c);
  fVar1 = param_2[2];
  fVar2 = param_2[1];
  fVar3 = *param_2;
  *param_5 = *param_1;
  param_5[1] = -((local_c * *param_1 + local_4 * param_1[2] +
                 -(local_c * fVar3 + local_8 * fVar2 + local_4 * fVar1)) / local_8);
  param_5[2] = param_1[2];
  fVar1 = param_5[1];
  fVar2 = param_1[1];
  *param_6 = fVar1 - fVar2;
  if (_DAT_00890968 < fVar1 - fVar2) {
    return 1;
  }
  return 0;
}

