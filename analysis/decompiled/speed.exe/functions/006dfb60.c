/* speed.exe 006dfb60 FUN_006dfb60; analysis pseudocode, not buildable source.
 * calls 0045ed20 thunk_FUN_006bd940
 * calls 006c6f30 FUN_006c6f30
 * calls 006be800 FUN_006be800
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006dfb60(float *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 int *param_9,char param_10)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
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
  
  if (0xfff < DAT_00982cdc) {
    return;
  }
  iVar4 = DAT_00982cdc * 0x44;
  *(undefined4 *)(&DAT_0093e880 + iVar4) = param_2;
  *(float **)(&DAT_0093e878 + iVar4) = param_1;
  *(undefined4 *)(&DAT_0093e884 + iVar4) = param_3;
  *(undefined4 *)(&DAT_0093e890 + iVar4) = param_7;
  *(undefined4 *)(&DAT_0093e88c + iVar4) = param_6;
  *(undefined4 *)(&DAT_0093e894 + iVar4) = param_5;
  *(int *)(&DAT_0093e888 + iVar4) = param_4;
  *(undefined4 *)(&DAT_0093e898 + iVar4) = param_8;
  *(undefined4 *)(&DAT_0093e8b8 + iVar4) = 0xbf800000;
  *(undefined4 *)(&DAT_0093e87c + iVar4) = 0;
  *(undefined4 *)(&DAT_0093e8b4 + iVar4) = 0;
  *(int *)(&DAT_0093e89c + iVar4) = *param_9;
  *(int *)(&DAT_0093e8a0 + iVar4) = param_9[1];
  *(int *)(&DAT_0093e8a4 + iVar4) = param_9[2];
  *(int *)(&DAT_0093e8a8 + iVar4) = param_9[3];
  *(int *)(&DAT_0093e8ac + iVar4) = param_9[4];
  if (*(char *)(*param_9 + 0x54) == '\x02') {
    uVar1 = FUN_006c6f30(*(undefined4 *)(&DAT_0093e87c + iVar4),
                         *(undefined4 *)(&DAT_0093e878 + iVar4),param_5);
    uVar1 = uVar1 | 0x80000000;
    goto LAB_006dfe22;
  }
  if (param_10 != '\0') {
    uVar1 = (int)param_10 | 0x80000000;
    goto LAB_006dfe22;
  }
  *(undefined4 *)(&DAT_0093e8b0 + iVar4) = 0;
  if (*(int *)(&DAT_0093e89c + iVar4) != 0) {
    *(undefined4 *)(&DAT_0093e8b0 + iVar4) = *(undefined4 *)(*(int *)(&DAT_0093e89c + iVar4) + 0x24)
    ;
  }
  if (*(int *)(&DAT_0093e8a0 + iVar4) != 0) {
    *(uint *)(&DAT_0093e8b0 + iVar4) =
         *(int *)(&DAT_0093e8b0 + iVar4) << 1 ^ *(uint *)(*(int *)(&DAT_0093e8a0 + iVar4) + 0x24);
  }
  if (*(int *)(&DAT_0093e8a4 + iVar4) != 0) {
    *(uint *)(&DAT_0093e8b0 + iVar4) =
         *(int *)(&DAT_0093e8b0 + iVar4) << 1 ^ *(uint *)(*(int *)(&DAT_0093e8a4 + iVar4) + 0x24);
  }
  if (*(int *)(&DAT_0093e8a8 + iVar4) != 0) {
    *(uint *)(&DAT_0093e8b0 + iVar4) =
         *(int *)(&DAT_0093e8b0 + iVar4) << 1 ^ *(uint *)(*(int *)(&DAT_0093e8a8 + iVar4) + 0x24);
  }
  if (*(int *)(&DAT_0093e8ac + iVar4) != 0) {
    *(uint *)(&DAT_0093e8b0 + iVar4) =
         *(int *)(&DAT_0093e8b0 + iVar4) << 1 ^ *(uint *)(*(int *)(&DAT_0093e8ac + iVar4) + 0x24);
  }
  iVar5 = DAT_00982a20;
  *(uint *)(&DAT_0093e8b0 + iVar4) =
       *(uint *)(&DAT_0093e8b0 + iVar4) ^ *(uint *)(&DAT_0093e884 + iVar4);
  (&DAT_0093e8b3)[iVar4] = 0;
  iVar3 = *(int *)(param_4 + 4);
  if (*(int *)(iVar5 + 4) == 1) {
    switch(iVar3) {
    case 0:
    case 1:
    case 3:
    case 4:
    case 5:
    case 0x12:
      if (DAT_00901830 < 1) {
LAB_006dfe09:
        *(undefined4 *)(&DAT_0093e8b4 + iVar4) = 0;
      }
      else {
        local_40 = *param_1;
        local_3c = param_1[1];
        local_38 = param_1[2];
        local_50 = param_1[3];
        local_4c = param_1[4];
        local_48 = param_1[5];
        FUN_006be800(param_5,&local_40,&local_50);
        local_20 = (local_50 + local_40) * _DAT_008933d4;
        local_1c = (local_4c + local_3c) * _DAT_008933d4;
        local_18 = (local_48 + local_38) * _DAT_008933d4;
        thunk_FUN_006bd940(local_30,DAT_00919650 + 0x80,&local_20);
        if ((_DAT_008fae68 < _DAT_008fae50 != (_DAT_008fae68 == _DAT_008fae50)) ||
           (_DAT_008fae60 < local_28)) goto LAB_006dfe09;
        if (local_28 <= _DAT_008fae58) {
          if (local_28 < _DAT_008fae58 != (local_28 == _DAT_008fae58)) {
            iVar5 = *(int *)(param_4 + 0x38);
            if (DAT_00982c3c < *(int *)(param_4 + 0x38)) {
              iVar5 = DAT_00982c3c;
            }
            *(int *)(&DAT_0093e8b4 + iVar4) = iVar5;
          }
        }
        else {
          iVar5 = *(int *)(param_4 + 0x38);
          if (_DAT_008fae5c <= local_28) {
            iVar2 = DAT_00982c3c + -2;
            if (iVar5 < DAT_00982c3c + -2) {
              iVar2 = iVar5;
            }
            *(int *)(&DAT_0093e8b4 + iVar4) = iVar2;
            if (iVar2 < 2) {
              iVar2 = 1;
            }
            *(int *)(&DAT_0093e8b4 + iVar4) = iVar2;
            if (*(int *)(*(int *)(&DAT_0093e888 + iVar4) + 4) != 4) {
              *(float *)(&DAT_0093e8b8 + iVar4) = local_28;
            }
          }
          else {
            iVar2 = DAT_00982c3c + -1;
            if (iVar5 < DAT_00982c3c + -1) {
              iVar2 = iVar5;
            }
            *(int *)(&DAT_0093e8b4 + iVar4) = iVar2;
            if (iVar2 < 2) {
              iVar2 = 1;
            }
            *(int *)(&DAT_0093e8b4 + iVar4) = iVar2;
          }
        }
      }
      iVar3 = iVar3 + *(int *)(&DAT_0093e8b4 + iVar4) * 0x1f;
    }
  }
  uVar1 = *(uint *)(&DAT_0093e8b0 + iVar4) | iVar3 << 0x18;
LAB_006dfe22:
  iVar3 = DAT_009877b4;
  *(uint *)(&DAT_0093e8b0 + iVar4) = uVar1;
  *(int *)(iVar3 + DAT_00982cdc * 8) = DAT_00982cdc;
  *(uint *)(DAT_009877b4 + 4 + DAT_00982cdc * 8) = uVar1;
  if (DAT_008fae70 == -1) {
    DAT_008fae70 = 0;
    _DAT_00982cd4 = 1;
  }
  else {
    _DAT_00982cd4 = _DAT_00982cd4 + 1;
  }
  DAT_00982cdc = DAT_00982cdc + 1;
  DAT_00982cd8 = DAT_00982cd8 + (int)param_1[0x17];
  return;
}

