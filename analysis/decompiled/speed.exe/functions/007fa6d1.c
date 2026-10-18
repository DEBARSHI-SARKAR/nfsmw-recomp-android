/* speed.exe 007fa6d1 FUN_007fa6d1; analysis pseudocode, not buildable source.
 * calls 007cbb80 __control87
 * calls 007fa552 FUN_007fa552
 * calls 007fb0f9 FUN_007fb0f9
 * calls 007fa5a3 FUN_007fa5a3
 * calls 007fb060 FUN_007fb060
 * calls 007fa41e FUN_007fa41e
 * calls 007e9320 FUN_007e9320
 * calls 007faa62 FUN_007faa62
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_007fa6d1(int *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  uint _NewValue;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar4 = *(int *)(param_2 + 4);
  local_c = 0;
  local_1c = 0;
  local_18 = 0;
  if (param_1[6] != 0) {
    local_c = FUN_007e9320();
    if (*(int *)(local_c + 8) == 0) {
      local_c = 0;
    }
    else {
      local_c = *(int *)(local_c + 8) + local_c;
    }
    local_1c = local_c + param_1[5] * param_1[4];
    local_18 = (param_1[5] * param_1[4] * 5) / 4 + local_c;
  }
  if (param_1[3] != 0) {
    iVar3 = *(int *)(iVar4 + 0xc);
    param_1[2] = iVar3;
    param_1[1] = (int)(_DAT_00894200 / ((float)iVar3 * _DAT_00899ddc));
    param_1[4] = (uint)*(ushort *)(iVar4 + 0x10);
    param_1[5] = (uint)*(ushort *)(iVar4 + 0x12);
    local_14 = *(int *)(param_1[0xc] + 0x14) + 1;
    if (0 < local_14) {
      do {
        FUN_007faa62(param_1[4],param_1[5]);
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    }
    param_1[3] = 0;
  }
  _NewValue = __control87(0,0);
  __control87(0x10000,0x30000);
  iVar3 = FUN_007fa41e();
  if (iVar3 == 0x4d41446b) {
    if (param_1[6] != 0) {
      (**(code **)(*param_1 + 0x14))(param_1[6]);
    }
    param_1[6] = 0;
    local_8 = FUN_007fa552();
    cVar2 = *(char *)(iVar4 + 0x15);
    uVar6 = 0;
  }
  else {
    iVar3 = FUN_007fa41e();
    if (iVar3 == 0x4d41446d) {
      local_8 = FUN_007fa552();
    }
    else {
      local_8 = FUN_007fa5a3();
    }
    cVar2 = *(char *)(iVar4 + 0x15);
    uVar6 = 1;
  }
  FUN_007fb060(iVar4 + 0x18,uVar6,(int)cVar2);
  local_10 = FUN_007e9320();
  if (*(int *)(local_10 + 8) == 0) {
    local_10 = 0;
  }
  else {
    local_10 = *(int *)(local_10 + 8) + local_10;
  }
  iVar4 = param_1[4] * param_1[5];
  local_14 = 0;
  if (0 < param_1[5]) {
    do {
      iVar3 = 0;
      if (0 < param_1[4]) {
        do {
          iVar1 = param_1[4] * local_14 + iVar3;
          iVar5 = (param_1[4] * local_14) / 4 + iVar3 / 2;
          FUN_007fb0f9(iVar1 + local_c,iVar5 + local_1c,local_18 + iVar5,local_10 + iVar1,
                       local_10 + iVar4 + iVar5,(iVar4 * 5) / 4 + local_10 + iVar5,param_1[4]);
          iVar3 = iVar3 + 0x10;
        } while (iVar3 < param_1[4]);
      }
      local_14 = local_14 + 0x10;
    } while (local_14 < param_1[5]);
  }
  __control87(_NewValue,0xfffff);
  iVar4 = FUN_007fa41e();
  if (iVar4 == 0x4d41446d) {
    if (param_1[6] != 0) {
      (**(code **)(*param_1 + 0x14))(param_1[6]);
    }
  }
  else {
    iVar4 = FUN_007fa41e();
    if (iVar4 != 0x4d41446b) {
      return local_8;
    }
  }
  param_1[6] = local_8;
  return local_8;
}

