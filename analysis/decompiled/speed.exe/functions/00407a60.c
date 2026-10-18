/* speed.exe 00407a60 FUN_00407a60; analysis pseudocode, not buildable source.
 * calls 0045f610 FUN_0045f610
 * calls 004079c0 FUN_004079c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00407a60(float *param_1,float *param_2,float *param_3,float *param_4)

{
  char cVar1;
  float10 fVar2;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_28 = *param_1 - *param_2;
  local_24 = param_1[1] - param_2[1];
  local_30 = *param_3 - *param_2;
  local_2c = param_3[1] - param_2[1];
  FUN_0045f610(&local_18,param_2,&local_28,0x3f000000);
  FUN_0045f610(&local_20,param_2,&local_30,0x3f000000);
  local_8 = local_24 + local_18;
  local_4 = local_14 - local_28;
  local_10 = local_2c + local_20;
  local_c = local_1c - local_30;
  cVar1 = FUN_004079c0(&local_18,&local_8,&local_20,&local_10,param_4);
  if (cVar1 == '\0') {
    return (float10)_DAT_00890968;
  }
  fVar2 = SQRT(((float10)param_2[1] - (float10)param_4[1]) *
               ((float10)param_2[1] - (float10)param_4[1]) +
               ((float10)*param_2 - (float10)*param_4) * ((float10)*param_2 - (float10)*param_4));
  if (fVar2 <= (float10)_DAT_00890d60) {
    fVar2 = (float10)_DAT_00890d60;
  }
  fVar2 = (float10)_DAT_0089096c / fVar2;
  if (local_2c * local_28 - local_30 * local_24 < _DAT_00890968) {
    fVar2 = -fVar2;
  }
  return fVar2;
}

