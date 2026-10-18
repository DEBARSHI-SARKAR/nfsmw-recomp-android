/* speed.exe 00514600 FUN_00514600; analysis pseudocode, not buildable source.
 * calls 0083b8a0 FUN_0083b8a0
 * calls 00460dd0 FUN_00460dd0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00514600(undefined4 param_1,uint param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  int local_4;
  
  local_4 = 0;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  FUN_0083b8a0(param_3 + 0x1c,&local_1c,0x1c,&DAT_0089b350);
  FUN_0083b8a0(param_4 + 0x1c,&local_38,0x1c,&DAT_0089b350);
  iVar5 = local_30 + local_34;
  iVar4 = local_14 + local_18;
  fVar1 = _DAT_00890968;
  fVar2 = _DAT_00890968;
  switch(param_2 & 0xfffffff) {
  case 0:
    local_4 = *(int *)(param_3 + 4) - *(int *)(param_4 + 4);
    if (-1 < (int)param_2) {
      return -local_4;
    }
    break;
  case 1:
    local_4 = FUN_00460dd0(param_3 + 0xc,param_4 + 0xc);
    if (-1 < (int)param_2) {
      return -local_4;
    }
    break;
  case 2:
    if (iVar4 != 0) {
      fVar1 = (float)local_18;
      if (local_18 < 0) {
        fVar1 = fVar1 + _DAT_00891214;
      }
      fVar3 = (float)iVar4;
      if (iVar4 < 0) {
        fVar3 = fVar3 + _DAT_00891214;
      }
      fVar1 = (fVar1 / fVar3) * _DAT_00890fc8;
    }
    if (iVar5 != 0) {
      fVar2 = (float)local_34;
      if (local_34 < 0) {
        fVar2 = fVar2 + _DAT_00891214;
      }
LAB_0051488c:
      fVar3 = (float)iVar5;
      if (iVar5 < 0) {
        fVar3 = fVar3 + _DAT_00891214;
      }
      fVar2 = (fVar2 / fVar3) * _DAT_00890fc8;
    }
    goto LAB_0051489e;
  case 3:
    local_4 = local_c - local_28;
    if (-1 < (int)param_2) {
      return -local_4;
    }
    break;
  case 4:
    if (iVar4 != 0) {
      fVar1 = (float)local_4;
      if (local_4 < 0) {
        fVar1 = fVar1 + _DAT_00891214;
      }
      fVar3 = (float)iVar4;
      if (iVar4 < 0) {
        fVar3 = fVar3 + _DAT_00891214;
      }
      fVar1 = fVar1 / fVar3;
    }
    if (iVar5 != 0) {
      fVar2 = (float)local_20;
      if (local_20 < 0) {
        fVar2 = fVar2 + _DAT_00891214;
      }
      fVar3 = (float)iVar5;
      if (iVar5 < 0) {
        fVar3 = fVar3 + _DAT_00891214;
      }
      fVar2 = fVar2 / fVar3;
    }
    goto LAB_0051489e;
  case 5:
    local_4 = local_4 - local_20;
    if (-1 < (int)param_2) {
      return -local_4;
    }
    break;
  case 6:
    if (iVar4 != 0) {
      fVar1 = (float)local_10;
      if (local_10 < 0) {
        fVar1 = fVar1 + _DAT_00891214;
      }
      fVar3 = (float)iVar4;
      if (iVar4 < 0) {
        fVar3 = fVar3 + _DAT_00891214;
      }
      fVar1 = (fVar1 / fVar3) * _DAT_00890fc8;
    }
    if (iVar5 != 0) {
      fVar2 = (float)local_2c;
      if (local_2c < 0) {
        fVar2 = fVar2 + _DAT_00891214;
      }
      goto LAB_0051488c;
    }
LAB_0051489e:
    if (fVar1 <= fVar2) {
      if (fVar1 == fVar2) {
        local_4 = 0;
      }
      else {
        local_4 = -1;
      }
    }
    else {
      local_4 = 1;
    }
    if (-1 < (int)param_2) {
      return -local_4;
    }
    break;
  case 7:
    iVar4 = iVar4 - iVar5;
    if (-1 < (int)param_2) {
      iVar4 = -iVar4;
    }
    return iVar4;
  case 8:
    local_18 = local_18 - local_34;
    if (-1 < (int)param_2) {
      local_18 = -local_18;
    }
    return local_18;
  case 9:
    local_14 = local_14 - local_30;
    if (-1 < (int)param_2) {
      local_14 = -local_14;
    }
    return local_14;
  default:
    local_4 = 0;
  }
  return local_4;
}

