/* speed.exe 006e0ab0 FUN_006e0ab0; analysis pseudocode, not buildable source.
 * calls 0045ed20 thunk_FUN_006bd940
 * calls 006c6f30 FUN_006c6f30
 * calls 006be800 FUN_006be800
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006e0ab0(float *param_1,undefined4 param_2,undefined4 param_3,int param_4,int *param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
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
  
  cVar4 = '\0';
  if (*(char *)(*param_5 + 0x51) != '\0') {
    cVar4 = *(char *)(*param_5 + 0x51);
  }
  if (0xfff < DAT_00982cdc) {
    return;
  }
  iVar6 = DAT_00982cdc * 0x44;
  *(float **)(&DAT_0093e878 + iVar6) = param_1;
  *(undefined4 *)(&DAT_0093e880 + iVar6) = param_2;
  *(undefined4 *)(&DAT_0093e884 + iVar6) = param_3;
  *(undefined4 *)(&DAT_0093e88c + iVar6) = param_7;
  *(undefined4 *)(&DAT_0093e890 + iVar6) = param_8;
  *(undefined4 *)(&DAT_0093e87c + iVar6) = 0;
  *(undefined4 *)(&DAT_0093e894 + iVar6) = param_6;
  *(int *)(&DAT_0093e888 + iVar6) = param_4;
  *(undefined4 *)(&DAT_0093e898 + iVar6) = param_9;
  *(undefined4 *)(&DAT_0093e8b4 + iVar6) = 0;
  *(undefined4 *)(&DAT_0093e8b8 + iVar6) = 0xbf800000;
  *(int *)(&DAT_0093e89c + iVar6) = *param_5;
  *(int *)(&DAT_0093e8a0 + iVar6) = param_5[1];
  *(int *)(&DAT_0093e8a4 + iVar6) = param_5[2];
  *(int *)(&DAT_0093e8a8 + iVar6) = param_5[3];
  *(int *)(&DAT_0093e8ac + iVar6) = param_5[4];
  if (*(char *)(*param_5 + 0x54) == '\x02') {
    uVar2 = FUN_006c6f30(*(undefined4 *)(&DAT_0093e87c + iVar6),
                         *(undefined4 *)(&DAT_0093e878 + iVar6),param_6);
    uVar2 = uVar2 | 0x80000000;
    goto LAB_006e0d2f;
  }
  if (cVar4 != '\0') {
    uVar2 = (int)cVar4 | 0x80000000;
    goto LAB_006e0d2f;
  }
  iVar3 = 0;
  *(undefined4 *)(&DAT_0093e8b0 + iVar6) = 0;
  if (*(int *)(&DAT_0093e89c + iVar6) != 0) {
    *(undefined4 *)(&DAT_0093e8b0 + iVar6) = *(undefined4 *)(*(int *)(&DAT_0093e89c + iVar6) + 0x24)
    ;
  }
  if (*(int *)(&DAT_0093e8a0 + iVar6) != 0) {
    *(uint *)(&DAT_0093e8b0 + iVar6) =
         *(int *)(&DAT_0093e8b0 + iVar6) << 1 ^ *(uint *)(*(int *)(&DAT_0093e8a0 + iVar6) + 0x24);
  }
  if (*(int *)(&DAT_0093e8a4 + iVar6) != 0) {
    *(uint *)(&DAT_0093e8b0 + iVar6) =
         *(int *)(&DAT_0093e8b0 + iVar6) << 1 ^ *(uint *)(*(int *)(&DAT_0093e8a4 + iVar6) + 0x24);
  }
  if (*(int *)(&DAT_0093e8a8 + iVar6) != 0) {
    *(uint *)(&DAT_0093e8b0 + iVar6) =
         *(int *)(&DAT_0093e8b0 + iVar6) << 1 ^ *(uint *)(*(int *)(&DAT_0093e8a8 + iVar6) + 0x24);
  }
  if (*(int *)(&DAT_0093e8ac + iVar6) != 0) {
    *(uint *)(&DAT_0093e8b0 + iVar6) =
         *(int *)(&DAT_0093e8b0 + iVar6) << 1 ^ *(uint *)(*(int *)(&DAT_0093e8ac + iVar6) + 0x24);
  }
  iVar1 = DAT_00982a20;
  *(uint *)(&DAT_0093e8b0 + iVar6) =
       *(uint *)(&DAT_0093e8b0 + iVar6) ^ *(uint *)(&DAT_0093e884 + iVar6);
  (&DAT_0093e8b3)[iVar6] = 0;
  iVar5 = *(int *)(param_4 + 4);
  if (*(int *)(iVar1 + 4) == 1) {
    switch(iVar5) {
    case 0:
    case 1:
    case 3:
    case 4:
    case 5:
    case 0x12:
      if (DAT_00901830 < 1) {
LAB_006e0d1c:
        *(int *)(&DAT_0093e8b4 + iVar6) = iVar3;
      }
      else {
        local_40 = *param_1;
        local_3c = param_1[1];
        local_38 = param_1[2];
        local_50 = param_1[3];
        local_4c = param_1[4];
        local_48 = param_1[5];
        FUN_006be800(param_6,&local_40,&local_50);
        local_20 = (local_50 + local_40) * _DAT_008933d4;
        local_1c = (local_4c + local_3c) * _DAT_008933d4;
        local_18 = (local_48 + local_38) * _DAT_008933d4;
        thunk_FUN_006bd940(local_30,DAT_00919650 + 0x80,&local_20);
        if ((_DAT_008fae68 < _DAT_008fae50 != (_DAT_008fae68 == _DAT_008fae50)) ||
           (_DAT_008fae60 < local_28)) {
          *(undefined4 *)(&DAT_0093e8b4 + iVar6) = 0;
        }
        else if (local_28 <= _DAT_008fae58) {
          if (local_28 < _DAT_008fae58 != (local_28 == _DAT_008fae58)) {
            iVar3 = *(int *)(param_4 + 0x38);
            if (DAT_00982c3c < *(int *)(param_4 + 0x38)) {
              iVar3 = DAT_00982c3c;
            }
            *(int *)(&DAT_0093e8b4 + iVar6) = iVar3;
          }
        }
        else {
          iVar1 = *(int *)(param_4 + 0x38);
          if (local_28 < _DAT_008fae5c) {
            iVar3 = DAT_00982c3c + -1;
            if (iVar1 < DAT_00982c3c + -1) {
              iVar3 = iVar1;
            }
            *(int *)(&DAT_0093e8b4 + iVar6) = iVar3;
            if (iVar3 < 2) {
              iVar3 = 1;
            }
            goto LAB_006e0d1c;
          }
          iVar3 = DAT_00982c3c + -2;
          if (iVar1 < DAT_00982c3c + -2) {
            iVar3 = iVar1;
          }
          *(int *)(&DAT_0093e8b4 + iVar6) = iVar3;
          if (iVar3 < 2) {
            iVar3 = 1;
          }
          *(int *)(&DAT_0093e8b4 + iVar6) = iVar3;
          if (*(int *)(*(int *)(&DAT_0093e888 + iVar6) + 4) != 4) {
            *(float *)(&DAT_0093e8b8 + iVar6) = local_28;
          }
        }
      }
      iVar5 = iVar5 + *(int *)(&DAT_0093e8b4 + iVar6) * 0x1f;
    }
  }
  uVar2 = *(uint *)(&DAT_0093e8b0 + iVar6) | iVar5 << 0x18;
LAB_006e0d2f:
  iVar3 = DAT_009877b4;
  *(uint *)(&DAT_0093e8b0 + iVar6) = uVar2;
  *(int *)(iVar3 + DAT_00982cdc * 8) = DAT_00982cdc;
  *(uint *)(DAT_009877b4 + 4 + DAT_00982cdc * 8) = uVar2;
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

