/* speed.exe 0065a6a0 FUN_0065a6a0; analysis pseudocode, not buildable source.
 * calls 00659e70 FUN_00659e70
 * calls 0065a370 FUN_0065a370
 * calls 00659db0 FUN_00659db0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0065a6a0(int param_1,float *param_2,float param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float10 fVar8;
  int local_48;
  float local_44;
  int local_40;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  local_38 = 0.0;
  fVar8 = (float10)FUN_0065a370(param_2,0);
  local_44 = (float)fVar8;
  local_48 = 1;
  if (1 < *(int *)(param_1 + 4)) {
    do {
      FUN_00659db0(&local_30,(float)local_48);
      FUN_00659e70(&local_20,(float)local_48);
      local_30 = local_30 - *param_2;
      local_2c = local_2c - param_2[1];
      local_28 = local_28 - param_2[2];
      local_38 = local_30 * local_20 + local_1c * local_2c + local_18 * local_28;
      if (local_44 * local_38 < _DAT_00890968) break;
      local_48 = local_48 + 1;
      local_44 = local_38;
    } while (local_48 < *(int *)(param_1 + 4));
  }
  iVar1 = *(int *)(param_1 + 4);
  if (local_48 < iVar1) {
    fVar3 = (float)(local_48 + -1);
    local_40 = 0;
    fVar4 = fVar3;
    fVar7 = (float)local_48;
    while ((fVar6 = local_38, fVar5 = fVar7, param_3 < ABS(local_44) && (local_40 < 10))) {
      fVar3 = (fVar5 + fVar4) * _DAT_008933d4;
      FUN_00659db0(&local_30,fVar3);
      FUN_00659e70(&local_20,fVar3);
      local_30 = local_30 - *param_2;
      local_40 = local_40 + 1;
      local_2c = local_2c - param_2[1];
      local_28 = local_28 - param_2[2];
      local_44 = local_30 * local_20 + local_1c * local_2c + local_18 * local_28;
      fVar7 = fVar3;
      local_38 = local_44;
      if (fVar6 * local_44 < _DAT_00890968) {
        fVar4 = fVar3;
        fVar7 = fVar5;
        local_38 = fVar6;
      }
    }
    return (float10)fVar3;
  }
  if (_DAT_00890968 <= local_44) {
LAB_0065a79f:
    return (float10)_DAT_00890968;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      return (float10)iVar1;
    }
    if (iVar2 != 2) goto LAB_0065a79f;
  }
  return (float10)(iVar1 + -1);
}

