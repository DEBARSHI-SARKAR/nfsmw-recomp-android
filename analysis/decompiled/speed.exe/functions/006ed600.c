/* speed.exe 006ed600 FUN_006ed600; analysis pseudocode, not buildable source.
 * calls 0040fe20 FUN_0040fe20
 * calls 006e9390 FUN_006e9390
 * calls 006e9400 FUN_006e9400
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_006ed600(float *param_1,undefined4 param_2,float *param_3,float param_4,float *param_5)

{
  float fVar1;
  float *pfVar2;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined1 local_c [12];
  
  pfVar2 = param_3;
  param_4 = param_4 * param_4;
  if ((param_3[2] - param_1[2]) * (param_3[2] - param_1[2]) +
      (param_3[1] - param_1[1]) * (param_3[1] - param_1[1]) +
      (*param_3 - *param_1) * (*param_3 - *param_1) < param_4) {
    *param_5 = *param_1;
    param_5[1] = param_1[1];
    param_5[2] = param_1[2];
    return 1;
  }
  FUN_0040fe20(param_2,&local_24);
  local_18 = local_24 * _DAT_00894200 + *param_1;
  local_14 = local_20 * _DAT_00894200 + param_1[1];
  local_10 = local_1c * _DAT_00894200 + param_1[2];
  FUN_006e9390(param_1,&local_18,&param_3,local_c);
  FUN_006e9400(pfVar2,param_1,param_3,local_c,&local_24);
  fVar1 = (local_1c - pfVar2[2]) * (local_1c - pfVar2[2]) +
          (local_20 - pfVar2[1]) * (local_20 - pfVar2[1]) +
          (local_24 - *pfVar2) * (local_24 - *pfVar2);
  if (fVar1 < param_4 != (fVar1 == param_4)) {
    *param_5 = local_24;
    param_5[1] = local_20;
    param_5[2] = local_1c;
    return 2;
  }
  return 0;
}

