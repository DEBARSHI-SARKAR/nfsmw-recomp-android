/* speed.exe 008057af FUN_008057af; analysis pseudocode, not buildable source.
 */

void FUN_008057af(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_28;
  uint local_24;
  uint local_20;
  int local_18;
  int local_14;
  int local_c;
  int local_8;
  
  piVar2 = param_1;
  local_8 = param_1[3];
  iVar10 = *param_1;
  if (iVar10 < 5) {
    local_34 = 0x800;
    local_30 = 0x7800;
    local_40 = 0x16800;
    local_28 = 0x1e000;
    param_1 = (int *)&DAT_0090aab8;
    if (iVar10 < 2) {
      param_1 = &DAT_009c66e0;
    }
  }
  else {
    local_34 = 0x180;
    local_30 = 0x900;
    local_40 = 0xb40;
    local_28 = 0x1680;
    param_1 = (int *)&DAT_0090abb8;
  }
  uVar8 = piVar2[0x25];
  uVar7 = piVar2[0x24];
  local_c = 0;
  local_24 = 0;
  uVar9 = piVar2[0x26];
  local_14 = param_2 + piVar2[0x1e];
  local_18 = piVar2[0x1e] + param_3;
  if (uVar8 != 0) {
    do {
      local_20 = 0;
      if (uVar7 != 0) {
        local_3c = (local_c - uVar7) * 4;
        local_38 = (uVar7 + local_c) * 4;
        iVar3 = local_18 - local_14;
        iVar10 = local_14;
        do {
          iVar11 = *(int *)(piVar2[10] + local_c * 4);
          if ((piVar2[2] < 6) || (iVar11 <= (int)local_40)) {
            iVar4 = iVar3 + iVar10;
            if (local_30 < iVar11) {
              (*DAT_009c6adc)(piVar2,iVar10,iVar4,uVar9,local_8,param_1);
            }
            else if (local_34 < iVar11) {
              (*DAT_009c6abc)(piVar2,iVar10,iVar4,uVar9,local_8,param_1);
            }
            else {
              (*DAT_009c680c)(iVar10,iVar4,uVar9);
            }
          }
          else {
            (*DAT_009c6adc)(piVar2,iVar10,iVar3 + iVar10,uVar9,local_8,param_1);
            if (((((local_20 != 0) && (local_28 < *(int *)(piVar2[10] + -4 + local_c * 4))) ||
                 ((local_20 + 1 < uVar7 && (local_28 < *(int *)(piVar2[10] + 4 + local_c * 4))))) ||
                ((local_24 + 1 < uVar8 && (local_28 < *(int *)(local_38 + piVar2[10]))))) ||
               ((local_24 != 0 && (local_28 < *(int *)(local_3c + piVar2[10]))))) {
              (*DAT_009c6adc)(piVar2,iVar10,iVar3 + iVar10,uVar9,local_8,param_1);
              (*DAT_009c6adc)(piVar2,iVar10,iVar3 + iVar10,uVar9,local_8,param_1);
            }
          }
          local_c = local_c + 1;
          local_38 = local_38 + 4;
          local_3c = local_3c + 4;
          local_20 = local_20 + 1;
          iVar10 = iVar10 + 8;
        } while (local_20 < uVar7);
      }
      local_14 = local_14 + uVar9 * 8;
      local_18 = local_18 + uVar9 * 8;
      local_24 = local_24 + 1;
    } while (local_24 < uVar8);
  }
  iVar10 = param_2 + piVar2[0x1f];
  uVar7 = uVar7 >> 1;
  iVar3 = piVar2[0x1f] + param_3;
  uVar9 = uVar9 >> 1;
  uVar8 = uVar8 >> 1;
  for (uVar1 = uVar8; uVar1 != 0; uVar1 = uVar1 - 1) {
    if (uVar7 != 0) {
      iVar4 = iVar3 - iVar10;
      iVar11 = iVar10;
      local_40 = uVar7;
      do {
        iVar6 = *(int *)(local_c * 4 + piVar2[10]);
        if (*piVar2 < 5) {
          local_8 = *(int *)(local_c * 4 + piVar2[9]);
        }
        if ((piVar2[2] < 6) || (iVar6 <= local_28)) {
          iVar5 = iVar4 + iVar11;
          if (local_30 < iVar6) {
            (*DAT_009c6adc)(piVar2,iVar11,iVar5,uVar9,local_8,param_1);
          }
          else if (local_34 < iVar6) {
            (*DAT_009c6abc)(piVar2,iVar11,iVar5,uVar9,local_8,param_1);
          }
          else {
            (*DAT_009c680c)(iVar11,iVar5,uVar9);
          }
        }
        else {
          (*DAT_009c6adc)(piVar2,iVar11,iVar4 + iVar11,uVar9,local_8,param_1);
          (*DAT_009c6adc)(piVar2,iVar11,iVar4 + iVar11,uVar9,local_8,param_1);
          (*DAT_009c6adc)(piVar2,iVar11,iVar4 + iVar11,uVar9,local_8,param_1);
        }
        local_c = local_c + 1;
        iVar11 = iVar11 + 8;
        local_40 = local_40 - 1;
      } while (local_40 != 0);
    }
    iVar10 = iVar10 + uVar9 * 8;
    iVar3 = iVar3 + uVar9 * 8;
  }
  iVar10 = param_2 + piVar2[0x20];
  param_3 = piVar2[0x20] + param_3;
  for (; uVar8 != 0; uVar8 = uVar8 - 1) {
    if (uVar7 != 0) {
      iVar11 = param_3 - iVar10;
      iVar3 = iVar10;
      param_2 = uVar7;
      do {
        iVar4 = *(int *)(local_c * 4 + piVar2[10]);
        if (*piVar2 < 5) {
          local_8 = *(int *)(local_c * 4 + piVar2[9]);
        }
        if ((piVar2[2] < 6) || (iVar4 <= local_28)) {
          iVar6 = iVar11 + iVar3;
          if (local_30 < iVar4) {
            (*DAT_009c6adc)(piVar2,iVar3,iVar6,uVar9,local_8,param_1);
          }
          else if (local_34 < iVar4) {
            (*DAT_009c6abc)(piVar2,iVar3,iVar6,uVar9,local_8,param_1);
          }
          else {
            (*DAT_009c680c)(iVar3,iVar6,uVar9);
          }
        }
        else {
          (*DAT_009c6adc)(piVar2,iVar3,iVar11 + iVar3,uVar9,local_8,param_1);
          (*DAT_009c6adc)(piVar2,iVar3,iVar11 + iVar3,uVar9,local_8,param_1);
          (*DAT_009c6adc)(piVar2,iVar3,iVar11 + iVar3,uVar9,local_8,param_1);
        }
        local_c = local_c + 1;
        iVar3 = iVar3 + 8;
        param_2 = param_2 - 1;
      } while (param_2 != 0);
    }
    iVar10 = iVar10 + uVar9 * 8;
    param_3 = param_3 + uVar9 * 8;
  }
  return;
}

