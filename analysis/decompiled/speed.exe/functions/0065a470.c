/* speed.exe 0065a470 FUN_0065a470; analysis pseudocode, not buildable source.
 * calls 0065a3e0 FUN_0065a3e0
 * calls 0045f340 FUN_0045f340
 * calls 0045f640 FUN_0045f640
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0065a470(int param_1,undefined4 param_2,float param_3,float param_4)

{
  int iVar1;
  float fVar2;
  float10 fVar3;
  float local_34;
  float local_30;
  int local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  fVar3 = (float10)FUN_0065a3e0(param_2,0);
  local_28 = (float)(fVar3 - (float10)param_3);
  local_24 = 0.0;
  local_34 = 1.4013e-45;
  if (1 < *(int *)(param_1 + 4)) {
    local_2c = 0x10;
    fVar2 = 0.0;
    do {
      fVar3 = (float10)FUN_0065a3e0(param_2,(float)(int)local_34);
      local_30 = (float)(fVar3 - (float10)param_3);
      if (local_28 * local_30 < _DAT_00890968) {
        iVar1 = *(int *)(param_1 + 0xc) + local_2c;
        local_20 = *(float *)(iVar1 + -0x10) * _DAT_008933d4;
        local_1c = *(float *)(*(int *)(param_1 + 0xc) + -0xc + local_2c) * _DAT_008933d4;
        local_18 = *(float *)(iVar1 + -8) * _DAT_008933d4;
        FUN_0045f640(&local_20,&local_20,iVar1,0x3f000000);
        fVar3 = (float10)FUN_0045f340(param_2,&local_20);
        if ((fVar2 == 0.0) || (fVar3 < (float10)local_24)) {
          local_24 = (float)fVar3;
          fVar2 = local_34;
        }
      }
      local_34 = (float)((int)local_34 + 1);
      local_2c = local_2c + 0x10;
      local_28 = local_30;
    } while ((int)local_34 < *(int *)(param_1 + 4));
    if (fVar2 != 0.0) {
      local_34 = (float)((int)fVar2 + -1);
      iVar1 = 0;
      local_24 = (float)(int)fVar2;
      fVar3 = (float10)FUN_0065a3e0(param_2,local_34);
      local_28 = local_34;
      if ((float10)param_4 < ABS(fVar3 - (float10)param_3)) {
        do {
          if (9 < iVar1) break;
          local_34 = (local_24 + local_28) * _DAT_008933d4;
          fVar3 = (float10)FUN_0065a3e0(param_2,local_34);
          fVar3 = fVar3 - (float10)param_3;
          iVar1 = iVar1 + 1;
          fVar2 = local_34;
          if ((float10)_DAT_00890968 <= (float10)local_30 * fVar3) {
            local_30 = (float)fVar3;
            fVar2 = local_28;
            local_24 = local_34;
          }
          local_28 = fVar2;
        } while ((float10)param_4 < ABS(fVar3));
      }
      return (float10)local_34;
    }
  }
  if (_DAT_00890968 <= local_28) {
    return (float10)_DAT_00890da8;
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      return (float10)*(int *)(param_1 + 4) + (float10)_DAT_0089096c;
    }
    if (iVar1 != 2) {
      return (float10)_DAT_00890968 + (float10)_DAT_0089096c;
    }
  }
  return (float10)(*(int *)(param_1 + 4) + -1) + (float10)_DAT_0089096c;
}

