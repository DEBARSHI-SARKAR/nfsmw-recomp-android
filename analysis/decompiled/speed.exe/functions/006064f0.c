/* speed.exe 006064f0 FUN_006064f0; analysis pseudocode, not buildable source.
 * calls 006064c0 FUN_006064c0
 * calls 00606490 FUN_00606490
 */

undefined4 FUN_006064f0(int param_1,int param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  undefined8 uVar13;
  int local_18;
  int local_10;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  local_10 = iVar2 + -1;
  if ((0xfa < *(byte *)(param_1 + 0x47)) ||
     (((*(int *)(param_1 + 0x30) != iVar2 && (*(int *)(param_1 + 0x30) != 0)) ||
      (iVar3 = *(int *)(param_1 + 0xc),
      ((byte)*(undefined4 *)(iVar3 + -4 + iVar2 * 4) & 0x3f) != 0x1b)))) {
    return 0;
  }
  local_18 = 0;
  if (0 < param_2) {
    uVar6 = (uint)*(byte *)(param_1 + 0x47);
    do {
      uVar5 = *(uint *)(iVar3 + local_18 * 4);
      uVar11 = uVar5 >> 0x18;
      uVar10 = 0;
      uVar9 = 0;
      if (uVar6 <= uVar11) {
        return 0;
      }
      bVar1 = "$a $ a4A"[uVar5 & 0x3f];
      if ((bVar1 & 3) == 0) {
        uVar9 = uVar5 >> 6 & 0x1ff;
        uVar10 = uVar5 >> 0xf & 0x1ff;
        if ((bVar1 & 4) == 0) {
          if (((bVar1 & 8) != 0) && (iVar4 = FUN_006064c0(), iVar4 == 0)) {
            return 0;
          }
        }
        else if (uVar6 <= uVar10) {
          return 0;
        }
        if (((bVar1 & 0x10) != 0) && (uVar6 <= uVar9)) {
          if (uVar9 < 0xfa) {
            return 0;
          }
          bVar12 = SBORROW4(uVar9 - 0xfa,*(int *)(param_1 + 0x28));
          iVar4 = (uVar9 - 0xfa) - *(int *)(param_1 + 0x28);
LAB_0060661e:
          if (bVar12 == iVar4 < 0) {
            return 0;
          }
        }
      }
      else if ((bVar1 & 3) == 1) {
        uVar10 = uVar5 >> 6 & 0x3ffff;
        if ((bVar1 & 0x40) != 0) {
          bVar12 = SBORROW4(uVar10,*(int *)(param_1 + 0x28));
          iVar4 = uVar10 - *(int *)(param_1 + 0x28);
          goto LAB_0060661e;
        }
      }
      else if ((bVar1 & 3) == 2) {
        uVar10 = (uVar5 >> 6 & 0x3ffff) - 0x1ffff;
      }
      if (((bVar1 & 0x20) != 0) && (uVar11 == param_3)) {
        local_10 = local_18;
      }
      if ((char)bVar1 < '\0') {
        if (iVar2 <= local_18 + 2) {
          return 0;
        }
        if (((byte)*(undefined4 *)(iVar3 + 4 + local_18 * 4) & 0x3f) != 0x14) {
          return 0;
        }
      }
      switch(uVar5 & 0x3f) {
      case 2:
        if ((uVar9 != 0) && (iVar2 <= local_18 + 2)) {
          return 0;
        }
        break;
      case 3:
        if (((int)uVar11 <= (int)param_3) && ((int)param_3 <= (int)uVar10)) {
          local_10 = local_18;
        }
        break;
      case 4:
      case 8:
        uVar9 = (uint)*(byte *)(param_1 + 0x44);
        goto joined_r0x00606702;
      case 5:
      case 7:
        if (*(int *)(*(int *)(param_1 + 8) + uVar10 * 8) != 4) {
          return 0;
        }
        break;
      case 0xb:
        if (uVar6 <= uVar11 + 1) {
          return 0;
        }
        if (param_3 == uVar11 + 1) {
          local_10 = local_18;
        }
        break;
      case 0x13:
        if (0xf9 < uVar9) {
          return 0;
        }
joined_r0x00606702:
        if ((int)uVar9 <= (int)uVar10) {
          return 0;
        }
        break;
      case 0x19:
      case 0x1a:
        if ((uVar10 != 0) && ((int)uVar6 <= (int)((uVar10 - 1) + uVar11))) {
          return 0;
        }
        iVar4 = uVar9 - 1;
        if (iVar4 == -1) {
          uVar13 = FUN_00606490();
          iVar7 = (int)((ulonglong)uVar13 >> 0x20);
          if ((int)uVar13 == 0) {
            return 0;
          }
        }
        else {
          iVar7 = local_18;
          if ((iVar4 != 0) && ((int)uVar6 <= (int)((uVar11 - 1) + iVar4))) {
            return 0;
          }
        }
        if ((int)uVar11 <= (int)param_3) {
          local_10 = iVar7;
        }
        break;
      case 0x1b:
        if ((0 < (int)(uVar10 - 1)) && ((int)uVar6 <= (int)((uVar10 - 2) + uVar11))) {
          return 0;
        }
        break;
      case 0x1d:
        if (uVar6 <= uVar11 + 5 + uVar9) {
          return 0;
        }
        if ((int)uVar11 <= (int)param_3) {
          local_10 = local_18;
        }
      case 0x1c:
        if (uVar6 <= uVar11 + 2) {
          return 0;
        }
      case 0x14:
        iVar4 = uVar10 + 1 + local_18;
        if (iVar4 < 0) {
          return 0;
        }
        if (iVar2 <= iVar4) {
          return 0;
        }
        if (((param_3 != 0xff) && (local_18 < iVar4)) && (iVar4 <= param_2)) {
          local_18 = uVar10 + local_18;
        }
        break;
      case 0x1f:
        if (uVar6 <= (uVar10 & 0x1f) + 1 + uVar11) {
          return 0;
        }
        break;
      case 0x22:
        if (*(int *)(param_1 + 0x34) <= (int)uVar10) {
          return 0;
        }
        uVar5 = (uint)*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + uVar10 * 4) + 0x44);
        if (iVar2 <= (int)(uVar5 + local_18)) {
          return 0;
        }
        if (uVar5 != 0) {
          puVar8 = (uint *)(iVar3 + (uVar5 + local_18) * 4);
          do {
            if (((*puVar8 & 0x3f) != 4) && ((*puVar8 & 0x3f) != 0)) {
              return 0;
            }
            uVar5 = uVar5 - 1;
            puVar8 = puVar8 + -1;
          } while (0 < (int)uVar5);
        }
      }
      local_18 = local_18 + 1;
    } while (local_18 < param_2);
  }
  return *(undefined4 *)(iVar3 + local_10 * 4);
}

