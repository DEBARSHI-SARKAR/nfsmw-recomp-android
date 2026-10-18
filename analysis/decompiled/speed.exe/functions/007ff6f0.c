/* speed.exe 007ff6f0 FUN_007ff6f0; analysis pseudocode, not buildable source.
 * calls 007fe912 FUN_007fe912
 */

int FUN_007ff6f0(code *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                int param_6,int param_7,undefined4 param_8,int param_9)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int local_2c;
  int local_20;
  int local_1c;
  int local_18;
  code *local_14;
  code *local_10;
  uint local_c;
  uint local_8;
  
  iVar3 = (int)param_1;
  iVar2 = (*(int *)((int)param_1 + 0x5c) * 10) / *(int *)((int)param_1 + 0x58);
  param_1 = (code *)0x0;
  local_1c = 1;
  pcVar1 = DAT_009c6a9c;
  if (((iVar2 != 5) && (pcVar1 = DAT_009c6acc, iVar2 != 6)) && (pcVar1 = DAT_009c6a78, iVar2 != 8))
  {
    if (iVar2 == 10) {
      param_1 = FUN_007fe8f2;
      pcVar1 = param_1;
    }
    else {
      local_1c = 0;
      pcVar1 = param_1;
    }
  }
  param_1 = pcVar1;
  iVar3 = (*(int *)(iVar3 + 100) * 10) / *(int *)(iVar3 + 0x60);
  if (iVar3 == 5) {
    local_10 = DAT_009c6a8c;
    local_8 = 1;
    local_c = 2;
    local_14 = DAT_009c6ac0;
  }
  else {
    if (iVar3 == 6) {
      local_10 = DAT_009c6ac4;
      local_8 = 3;
      local_14 = DAT_009c6aac;
    }
    else {
      if (iVar3 != 8) {
        if (iVar3 != 10) {
          return 0;
        }
        local_10 = FUN_007fe912;
        local_14 = FUN_007fe912;
        local_8 = 4;
        local_c = 4;
        goto LAB_007ff7c5;
      }
      local_10 = DAT_009c6a98;
      local_8 = 4;
      local_14 = DAT_009c6a94;
    }
    local_c = 5;
  }
LAB_007ff7c5:
  if (local_1c == 0) {
    return 0;
  }
  (*param_1)(param_2,param_4,param_6,param_8);
  local_2c = ((local_c - 1) + param_9) / local_c - 1;
  if (local_2c != 0) {
    iVar2 = local_c * param_7;
    iVar3 = param_6;
    do {
      if (1 < local_8) {
        local_20 = local_8 - 1;
        local_18 = param_2;
        local_c = iVar3;
        do {
          local_c = local_c + param_7;
          local_18 = param_3 + local_18;
          (*param_1)(local_18,param_4,local_c,param_8);
          local_20 = local_20 + -1;
        } while (local_20 != 0);
      }
      param_6 = iVar2 + iVar3;
      param_2 = param_2 + local_8 * param_3;
      (*param_1)(param_2,param_4,param_6,param_8);
      (*local_10)(iVar3,param_7,param_8);
      local_2c = local_2c + -1;
      iVar3 = param_6;
    } while (local_2c != 0);
  }
  if (1 < local_8) {
    local_2c = local_8 - 1;
    iVar3 = param_6;
    do {
      local_18 = param_2 + param_3;
      iVar3 = iVar3 + param_7;
      (*param_1)(local_18,param_4,iVar3,param_8);
      local_2c = local_2c + -1;
      param_2 = local_18;
    } while (local_2c != 0);
  }
  (*local_14)(param_6,param_7,param_8);
  return local_1c;
}

