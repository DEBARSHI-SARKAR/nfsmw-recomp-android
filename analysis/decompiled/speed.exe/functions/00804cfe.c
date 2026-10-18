/* speed.exe 00804cfe FUN_00804cfe; analysis pseudocode, not buildable source.
 */

void FUN_00804cfe(undefined4 param_1,byte *param_2,int param_3,int param_4,int param_5,byte *param_6
                 )

{
  int iVar1;
  short *psVar2;
  short *psVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  short local_16c [72];
  short local_dc [72];
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 *local_20;
  byte *local_1c;
  byte *local_18;
  int local_14;
  byte *local_10;
  byte *local_c;
  uint local_8;
  
  iVar5 = *(int *)(param_5 * 4 + (int)param_6);
  local_8 = *(int *)(&DAT_0090acb8 + param_5 * 4);
  local_1c = param_2 + -param_4;
  local_18 = param_2;
  local_c = param_2 + param_4;
  param_5 = iVar5 * 3;
  if (0x20 < param_5) {
    param_5 = 0x20;
  }
  psVar3 = local_16c;
  local_14 = 9;
  local_10 = local_1c;
  do {
    param_6 = local_18;
    local_20 = (undefined1 *)0x8;
    pbVar8 = local_1c;
    do {
      iVar1 = (uint)*param_6 - (uint)*pbVar8;
      if (iVar1 < 1) {
        iVar1 = (uint)*pbVar8 - (uint)*param_6;
      }
      iVar1 = (iVar5 - iVar1) + 0x20;
      uVar7 = local_8;
      if (-0x41 < iVar1) {
        if (iVar1 < 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = iVar1;
          if (param_5 < iVar1) {
            uVar7 = param_5;
          }
        }
      }
      *psVar3 = (short)uVar7;
      psVar3 = psVar3 + 1;
      pbVar8 = pbVar8 + 1;
      param_6 = param_6 + 1;
      local_20 = (undefined1 *)((int)local_20 + -1);
    } while (local_20 != (undefined1 *)0x0);
    local_18 = local_18 + param_4;
    local_1c = local_1c + param_4;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  psVar3 = local_dc;
  local_14 = 8;
  pbVar8 = param_2;
  do {
    uVar7 = 0;
    param_6 = (byte *)psVar3;
    do {
      iVar1 = (uint)pbVar8[uVar7] - (uint)pbVar8[uVar7 - 1];
      if (iVar1 < 1) {
        iVar1 = (uint)pbVar8[uVar7 - 1] - (uint)pbVar8[uVar7];
      }
      iVar1 = (iVar5 - iVar1) + 0x20;
      uVar4 = local_8;
      if (-0x41 < iVar1) {
        if (iVar1 < 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = iVar1;
          if (param_5 < iVar1) {
            uVar4 = param_5;
          }
        }
      }
      psVar3 = (short *)((int)param_6 + 2);
      uVar7 = uVar7 + 1;
      *(short *)param_6 = (short)uVar4;
      param_6 = (byte *)psVar3;
    } while (uVar7 < 9);
    pbVar8 = pbVar8 + param_4;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  local_20 = (undefined1 *)(param_3 + 3);
  param_6 = local_10 + 4;
  local_1c = (byte *)((int)local_c - (int)local_10);
  local_18 = (byte *)((int)local_10 - (int)param_2);
  local_48 = param_3 - (int)param_2;
  local_44 = (int)local_10 - (int)local_c;
  local_4c = param_3 - (int)local_c;
  local_10 = (byte *)(param_3 - (int)local_10);
  psVar3 = local_dc + 1;
  pbVar8 = local_c + 2;
  psVar2 = local_16c;
  local_14 = 8;
  do {
    psVar2 = psVar2 + 8;
    uVar7 = (uint)*param_2;
    local_8 = uVar7;
    uVar4 = (uint)param_2[1];
    iVar5 = (int)(((((0x80 - *psVar3) - (int)*psVar2) - (int)psVar2[-8]) - (int)psVar3[-1]) * uVar7
                  + (uint)param_2[(int)local_1c + (int)local_18] * (int)*psVar2 +
                  (uint)param_2[-1] * (int)psVar3[-1] +
                  (uint)param_2[(int)local_18] * (int)psVar2[-8] + 0x40 + uVar4 * (int)*psVar3) >> 7
    ;
    if (iVar5 < 0) {
      local_40 = 0;
    }
    else {
      local_40 = 0xff;
      if (iVar5 < 0x100) {
        local_40 = iVar5;
      }
    }
    uVar6 = (uint)param_2[2];
    iVar5 = (int)psVar3[1];
    local_8 = iVar5;
    iVar1 = (int)(((((0x80 - psVar3[1]) - (int)psVar2[1]) - (int)psVar2[-7]) - (int)*psVar3) * uVar4
                  + (uint)pbVar8[-1] * (int)psVar2[1] +
                  (uint)param_2[(int)local_18 + 1] * (int)psVar2[-7] + uVar7 * (int)*psVar3 + 0x40 +
                 uVar6 * iVar5) >> 7;
    if (iVar1 < 0) {
      local_3c = 0;
    }
    else {
      local_3c = 0xff;
      if (iVar1 < 0x100) {
        local_3c = iVar1;
      }
    }
    local_c = (byte *)(uint)param_2[3];
    iVar1 = (int)psVar3[2];
    local_8 = iVar1;
    iVar5 = (int)(((((0x80 - psVar3[2]) - (int)psVar2[2]) - (int)psVar2[-6]) - iVar5) * uVar6 +
                  (uint)pbVar8[local_44] * (int)psVar2[-6] + (uint)*pbVar8 * (int)psVar2[2] +
                  uVar4 * (int)psVar3[1] + 0x40 + (int)local_c * iVar1) >> 7;
    if (iVar5 < 0) {
      local_38 = 0;
    }
    else {
      local_38 = 0xff;
      if (iVar5 < 0x100) {
        local_38 = iVar5;
      }
    }
    uVar7 = (uint)param_2[4];
    iVar5 = (int)psVar3[3];
    local_8 = iVar5;
    iVar1 = (int)(((((0x80 - psVar3[3]) - (int)psVar2[3]) - (int)psVar2[-5]) - iVar1) * (int)local_c
                  + (uint)pbVar8[1] * (int)psVar2[3] + (uint)param_6[-1] * (int)psVar2[-5] +
                  uVar6 * (int)psVar3[2] + 0x40 + uVar7 * iVar5) >> 7;
    if (iVar1 < 0) {
      local_34 = 0;
    }
    else {
      local_34 = 0xff;
      if (iVar1 < 0x100) {
        local_34 = iVar1;
      }
    }
    uVar4 = (uint)param_2[5];
    local_8 = (uint)psVar3[4];
    iVar5 = (int)(((((0x80 - psVar3[4]) - (int)psVar2[4]) - (int)psVar2[-4]) - iVar5) * uVar7 +
                  (uint)pbVar8[2] * (int)psVar2[4] + (uint)*param_6 * (int)psVar2[-4] +
                  (int)local_c * (int)psVar3[3] + 0x40 + uVar4 * local_8) >> 7;
    if (iVar5 < 0) {
      local_30 = 0;
    }
    else {
      local_30 = 0xff;
      if (iVar5 < 0x100) {
        local_30 = iVar5;
      }
    }
    local_c = (byte *)(uint)param_2[6];
    iVar5 = (int)(((((0x80 - psVar3[5]) - (int)psVar2[5]) - (int)psVar2[-3]) - local_8) * uVar4 +
                  (uint)pbVar8[3] * (int)psVar2[5] + (uint)param_6[1] * (int)psVar2[-3] +
                  uVar7 * (int)psVar3[4] + 0x40 + (int)psVar3[5] * (int)local_c) >> 7;
    if (iVar5 < 0) {
      local_2c = 0;
    }
    else {
      local_2c = 0xff;
      if (iVar5 < 0x100) {
        local_2c = iVar5;
      }
    }
    iVar5 = (int)(((((0x80 - psVar3[6]) - (int)psVar2[6]) - (int)psVar2[-2]) - (int)psVar3[5]) *
                  (int)local_c + (uint)pbVar8[4] * (int)psVar2[6] +
                  (uint)param_6[2] * (int)psVar2[-2] + (int)psVar3[6] * (uint)param_2[7] + 0x40 +
                 uVar4 * (int)psVar3[5]) >> 7;
    if (iVar5 < 0) {
      local_28 = 0;
    }
    else {
      local_28 = 0xff;
      if (iVar5 < 0x100) {
        local_28 = iVar5;
      }
    }
    iVar5 = (int)(((((0x80 - psVar3[7]) - (int)psVar2[7]) - (int)psVar2[-1]) - (int)psVar3[6]) *
                  (uint)param_2[7] + (uint)param_2[8] * (int)psVar3[7] +
                  (uint)pbVar8[5] * (int)psVar2[7] + (uint)param_6[3] * (int)psVar2[-1] + 0x40 +
                 (int)local_c * (int)psVar3[6]) >> 7;
    if (iVar5 < 0) {
      local_24 = 0;
    }
    else {
      local_24 = 0xff;
      if (iVar5 < 0x100) {
        local_24 = iVar5;
      }
    }
    param_2[local_48] = (byte)local_40;
    local_20[-2] = (undefined1)local_3c;
    pbVar8[local_4c] = (byte)local_38;
    *local_20 = (undefined1)local_34;
    param_6[(int)local_10] = (byte)local_30;
    local_20[2] = (undefined1)local_2c;
    local_20[3] = (undefined1)local_28;
    local_20[4] = (undefined1)local_24;
    param_6 = param_6 + param_4;
    param_2 = param_2 + param_4;
    pbVar8 = pbVar8 + param_4;
    psVar3 = psVar3 + 9;
    local_14 = local_14 + -1;
    local_20 = local_20 + param_4;
  } while (local_14 != 0);
  return;
}

