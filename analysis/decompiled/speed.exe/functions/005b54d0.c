/* speed.exe 005b54d0 FUN_005b54d0; analysis pseudocode, not buildable source.
 * calls 0045dbd0 FUN_0045dbd0
 * calls 0045dd10 FUN_0045dd10
 * calls 005ad0f0 FUN_005ad0f0
 * calls 005ad1b0 FUN_005ad1b0
 * calls 005b3a70 FUN_005b3a70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b54d0(float *param_1,float *param_2,float param_3,undefined4 param_4,undefined4 *param_5
                 )

{
  float fVar1;
  float fVar2;
  short sVar3;
  float *pfVar4;
  undefined4 *puVar5;
  float10 fVar6;
  float10 fVar7;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined1 local_10 [16];
  
  local_40 = *param_2;
  local_3c = param_2[1];
  local_38 = param_2[2];
  local_34 = param_2[3];
  fVar1 = local_3c * param_1[1] +
          local_34 * param_1[3] + local_38 * param_1[2] + local_40 * *param_1;
  if (fVar1 < _DAT_00890968) {
    fVar1 = -fVar1;
    local_40 = -local_40;
    local_3c = -local_3c;
    local_38 = -local_38;
    local_34 = -local_34;
  }
  if (_DAT_008a2d18 <= fVar1) {
    local_30 = (*param_2 - *param_1) * param_3 + *param_1;
    local_2c = (param_2[1] - param_1[1]) * param_3 + param_1[1];
    local_28 = (param_2[2] - param_1[2]) * param_3 + param_1[2];
    local_24 = (param_2[3] - param_1[3]) * param_3 + param_1[3];
    local_20 = local_30;
    local_1c = local_2c;
    local_18 = local_28;
    local_14 = local_24;
    FUN_005b3a70(&local_30);
  }
  else {
    sVar3 = FUN_0045dd10(fVar1);
    fVar2 = (float)(ushort)(0x4000 - sVar3) * _DAT_008941f4;
    fVar6 = (float10)FUN_0045dbd0(fVar2);
    fVar7 = (float10)FUN_0045dbd0(fVar2 * param_3);
    fVar1 = (float)fVar7;
    fVar7 = (float10)FUN_0045dbd0((_DAT_0089096c - param_3) * fVar2);
    local_30 = fVar1 * local_40;
    local_2c = fVar1 * local_3c;
    local_28 = fVar1 * local_38;
    local_24 = fVar1 * local_34;
    local_20 = local_30;
    local_1c = local_2c;
    local_18 = local_28;
    local_14 = local_24;
    pfVar4 = (float *)FUN_005ad1b0(local_10,param_1,(float)fVar7);
    local_24 = _DAT_0089096c / (float)fVar6;
    local_30 = (local_20 + *pfVar4) * local_24;
    local_2c = (local_1c + pfVar4[1]) * local_24;
    local_28 = (local_18 + pfVar4[2]) * local_24;
    local_24 = (local_14 + pfVar4[3]) * local_24;
    local_20 = local_30;
    local_1c = local_2c;
    local_18 = local_28;
    local_14 = local_24;
  }
  puVar5 = (undefined4 *)FUN_005ad0f0(local_10,param_4);
  *param_5 = *puVar5;
  param_5[1] = puVar5[1];
  param_5[2] = puVar5[2];
  param_5[3] = puVar5[3];
  return;
}

