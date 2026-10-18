/* speed.exe 006dfeb0 FUN_006dfeb0; analysis pseudocode, not buildable source.
 * calls 0045ed20 thunk_FUN_006bd940
 * calls 006c6f30 FUN_006c6f30
 * calls 006be800 FUN_006be800
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006dfeb0(float *param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int *param_7,char param_8)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
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
  
  if (DAT_00982cdc < 0x1000) {
    iVar5 = DAT_00982cdc * 0x44;
    *(undefined4 *)(&DAT_0093e884 + iVar5) = param_2;
    *(undefined4 *)(&DAT_0093e88c + iVar5) = param_5;
    *(undefined4 *)(&DAT_0093e890 + iVar5) = param_6;
    *(float **)(&DAT_0093e878 + iVar5) = param_1;
    *(undefined4 *)(&DAT_0093e87c + iVar5) = 1;
    *(undefined4 *)(&DAT_0093e894 + iVar5) = param_4;
    *(int *)(&DAT_0093e888 + iVar5) = param_3;
    *(undefined4 *)(&DAT_0093e8b8 + iVar5) = 0xbf800000;
    *(undefined4 *)(&DAT_0093e880 + iVar5) = 0;
    *(undefined4 *)(&DAT_0093e898 + iVar5) = 0;
    *(undefined4 *)(&DAT_0093e8b4 + iVar5) = 0;
    *(int *)(&DAT_0093e89c + iVar5) = *param_7;
    *(int *)(&DAT_0093e8a0 + iVar5) = param_7[1];
    *(int *)(&DAT_0093e8a4 + iVar5) = param_7[2];
    *(int *)(&DAT_0093e8a8 + iVar5) = param_7[3];
    *(int *)(&DAT_0093e8ac + iVar5) = param_7[4];
    if (*(char *)(*param_7 + 0x54) == '\x02') {
      uVar2 = FUN_006c6f30(*(undefined4 *)(&DAT_0093e87c + iVar5),
                           *(undefined4 *)(&DAT_0093e878 + iVar5),param_4);
      *(uint *)(&DAT_0093e8b0 + iVar5) = uVar2 | 0x80000000;
    }
    else {
      if (param_8 == '\0') {
        *(undefined4 *)(&DAT_0093e8b0 + iVar5) = 0;
        if (*(int *)(&DAT_0093e89c + iVar5) != 0) {
          *(undefined4 *)(&DAT_0093e8b0 + iVar5) =
               *(undefined4 *)(*(int *)(&DAT_0093e89c + iVar5) + 0x24);
        }
        if (*(int *)(&DAT_0093e8a0 + iVar5) != 0) {
          *(uint *)(&DAT_0093e8b0 + iVar5) =
               *(int *)(&DAT_0093e8b0 + iVar5) << 1 ^
               *(uint *)(*(int *)(&DAT_0093e8a0 + iVar5) + 0x24);
        }
        if (*(int *)(&DAT_0093e8a4 + iVar5) != 0) {
          *(uint *)(&DAT_0093e8b0 + iVar5) =
               *(int *)(&DAT_0093e8b0 + iVar5) << 1 ^
               *(uint *)(*(int *)(&DAT_0093e8a4 + iVar5) + 0x24);
        }
        if (*(int *)(&DAT_0093e8a8 + iVar5) != 0) {
          *(uint *)(&DAT_0093e8b0 + iVar5) =
               *(int *)(&DAT_0093e8b0 + iVar5) << 1 ^
               *(uint *)(*(int *)(&DAT_0093e8a8 + iVar5) + 0x24);
        }
        if (*(int *)(&DAT_0093e8ac + iVar5) != 0) {
          *(uint *)(&DAT_0093e8b0 + iVar5) =
               *(int *)(&DAT_0093e8b0 + iVar5) << 1 ^
               *(uint *)(*(int *)(&DAT_0093e8ac + iVar5) + 0x24);
        }
        *(uint *)(&DAT_0093e8b0 + iVar5) =
             *(uint *)(&DAT_0093e8b0 + iVar5) ^ *(uint *)(&DAT_0093e884 + iVar5);
        iVar6 = DAT_00982a20;
        (&DAT_0093e8b3)[iVar5] = 0;
        iVar4 = *(int *)(param_3 + 4);
        if (*(int *)(iVar6 + 4) == 1) {
          switch(iVar4) {
          case 0:
          case 1:
          case 3:
          case 4:
          case 5:
          case 0x12:
            if (DAT_00901830 < 1) {
              *(undefined4 *)(&DAT_0093e8b4 + iVar5) = 0;
            }
            else {
              local_40 = *param_1;
              local_3c = param_1[1];
              local_38 = param_1[2];
              local_50 = param_1[3];
              local_4c = param_1[4];
              local_48 = param_1[5];
              FUN_006be800(param_4,&local_40,&local_50);
              local_20 = (local_50 + local_40) * _DAT_008933d4;
              local_1c = (local_4c + local_3c) * _DAT_008933d4;
              local_18 = (local_48 + local_38) * _DAT_008933d4;
              thunk_FUN_006bd940(local_30,DAT_00919650 + 0x80,&local_20);
              if ((_DAT_008fae68 < _DAT_008fae50 != (_DAT_008fae68 == _DAT_008fae50)) ||
                 (_DAT_008fae60 < local_28)) {
                *(undefined4 *)(&DAT_0093e8b4 + iVar5) = 0;
              }
              else if (local_28 <= _DAT_008fae58) {
                if (local_28 < _DAT_008fae58 != (local_28 == _DAT_008fae58)) {
                  iVar6 = *(int *)(param_3 + 0x38);
                  if (DAT_00982c3c < *(int *)(param_3 + 0x38)) {
                    iVar6 = DAT_00982c3c;
                  }
                  *(int *)(&DAT_0093e8b4 + iVar5) = iVar6;
                }
              }
              else {
                iVar6 = *(int *)(param_3 + 0x38);
                if (_DAT_008fae5c <= local_28) {
                  iVar3 = DAT_00982c3c + -2;
                  if (iVar6 < DAT_00982c3c + -2) {
                    iVar3 = iVar6;
                  }
                  *(int *)(&DAT_0093e8b4 + iVar5) = iVar3;
                  if (iVar3 < 2) {
                    iVar3 = 1;
                  }
                  *(int *)(&DAT_0093e8b4 + iVar5) = iVar3;
                  if (*(int *)(*(int *)(&DAT_0093e888 + iVar5) + 4) != 4) {
                    *(float *)(&DAT_0093e8b8 + iVar5) = local_28;
                  }
                }
                else {
                  iVar3 = DAT_00982c3c + -1;
                  if (iVar6 < DAT_00982c3c + -1) {
                    iVar3 = iVar6;
                  }
                  *(int *)(&DAT_0093e8b4 + iVar5) = iVar3;
                  if (iVar3 < 2) {
                    iVar3 = 1;
                  }
                  *(int *)(&DAT_0093e8b4 + iVar5) = iVar3;
                }
              }
            }
            iVar4 = iVar4 + *(int *)(&DAT_0093e8b4 + iVar5) * 0x1f;
          }
        }
        uVar2 = *(uint *)(&DAT_0093e8b0 + iVar5) | iVar4 << 0x18;
      }
      else {
        uVar2 = (int)param_8 | 0x80000000;
      }
      *(uint *)(&DAT_0093e8b0 + iVar5) = uVar2;
    }
    uVar1 = *(undefined4 *)(&DAT_0093e8b0 + iVar5);
    *(int *)(DAT_009877b4 + DAT_00982cdc * 8) = DAT_00982cdc;
    *(undefined4 *)(DAT_009877b4 + 4 + DAT_00982cdc * 8) = uVar1;
    DAT_00982cd8 = DAT_00982cd8 + (int)*param_1;
    DAT_00982cdc = DAT_00982cdc + 1;
  }
  return;
}

