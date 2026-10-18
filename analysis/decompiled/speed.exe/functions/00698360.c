/* speed.exe 00698360 FUN_00698360; analysis pseudocode, not buildable source.
 * calls 00401b80 FUN_00401b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00698360(int param_1,char param_2,int param_3,char param_4,float *param_5,float *param_6,
            float param_7,char param_8)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float local_24;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (param_7 < _DAT_008aabe0 != (param_7 == _DAT_008aabe0)) {
    return 0;
  }
  iVar2 = **(int **)(param_3 + 0x78);
  iVar3 = **(int **)(param_1 + 0x78);
  if (param_4 == param_2) {
    if (param_2 != '\0') {
      return 0;
    }
    local_24 = -(*param_5 * *(float *)(iVar3 + 0x20) +
                *(float *)(iVar3 + 0x24) * param_5[1] + *(float *)(iVar3 + 0x28) * param_5[2]);
    fVar4 = *(float *)(iVar2 + 0x20) * *param_5 +
            *(float *)(iVar2 + 0x24) * param_5[1] + *(float *)(iVar2 + 0x28) * param_5[2];
    fVar5 = fVar4 + local_24;
    fVar1 = fVar5;
    if (fVar5 < _DAT_00890968) {
      fVar1 = -fVar5;
    }
    if (((fVar1 <= _DAT_008aabe0) || (*(int *)(param_1 + 0x108) != *(int *)(param_3 + 0x108))) ||
       (*(int *)(param_1 + 0x108) != 2)) {
      fVar4 = *(float *)(iVar3 + 0x2c) / (*(float *)(iVar2 + 0x2c) + *(float *)(iVar3 + 0x2c));
      local_10 = (_DAT_0089096c - fVar4) * param_7;
      local_18 = local_10 * *param_5;
      local_14 = local_10 * param_5[1];
      local_10 = local_10 * param_5[2];
      local_4 = fVar4 * param_7 * _DAT_008aac20;
      local_c = local_4 * *param_5;
      local_8 = local_4 * param_5[1];
      local_4 = local_4 * param_5[2];
    }
    else {
      local_24 = local_24 * (param_7 / fVar5);
      fVar4 = (param_7 / fVar5) * fVar4;
      fVar1 = fVar4;
      if (_DAT_00890968 < fVar5) {
        fVar1 = local_24;
        local_24 = fVar4;
      }
      local_24 = (_DAT_0089096c / param_7) * local_24;
      fVar1 = (_DAT_0089096c / param_7) * fVar1;
      if (fVar1 <= _DAT_0089096c) {
        if (_DAT_0089096c < local_24) {
          local_24 = 1.0;
          fVar1 = _DAT_00890968;
        }
      }
      else {
        local_24 = 0.0;
        fVar1 = _DAT_0089096c;
      }
      FUN_00401b80(param_5,fVar1 * param_7,&local_18);
      FUN_00401b80(param_5,local_24 * param_7 * _DAT_008aac20,&local_c);
    }
  }
  else {
    if (param_4 == '\0') {
      local_24 = 1.0;
      local_10 = _DAT_00890968;
    }
    else {
      local_24 = 0.0;
      local_10 = _DAT_0089096c;
    }
    local_10 = param_7 * local_10;
    local_18 = local_10 * *param_5;
    local_14 = local_10 * param_5[1];
    local_10 = local_10 * param_5[2];
    local_4 = local_24 * param_7 * _DAT_008aac20;
    local_c = local_4 * *param_5;
    local_8 = local_4 * param_5[1];
    local_4 = local_4 * param_5[2];
  }
  *(float *)(iVar3 + 0x10) = local_18 + *(float *)(iVar3 + 0x10);
  *(float *)(iVar3 + 0x14) = local_14 + *(float *)(iVar3 + 0x14);
  *(float *)(iVar3 + 0x18) = local_10 + *(float *)(iVar3 + 0x18);
  *(float *)(iVar2 + 0x10) = local_c + *(float *)(iVar2 + 0x10);
  *(float *)(iVar2 + 0x14) = local_8 + *(float *)(iVar2 + 0x14);
  *(float *)(iVar2 + 0x18) = local_4 + *(float *)(iVar2 + 0x18);
  if (param_8 == '\0') {
    *param_6 = local_c + *param_6;
    param_6[1] = local_8 + param_6[1];
    param_6[2] = local_4 + param_6[2];
    return 1;
  }
  *param_6 = local_18 + *param_6;
  param_6[1] = local_14 + param_6[1];
  param_6[2] = local_10 + param_6[2];
  return 1;
}

