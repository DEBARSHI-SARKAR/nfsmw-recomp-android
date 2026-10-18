/* speed.exe 007676c0 FUN_007676c0; analysis pseudocode, not buildable source.
 * calls 005c5e90 FUN_005c5e90
 * calls 005c6420 FUN_005c6420
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007676c0(float *param_1,float *param_2)

{
  float10 fVar1;
  float10 fVar2;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_c = param_2[3] - *param_2;
  local_8 = param_2[4] - param_2[1];
  local_4 = param_2[5] - param_2[2];
  local_18 = *param_2 - param_2[6];
  local_14 = param_2[1] - param_2[7];
  local_10 = param_2[2] - param_2[8];
  FUN_005c6420(&local_c,&local_18,&local_24);
  fVar1 = (float10)FUN_005c5e90(&local_24);
  if ((float10)_DAT_00891218 <= fVar1) {
    fVar1 = (float10)_DAT_0089096c / fVar1;
    local_24 = (float)((float10)local_24 * fVar1);
    fVar2 = (float10)local_20;
    local_20 = (float)(fVar2 * fVar1);
    local_1c = (float)((float10)local_1c * fVar1);
    if (fVar2 * fVar1 < (float10)_DAT_0089097c) goto LAB_0076776b;
  }
  local_20 = 0.9999;
LAB_0076776b:
  *param_1 = local_24;
  param_1[1] = local_20;
  param_1[2] = local_1c;
  return;
}

