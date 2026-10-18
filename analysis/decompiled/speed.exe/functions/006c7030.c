/* speed.exe 006c7030 FUN_006c7030; analysis pseudocode, not buildable source.
 * calls 006c6f30 FUN_006c6f30
 * calls 006be800 FUN_006be800
 * calls 0045ed20 thunk_FUN_006bd940
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall
FUN_006c7030(undefined4 *param_1,float *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,int *param_11,char param_12)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  undefined1 local_30 [8];
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  param_1[1] = param_3;
  param_1[3] = param_5;
  param_1[2] = param_4;
  param_1[6] = param_9;
  param_1[5] = param_8;
  param_1[8] = param_10;
  *param_1 = param_2;
  param_1[7] = param_7;
  param_1[0x10] = 0xbf800000;
  param_1[4] = param_6;
  param_1[0xf] = 0;
  param_1[9] = *param_11;
  param_1[10] = param_11[1];
  param_1[0xb] = param_11[2];
  param_1[0xc] = param_11[3];
  param_1[0xd] = param_11[4];
  if (*(char *)(*param_11 + 0x54) == '\x02') {
    uVar1 = FUN_006c6f30(param_1[1],*param_1,param_7);
    param_1[0xe] = uVar1 | 0x80000000;
    return uVar1 | 0x80000000;
  }
  if (param_12 != '\0') {
    param_1[0xe] = (int)param_12 | 0x80000000U;
    return (int)param_12 | 0x80000000U;
  }
  param_1[0xe] = 0;
  if (param_1[9] != 0) {
    param_1[0xe] = *(undefined4 *)(param_1[9] + 0x24);
  }
  if (param_1[10] != 0) {
    param_1[0xe] = param_1[0xe] << 1 ^ *(uint *)(param_1[10] + 0x24);
  }
  if (param_1[0xb] != 0) {
    param_1[0xe] = param_1[0xe] << 1 ^ *(uint *)(param_1[0xb] + 0x24);
  }
  if (param_1[0xc] != 0) {
    param_1[0xe] = param_1[0xe] << 1 ^ *(uint *)(param_1[0xc] + 0x24);
  }
  if (param_1[0xd] != 0) {
    param_1[0xe] = param_1[0xe] << 1 ^ *(uint *)(param_1[0xd] + 0x24);
  }
  param_1[0xe] = param_1[0xe] ^ param_1[3];
  *(undefined1 *)((int)param_1 + 0x3b) = 0;
  iVar3 = *(int *)(param_6 + 4);
  if (*(int *)(DAT_00982a20 + 4) == 1) {
    switch(iVar3) {
    case 0:
    case 1:
    case 3:
    case 4:
    case 5:
    case 0x12:
      if (DAT_00901830 < 1) {
        param_1[0xf] = 0;
      }
      else {
        local_40 = *param_2;
        local_3c = param_2[1];
        local_38 = param_2[2];
        local_50 = param_2[3];
        local_4c = param_2[4];
        local_48 = param_2[5];
        FUN_006be800(param_7,&local_40,&local_50);
        local_20 = (local_50 + local_40) * _DAT_008933d4;
        local_1c = (local_4c + local_3c) * _DAT_008933d4;
        local_18 = (local_48 + local_38) * _DAT_008933d4;
        thunk_FUN_006bd940(local_30,DAT_00919650 + 0x80,&local_20);
        if ((_DAT_008fae68 < _DAT_008fae50 != (_DAT_008fae68 == _DAT_008fae50)) ||
           (_DAT_008fae60 < local_28)) {
          param_1[0xf] = 0;
        }
        else if (local_28 <= _DAT_008fae58) {
          if (local_28 < _DAT_008fae58 != (local_28 == _DAT_008fae58)) {
            iVar4 = *(int *)(param_6 + 0x38);
            if (DAT_00982c3c < *(int *)(param_6 + 0x38)) {
              iVar4 = DAT_00982c3c;
            }
            param_1[0xf] = iVar4;
          }
        }
        else {
          iVar4 = *(int *)(param_6 + 0x38);
          if (_DAT_008fae5c <= local_28) {
            iVar2 = DAT_00982c3c + -2;
            if (iVar4 < DAT_00982c3c + -2) {
              iVar2 = iVar4;
            }
            param_1[0xf] = iVar2;
            if (iVar2 < 2) {
              iVar2 = 1;
            }
            param_1[0xf] = iVar2;
            if (*(int *)(param_1[4] + 4) != 4) {
              param_1[0x10] = local_28;
            }
          }
          else {
            iVar2 = DAT_00982c3c + -1;
            if (iVar4 < DAT_00982c3c + -1) {
              iVar2 = iVar4;
            }
            param_1[0xf] = iVar2;
            if (iVar2 < 2) {
              iVar2 = 1;
            }
            param_1[0xf] = iVar2;
          }
        }
      }
      iVar3 = iVar3 + param_1[0xf] * 0x1f;
    }
  }
  uVar1 = param_1[0xe] | iVar3 << 0x18;
  param_1[0xe] = uVar1;
  return uVar1;
}

