/* speed.exe 008052e5 FUN_008052e5; analysis pseudocode, not buildable source.
 */

void FUN_008052e5(undefined4 param_1,byte *param_2,short *param_3,int param_4,short *param_5,
                 byte *param_6)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  short local_140 [72];
  short local_b0 [8];
  short local_a0 [64];
  byte *local_20;
  byte *local_1c;
  int local_18;
  byte *local_14;
  byte *local_10;
  int local_c;
  int local_8;
  
  iVar2 = *(int *)((int)param_5 * 4 + (int)param_6);
  local_c = *(int *)(&DAT_0090acb8 + (int)param_5 * 4);
  local_14 = param_2 + -param_4;
  local_20 = param_2;
  local_1c = param_2 + param_4;
  param_5 = (short *)(iVar2 * 3);
  if (0x18 < (int)param_5) {
    param_5 = (short *)0x18;
  }
  psVar3 = local_b0;
  local_8 = 9;
  local_10 = local_14;
  do {
    param_6 = local_20;
    local_18 = 8;
    pbVar5 = local_10;
    do {
      iVar1 = (uint)*param_6 - (uint)*pbVar5;
      if (iVar1 < 1) {
        iVar1 = (uint)*pbVar5 - (uint)*param_6;
      }
      iVar1 = iVar2 + (0x10 - iVar1) * 2;
      iVar4 = local_c;
      if (-0x41 < iVar1) {
        if (iVar1 < 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = iVar1;
          if ((int)param_5 < iVar1) {
            iVar4 = (int)param_5;
          }
        }
      }
      *psVar3 = (short)iVar4;
      psVar3 = psVar3 + 1;
      pbVar5 = pbVar5 + 1;
      param_6 = param_6 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
    local_20 = local_20 + param_4;
    local_10 = local_10 + param_4;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  psVar3 = local_140;
  local_8 = 8;
  pbVar5 = param_2;
  do {
    uVar6 = 0;
    param_6 = (byte *)psVar3;
    do {
      iVar1 = (uint)pbVar5[uVar6] - (uint)pbVar5[uVar6 - 1];
      if (iVar1 < 1) {
        iVar1 = (uint)pbVar5[uVar6 - 1] - (uint)pbVar5[uVar6];
      }
      iVar1 = iVar2 + (0x10 - iVar1) * 2;
      iVar4 = local_c;
      if (-0x41 < iVar1) {
        if (iVar1 < 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = iVar1;
          if ((int)param_5 < iVar1) {
            iVar4 = (int)param_5;
          }
        }
      }
      psVar3 = (short *)((int)param_6 + 2);
      uVar6 = uVar6 + 1;
      *(short *)param_6 = (short)iVar4;
      param_6 = (byte *)psVar3;
    } while (uVar6 < 9);
    pbVar5 = pbVar5 + param_4;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  iVar2 = (int)param_3 - (int)local_14;
  param_6 = local_14;
  param_3 = local_140 + 1;
  pbVar5 = param_2 + -1;
  param_2 = (byte *)local_a0;
  local_c = 8;
  do {
    uVar6 = 0;
    param_5 = param_3;
    pbVar7 = param_6;
    do {
      iVar1 = (int)(((((0x80 - *param_5) - (int)*(short *)param_2) -
                     (int)*(short *)((int)param_2 + -0x10)) - (int)param_5[-1]) *
                    (uint)pbVar5[uVar6 + 1] + (uint)pbVar5[uVar6 + 2] * (int)*param_5 +
                    (uint)pbVar7[(int)local_1c - (int)local_14] * (int)*(short *)param_2 +
                    (uint)pbVar5[uVar6] * (int)param_5[-1] + 0x40 +
                   (uint)*pbVar7 * (int)*(short *)((int)param_2 + -0x10)) >> 7;
      if (iVar1 < 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = 0xff;
        if (iVar1 < 0x100) {
          iVar4 = iVar1;
        }
      }
      param_2 = (byte *)((int)param_2 + 2);
      param_5 = param_5 + 1;
      uVar6 = uVar6 + 1;
      pbVar7[iVar2] = (byte)iVar4;
      pbVar7 = pbVar7 + 1;
    } while (uVar6 < 8);
    param_6 = param_6 + param_4;
    param_3 = param_3 + 9;
    pbVar5 = pbVar5 + param_4;
    local_c = local_c + -1;
  } while (local_c != 0);
  return;
}

