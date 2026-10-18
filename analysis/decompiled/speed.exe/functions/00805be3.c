/* speed.exe 00805be3 FUN_00805be3; analysis pseudocode, not buildable source.
 */

void FUN_00805be3(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_28;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_c;
  
  piVar3 = param_1;
  iVar1 = param_1[3];
  iVar11 = *param_1;
  if (iVar11 < 5) {
    local_38 = 0x800;
    local_34 = 0x7800;
    local_44 = 0x16800;
    local_28 = 0x1e000;
    param_1 = (int *)&DAT_0090aab8;
    if (iVar11 < 2) {
      param_1 = &DAT_009c66e0;
    }
  }
  else {
    local_38 = 0x180;
    local_34 = 0x900;
    local_44 = 0xb40;
    local_28 = 0x1680;
    param_1 = (int *)&DAT_0090abb8;
  }
  uVar9 = piVar3[0x24];
  local_14 = 0;
  local_20 = 0;
  local_c = param_2 + piVar3[0x1e];
  local_18 = piVar3[0x1e] + param_3;
  uVar2 = piVar3[0x26];
  uVar7 = (uint)piVar3[0x25] >> 1;
  iVar11 = uVar2 << 1;
  if (uVar7 != 0) {
    do {
      local_1c = 0;
      if (uVar9 != 0) {
        local_40 = (local_14 - uVar9) * 4;
        local_3c = (uVar9 + local_14) * 4;
        iVar4 = local_18 - local_c;
        iVar10 = local_c;
        do {
          iVar8 = local_14 * 4;
          iVar5 = *(int *)(iVar8 + piVar3[10]);
          if ((piVar3[2] < 6) || (iVar5 <= (int)local_44)) {
            iVar8 = iVar4 + iVar10;
            if (local_34 < iVar5) {
              (*DAT_009c6adc)(piVar3,iVar10,iVar8,iVar11,iVar1,param_1);
            }
            else if (local_38 < iVar5) {
              (*DAT_009c6abc)(piVar3,iVar10,iVar8,iVar11,iVar1,param_1);
            }
            else {
              (*DAT_009c680c)(iVar10,iVar8,iVar11);
            }
          }
          else {
            (*DAT_009c6adc)(piVar3,iVar10,iVar4 + iVar10,iVar11,iVar1,param_1);
            if (((((local_1c != 0) && (local_28 < *(int *)(iVar8 + -4 + piVar3[10]))) ||
                 ((local_1c + 1 < uVar9 && (local_28 < *(int *)(iVar8 + 4 + piVar3[10]))))) ||
                ((local_20 + 1 < uVar7 && (local_28 < *(int *)(local_3c + piVar3[10]))))) ||
               ((local_20 != 0 && (local_28 < *(int *)(local_40 + piVar3[10]))))) {
              (*DAT_009c6adc)(piVar3,iVar10,iVar4 + iVar10,iVar11,iVar1,param_1);
              (*DAT_009c6adc)(piVar3,iVar10,iVar4 + iVar10,iVar11,iVar1,param_1);
            }
          }
          local_14 = local_14 + 1;
          local_3c = local_3c + 4;
          local_40 = local_40 + 4;
          local_1c = local_1c + 1;
          iVar10 = iVar10 + 8;
        } while (local_1c < uVar9);
      }
      local_c = local_c + uVar2 * 0x10;
      local_18 = local_18 + uVar2 * 0x10;
      local_20 = local_20 + 1;
    } while (local_20 < uVar7);
  }
  local_20 = 0;
  local_c = piVar3[0x26] + piVar3[0x1e] + param_2;
  local_18 = piVar3[0x26] + piVar3[0x1e] + param_3;
  if (uVar7 != 0) {
    do {
      local_1c = 0;
      if (uVar9 != 0) {
        local_3c = (local_14 - uVar9) * 4;
        local_40 = (uVar9 + local_14) * 4;
        iVar4 = local_18 - local_c;
        iVar10 = local_c;
        do {
          iVar8 = local_14 * 4;
          iVar5 = *(int *)(iVar8 + piVar3[10]);
          if ((piVar3[2] < 6) || (iVar5 <= (int)local_44)) {
            iVar8 = iVar4 + iVar10;
            if (local_34 < iVar5) {
              (*DAT_009c6adc)(piVar3,iVar10,iVar8,iVar11,iVar1,param_1);
            }
            else if (local_38 < iVar5) {
              (*DAT_009c6abc)(piVar3,iVar10,iVar8,iVar11,iVar1,param_1);
            }
            else {
              (*DAT_009c680c)(iVar10,iVar8,iVar11);
            }
          }
          else {
            (*DAT_009c6adc)(piVar3,iVar10,iVar4 + iVar10,iVar11,iVar1,param_1);
            if ((((local_1c != 0) && (local_28 < *(int *)(iVar8 + -4 + piVar3[10]))) ||
                ((local_1c + 1 < uVar9 && (local_28 < *(int *)(iVar8 + 4 + piVar3[10]))))) ||
               (((local_20 + 1 < uVar7 && (local_28 < *(int *)(local_40 + piVar3[10]))) ||
                ((local_20 != 0 && (local_28 < *(int *)(local_3c + piVar3[10]))))))) {
              (*DAT_009c6adc)(piVar3,iVar10,iVar4 + iVar10,iVar11,iVar1,param_1);
              (*DAT_009c6adc)(piVar3,iVar10,iVar4 + iVar10,iVar11,iVar1,param_1);
            }
          }
          local_14 = local_14 + 1;
          local_40 = local_40 + 4;
          local_3c = local_3c + 4;
          local_1c = local_1c + 1;
          iVar10 = iVar10 + 8;
        } while (local_1c < uVar9);
      }
      local_c = local_c + uVar2 * 0x10;
      local_18 = local_18 + uVar2 * 0x10;
      local_20 = local_20 + 1;
    } while (local_20 < uVar7);
  }
  iVar11 = param_2 + piVar3[0x1f];
  uVar9 = uVar9 >> 1;
  iVar10 = piVar3[0x1f] + param_3;
  uVar12 = (uVar2 & 0x7fffffff) >> 1;
  for (uVar2 = uVar7; uVar2 != 0; uVar2 = uVar2 - 1) {
    if (uVar9 != 0) {
      iVar5 = iVar10 - iVar11;
      iVar4 = iVar11;
      local_44 = uVar9;
      do {
        iVar8 = *(int *)(piVar3[10] + local_14 * 4);
        if ((piVar3[2] < 6) || (iVar8 <= local_28)) {
          iVar6 = iVar5 + iVar4;
          if (local_34 < iVar8) {
            (*DAT_009c6adc)(piVar3,iVar4,iVar6,uVar12,iVar1,param_1);
          }
          else if (local_38 < iVar8) {
            (*DAT_009c6abc)(piVar3,iVar4,iVar6,uVar12,iVar1,param_1);
          }
          else {
            (*DAT_009c680c)(iVar4,iVar6,uVar12);
          }
        }
        else {
          (*DAT_009c6adc)(piVar3,iVar4,iVar5 + iVar4,uVar12,iVar1,param_1);
          (*DAT_009c6adc)(piVar3,iVar4,iVar5 + iVar4,uVar12,iVar1,param_1);
          (*DAT_009c6adc)(piVar3,iVar4,iVar5 + iVar4,uVar12,iVar1,param_1);
        }
        local_14 = local_14 + 1;
        iVar4 = iVar4 + 8;
        local_44 = local_44 - 1;
      } while (local_44 != 0);
    }
    iVar11 = iVar11 + uVar12 * 8;
    iVar10 = iVar10 + uVar12 * 8;
  }
  iVar11 = param_2 + piVar3[0x20];
  param_3 = piVar3[0x20] + param_3;
  for (; uVar7 != 0; uVar7 = uVar7 - 1) {
    if (uVar9 != 0) {
      iVar4 = param_3 - iVar11;
      iVar10 = iVar11;
      param_2 = uVar9;
      do {
        iVar5 = *(int *)(piVar3[10] + local_14 * 4);
        if ((piVar3[2] < 6) || (iVar5 <= local_28)) {
          iVar8 = iVar4 + iVar10;
          if (local_34 < iVar5) {
            (*DAT_009c6adc)(piVar3,iVar10,iVar8,uVar12,iVar1,param_1);
          }
          else if (local_38 < iVar5) {
            (*DAT_009c6abc)(piVar3,iVar10,iVar8,uVar12,iVar1,param_1);
          }
          else {
            (*DAT_009c680c)(iVar10,iVar8,uVar12);
          }
        }
        else {
          (*DAT_009c6adc)(piVar3,iVar10,iVar4 + iVar10,uVar12,iVar1,param_1);
          (*DAT_009c6adc)(piVar3,iVar10,iVar4 + iVar10,uVar12,iVar1,param_1);
          (*DAT_009c6adc)(piVar3,iVar10,iVar4 + iVar10,uVar12,iVar1,param_1);
        }
        local_14 = local_14 + 1;
        iVar10 = iVar10 + 8;
        param_2 = param_2 - 1;
      } while (param_2 != 0);
    }
    iVar11 = iVar11 + uVar12 * 8;
    param_3 = param_3 + uVar12 * 8;
  }
  return;
}

