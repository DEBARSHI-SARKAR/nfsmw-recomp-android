/* speed.exe 0076df10 FUN_0076df10; analysis pseudocode, not buildable source.
 * calls 0040fe20 FUN_0040fe20
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0076df10(float *param_1,float *param_2,float *param_3,float *param_4,char param_5)

{
  float fVar1;
  float10 fVar2;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  local_24 = *param_2 - *param_1;
  local_20 = param_2[1] - param_1[1];
  local_1c = param_2[2] - param_1[2];
  FUN_0040fe20(&local_24,&local_24);
  local_18 = *param_3 - *param_1;
  local_14 = param_3[1] - param_1[1];
  local_10 = param_3[2] - param_1[2];
  local_c = local_18;
  fVar2 = (float10)FUN_005c5e80(local_18 * local_18 + local_14 * local_14 + local_10 * local_10);
  FUN_0040fe20(&local_18,&local_18);
  fVar1 = (local_14 * local_20 + local_10 * local_1c + local_18 * local_24) * (float)fVar2;
  fVar2 = (float10)FUN_005c5e80((*param_1 - *param_2) * (*param_1 - *param_2) +
                                (param_1[1] - param_2[1]) * (param_1[1] - param_2[1]) +
                                (param_1[2] - param_2[2]) * (param_1[2] - param_2[2]));
  if (param_5 != '\0') {
    if ((float)fVar2 <= fVar1) {
      fVar2 = (float10)_DAT_0089096c;
      *param_4 = *param_2;
      param_4[1] = param_2[1];
      param_4[2] = param_2[2];
      return fVar2;
    }
    if (fVar1 < _DAT_00890968 != (fVar1 == _DAT_00890968)) {
      fVar2 = (float10)_DAT_00890968;
      *param_4 = *param_1;
      param_4[1] = param_1[1];
      param_4[2] = param_1[2];
      return fVar2;
    }
  }
  FUN_0040fe20(&local_24,&local_24);
  *param_4 = local_24 * fVar1 + *param_1;
  param_4[1] = local_20 * fVar1 + param_1[1];
  param_4[2] = local_1c * fVar1 + param_1[2];
  return (float10)fVar1 / (float10)(float)fVar2;
}

