/* speed.exe 0048dc80 FUN_0048dc80; analysis pseudocode, not buildable source.
 * calls 0048db70 FUN_0048db70
 * calls 0048da30 FUN_0048da30
 * calls 0048dc20 FUN_0048dc20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048dc80(float *param_1,float *param_2,undefined4 *param_3)

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
  float local_8;
  float local_4;
  
  local_1c = _DAT_0089096c /
             SQRT(param_1[2] * param_1[2] + param_1[1] * param_1[1] + *param_1 * *param_1);
  local_24 = local_1c * *param_1;
  local_20 = local_1c * param_1[1];
  local_1c = local_1c * param_1[2];
  local_10 = _DAT_0089096c /
             SQRT(param_2[2] * param_2[2] + param_2[1] * param_2[1] + *param_2 * *param_2);
  local_18 = local_10 * *param_2;
  local_14 = local_10 * param_2[1];
  local_10 = local_10 * param_2[2];
  fVar1 = local_14 * local_20 + local_18 * local_24 + local_10 * local_1c;
  if (_DAT_008955a0 < fVar1) {
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0x3f800000;
    return;
  }
  if (fVar1 < _DAT_00895400) {
    FUN_0048db70(&local_24,&local_c);
    FUN_0048dc20(&local_c,0x40490fdb,param_3);
    return;
  }
  local_c = local_10 * local_20 - local_14 * local_1c;
  local_8 = local_1c * local_18 - local_10 * local_24;
  local_4 = local_14 * local_24 - local_18 * local_20;
  fVar2 = (float10)FUN_0048da30(&local_24,&local_18,param_3);
  FUN_0048dc20(&local_c,(float)fVar2);
  return;
}

