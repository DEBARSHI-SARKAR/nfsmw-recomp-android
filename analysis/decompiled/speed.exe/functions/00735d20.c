/* speed.exe 00735d20 FUN_00735d20; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00735d20(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint local_28;
  int local_24;
  int local_20 [4];
  int local_10 [4];
  
  bVar5 = *(int *)(param_1 + 8) != 0;
  if (bVar5) {
    local_10[0] = *(int *)(param_1 + 8);
  }
  local_28 = (uint)bVar5;
  if (*(int *)(param_1 + 0xc) != 0) {
    local_10[bVar5] = *(int *)(param_1 + 0xc);
    local_28 = bVar5 + 1;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    local_10[local_28] = *(int *)(param_1 + 0x10);
    local_28 = local_28 + 1;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    local_10[local_28] = *(int *)(param_1 + 0x14);
    local_28 = local_28 + 1;
  }
  do {
    bVar5 = false;
    local_24 = 0;
    if ((int)(local_28 - 1) < 1) break;
    do {
      iVar3 = local_10[local_24];
      iVar1 = local_10[local_24 + 1];
      local_20[0] = 0;
      local_20[1] = 0;
      if (*(int *)(iVar3 + 0x1170) == 0xc) {
        local_20[0] = 2;
LAB_00735dca:
      }
      else if (*(int *)(iVar3 + 0x1170) != 1) {
        local_20[0] = 1;
        goto LAB_00735dca;
      }
      if (*(int *)(iVar1 + 0x1170) == 0xc) {
        local_20[1] = 2;
LAB_00735deb:
      }
      else if (*(int *)(iVar1 + 0x1170) != 1) {
        local_20[1] = 1;
        goto LAB_00735deb;
      }
      bVar7 = SBORROW4(local_20[0],local_20[1]);
      iVar2 = local_20[0] - local_20[1];
      bVar6 = false;
      if (local_20[0] == local_20[1]) {
        if ((DAT_00904ff9 == '\0') && (DAT_009b0894 == 0)) {
          if (local_20[0] == 0) {
            if (*(int *)(iVar3 + 0x1174) != *(int *)(iVar1 + 0x1174)) {
              uVar4 = (uint)(*(int *)(iVar3 + 0x1174) < *(int *)(iVar1 + 0x1174));
LAB_00735e28:
              local_20[uVar4] = local_20[uVar4] + 1;
            }
          }
          else if (*(float *)(iVar3 + 0x11e4) != *(float *)(iVar1 + 0x11e4)) {
            if (*(float *)(iVar3 + 0x11e4) <= *(float *)(iVar1 + 0x11e4)) {
              uVar4 = 0;
            }
            else {
              uVar4 = 1;
            }
            goto LAB_00735e28;
          }
        }
        bVar7 = SBORROW4(local_20[0],local_20[1]);
        iVar2 = local_20[0] - local_20[1];
        bVar6 = local_20[0] == local_20[1];
      }
      if (!bVar6 && bVar7 == iVar2 < 0) {
        local_10[local_24] = iVar1;
        local_10[local_24 + 1] = iVar3;
        bVar5 = true;
      }
      local_24 = local_24 + 1;
    } while (local_24 < (int)(local_28 - 1));
  } while (bVar5);
  iVar3 = 0;
  if (local_28 != 0) {
    do {
      iVar1 = iVar3 + 1;
      *(int *)(local_10[iVar3] + 0x1168) = iVar1;
      iVar3 = iVar1;
    } while (iVar1 < (int)local_28);
  }
  return;
}

