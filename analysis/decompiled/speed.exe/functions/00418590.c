/* speed.exe 00418590 FUN_00418590; analysis pseudocode, not buildable source.
 * calls 0040fe20 FUN_0040fe20
 * calls 00767400 FUN_00767400
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00418590(float *param_1,float *param_2,float *param_3,float param_4,float param_5,
                 float *param_6,float param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  float10 fVar5;
  float10 fVar6;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
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
  
  FUN_005c5e80(param_3[2] * param_3[2] + param_3[1] * param_3[1] + *param_3 * *param_3);
  local_c = *param_3;
  local_4 = param_3[2];
  local_8 = 0.0;
  FUN_0040fe20(&local_c,&local_c);
  fVar5 = (float10)FUN_005c5e80(*param_3 * *param_3 +
                                param_3[2] * param_3[2] + param_3[1] * param_3[1]);
  fVar5 = fVar5 * (float10)param_4;
  if (fVar5 < (float10)_DAT_0089096c) {
    fVar5 = (float10)_DAT_0089096c;
  }
  local_30 = (float)((float10)local_c * fVar5 + (float10)*param_2);
  local_28 = (float)((float10)local_4 * fVar5 + (float10)param_2[2]);
  cVar4 = FUN_00767400(*param_2,param_2[2],local_30,local_28,*param_6,param_6[2],param_7,local_34,
                       local_38);
  if (cVar4 != '\0') {
    FUN_0040fe20(param_3,&local_c);
    fVar1 = local_4 - local_8 * _DAT_00890968;
    fVar3 = local_c * _DAT_00890968 - local_4 * _DAT_00890968;
    fVar2 = local_8 * _DAT_00890968 - local_c;
    param_5 = param_5 + param_7;
    local_18 = fVar1 * param_5 + *param_6;
    local_14 = fVar3 * param_5 + param_6[1];
    local_10 = fVar2 * param_5 + param_6[2];
    param_5 = param_5 * _DAT_00890da8;
    local_c = fVar1 * param_5 + *param_6;
    local_8 = fVar3 * param_5 + param_6[1];
    local_4 = fVar2 * param_5 + param_6[2];
    local_24 = *param_2 - local_18;
    local_20 = param_2[1] - local_14;
    local_1c = param_2[2] - local_10;
    fVar5 = (float10)FUN_005c5e80((*param_2 - local_c) * (*param_2 - local_c) +
                                  (param_2[1] - local_8) * (param_2[1] - local_8) +
                                  (param_2[2] - local_4) * (param_2[2] - local_4));
    fVar6 = (float10)FUN_005c5e80(local_24 * local_24 + local_20 * local_20 + local_1c * local_1c);
    local_28 = local_4;
    local_30 = local_c;
    local_2c = local_8;
    if (fVar6 < (float10)(float)fVar5) {
      local_28 = local_10;
      local_30 = local_18;
      local_2c = local_14;
    }
    *param_1 = local_30 - *param_2;
    param_1[1] = local_2c - param_2[1];
    param_1[2] = local_28 - param_2[2];
    FUN_0040fe20(param_1,param_1);
    return;
  }
  *param_1 = DAT_008a2fb4;
  param_1[1] = DAT_008a2fb8;
  param_1[2] = DAT_008a2fbc;
  return;
}

