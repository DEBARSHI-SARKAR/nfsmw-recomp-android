/* speed.exe 00805501 FUN_00805501; analysis pseudocode, not buildable source.
 */

void FUN_00805501(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 uint param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint local_3c [10];
  int local_14;
  int local_10;
  byte *local_c;
  int local_8;
  
  iVar3 = *(int *)(param_5 * 4 + param_6);
  iVar1 = *(int *)(&DAT_0090acb8 + param_5 * 4);
  param_5 = 4;
  if (100 < *(int *)(param_1 + 8)) {
    iVar3 = *(int *)(param_1 + 8) + -100;
  }
  if (param_7 < 0x8001) {
    if (0x800 < param_7) {
      param_5 = 8;
    }
  }
  else {
    param_5 = 4;
  }
  param_1 = iVar3 * 3;
  if (0x20 < param_1) {
    param_1 = 0x20;
  }
  local_10 = param_3;
  local_c = (byte *)((param_2 - param_4) + 1);
  local_14 = 8;
  iVar7 = param_2;
  do {
    iVar7 = iVar7 + param_4;
    uVar8 = 0;
    pbVar4 = local_c;
    do {
      local_3c[0] = (uint)pbVar4[-2];
      local_3c[1] = (uint)pbVar4[-1];
      local_3c[2] = (uint)*pbVar4;
      param_7 = 0;
      local_3c[3] = (uint)pbVar4[param_4 + -2];
      local_3c[4] = (uint)pbVar4[param_4];
      local_3c[5] = (uint)*(byte *)(iVar7 + -1 + uVar8);
      local_3c[6] = (uint)*(byte *)(iVar7 + uVar8);
      local_3c[7] = (uint)*(byte *)(iVar7 + 1 + uVar8);
      uVar5 = (uint)pbVar4[param_4 + -1];
      param_2 = 0x100;
      local_8 = 0x80;
      do {
        uVar2 = local_3c[param_7];
        iVar9 = uVar5 - uVar2;
        if (iVar9 < 1) {
          iVar9 = uVar2 - uVar5;
        }
        iVar6 = (iVar3 - (iVar9 * param_5 >> 2)) + 0x20;
        iVar9 = iVar1;
        if (-0x41 < iVar6) {
          if (iVar6 < 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = iVar6;
            if (param_1 < iVar6) {
              iVar9 = param_1;
            }
          }
        }
        param_2 = param_2 - iVar9;
        local_8 = local_8 + uVar2 * iVar9;
        param_7 = param_7 + 1;
      } while (param_7 < 8);
      iVar9 = (int)(uVar5 * param_2 + local_8) >> 8;
      if (iVar9 < 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = 0xff;
        if (iVar9 < 0x100) {
          iVar6 = iVar9;
        }
      }
      *(char *)(local_10 + uVar8) = (char)iVar6;
      uVar8 = uVar8 + 1;
      pbVar4 = pbVar4 + 1;
    } while (uVar8 < 8);
    local_c = local_c + param_4;
    local_10 = local_10 + param_4;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  return;
}

