/* speed.exe 008080d7 FUN_008080d7; analysis pseudocode, not buildable source.
 * calls 008070c1 FUN_008070c1
 * calls 00806ffe FUN_00806ffe
 */

undefined4 FUN_008080d7(int param_1,short *param_2,int param_3)

{
  uint *puVar1;
  ushort *puVar2;
  int *piVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  ushort uVar8;
  undefined1 *puVar9;
  int iVar10;
  short sVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  byte bVar15;
  uint local_8;
  
  iVar10 = param_1;
  piVar3 = (int *)(param_1 + 0x4528 + param_3 * 4);
  puVar1 = (uint *)(param_1 + 400);
  param_1 = 1;
  if (*piVar3 < 1) {
    iVar12 = param_3 * 0x90 + 0xa24 + iVar10;
    bVar15 = (byte)*puVar1;
    uVar13 = (1 << (bVar15 & 0x1f)) - 1U & *(uint *)(iVar10 + 0x194);
    if (*puVar1 < 6) {
      uVar13 = ((uint)**(byte **)(iVar10 + 0x198) | uVar13 << 8) >> ((char)*puVar1 + 2U & 0x1f);
    }
    else {
      uVar13 = uVar13 >> (bVar15 - 6 & 0x1f);
    }
    puVar2 = (ushort *)((param_3 + 0x62) * 0x80 + iVar10 + uVar13 * 2);
    *puVar1 = *puVar1 - (uint)(*puVar2 >> 0xc);
    if ((int)*puVar1 < 0) {
      puVar9 = *(undefined1 **)(iVar10 + 0x198);
      uVar4 = *puVar9;
      uVar5 = puVar9[1];
      uVar6 = puVar9[2];
      uVar7 = puVar9[3];
      *puVar1 = *puVar1 + 0x20;
      *(uint *)(iVar10 + 0x194) = CONCAT31(CONCAT21(CONCAT11(uVar4,uVar5),uVar6),uVar7);
      *(undefined1 **)(iVar10 + 0x198) = puVar9 + 4;
    }
    uVar8 = *puVar2;
    if ((uVar8 & 1) == 0) {
      local_8 = uVar8 & 0x3e;
      do {
        iVar14 = FUN_008070c1();
        if (iVar14 == 0) {
          local_8 = *(uint *)(iVar12 + (local_8 >> 1 & 0x7f) * 0xc);
        }
        else {
          local_8 = *(uint *)(iVar12 + 4 + (local_8 >> 1 & 0x7f) * 0xc);
        }
      } while ((local_8 & 1) == 0);
      uVar13 = local_8 >> 1 & 0x7f;
    }
    else {
      uVar13 = uVar8 >> 1 & 0x1f;
    }
    local_8 = *(uint *)(&DAT_008c4b98 + uVar13 * 4);
    if (uVar13 == 0xb) goto LAB_0080854c;
    if (uVar13 == 0) {
      iVar12 = FUN_00806ffe();
      iVar12 = iVar12 + 1;
      if (iVar12 == 3) {
        iVar12 = FUN_00806ffe();
        iVar12 = iVar12 + 3;
      }
      else if (iVar12 == 4) {
        iVar12 = FUN_008070c1();
        if (iVar12 == 0) {
          iVar12 = FUN_00806ffe();
          iVar12 = iVar12 + 7;
        }
        else {
          iVar12 = FUN_00806ffe();
          iVar12 = iVar12 + 0xb;
        }
      }
      *piVar3 = iVar12 + -1;
      iVar12 = 0;
    }
    else {
      if (4 < uVar13) {
        iVar12 = FUN_00806ffe();
        local_8 = local_8 + iVar12;
      }
      sVar11 = FUN_008070c1();
      *param_2 = (-sVar11 ^ (ushort)local_8) + sVar11;
      iVar12 = (1 < (int)local_8) + 1;
    }
  }
  else {
    *piVar3 = *piVar3 + -1;
    iVar12 = 0;
  }
  piVar3 = (int *)(iVar10 + 0x4530 + param_3 * 4);
  if (*piVar3 < 1) {
    do {
      iVar12 = *(int *)(&DAT_008c4bc8 + param_1 * 4) + (param_3 + iVar12 * 2) * 6;
      iVar14 = iVar12 * 0x90 + 0x1a74 + iVar10;
      bVar15 = (byte)*puVar1;
      uVar13 = (1 << (bVar15 & 0x1f)) - 1U & *(uint *)(iVar10 + 0x194);
      if (*puVar1 < 6) {
        uVar13 = ((uint)**(byte **)(iVar10 + 0x198) | uVar13 << 8) >> (bVar15 + 2 & 0x1f);
      }
      else {
        uVar13 = uVar13 >> (bVar15 - 6 & 0x1f);
      }
      puVar2 = (ushort *)((iVar12 + 100) * 0x80 + iVar10 + uVar13 * 2);
      *puVar1 = *puVar1 - (uint)(*puVar2 >> 0xc);
      if ((int)*puVar1 < 0) {
        puVar9 = *(undefined1 **)(iVar10 + 0x198);
        uVar4 = *puVar9;
        uVar5 = puVar9[1];
        uVar6 = puVar9[2];
        uVar7 = puVar9[3];
        *puVar1 = *puVar1 + 0x20;
        *(uint *)(iVar10 + 0x194) = CONCAT31(CONCAT21(CONCAT11(uVar4,uVar5),uVar6),uVar7);
        *(undefined1 **)(iVar10 + 0x198) = puVar9 + 4;
      }
      uVar8 = *puVar2;
      if ((uVar8 & 1) == 0) {
        local_8 = uVar8 & 0x3e;
        do {
          iVar12 = FUN_008070c1();
          if (iVar12 == 0) {
            local_8 = *(uint *)(iVar14 + (local_8 >> 1 & 0x7f) * 0xc);
          }
          else {
            local_8 = *(uint *)(iVar14 + 4 + (local_8 >> 1 & 0x7f) * 0xc);
          }
        } while ((local_8 & 1) == 0);
        uVar13 = local_8 >> 1 & 0x7f;
      }
      else {
        uVar13 = uVar8 >> 1 & 0x1f;
      }
      iVar12 = *(int *)(&DAT_008c4b98 + uVar13 * 4);
      if (uVar13 == 0) {
        iVar12 = (uint)(5 < param_1) * 0xa8 + 0x2fb0 + iVar10;
        bVar15 = (byte)*puVar1;
        uVar13 = (1 << (bVar15 & 0x1f)) - 1U & *(uint *)(iVar10 + 0x194);
        if (*puVar1 < 6) {
          uVar13 = ((uint)**(byte **)(iVar10 + 0x198) | uVar13 << 8) >> (bVar15 + 2 & 0x1f);
        }
        else {
          uVar13 = uVar13 >> (bVar15 - 6 & 0x1f);
        }
        puVar2 = (ushort *)(((5 < param_1) + 0x88) * 0x80 + iVar10 + uVar13 * 2);
        *puVar1 = *puVar1 - (uint)(*puVar2 >> 0xc);
        if ((int)*puVar1 < 0) {
          puVar9 = *(undefined1 **)(iVar10 + 0x198);
          uVar4 = *puVar9;
          uVar5 = puVar9[1];
          uVar6 = puVar9[2];
          uVar7 = puVar9[3];
          *puVar1 = *puVar1 + 0x20;
          *(uint *)(iVar10 + 0x194) = CONCAT31(CONCAT21(CONCAT11(uVar4,uVar5),uVar6),uVar7);
          *(undefined1 **)(iVar10 + 0x198) = puVar9 + 4;
        }
        uVar8 = *puVar2;
        if ((uVar8 & 1) == 0) {
          uVar13 = uVar8 & 0x3e;
          do {
            iVar14 = FUN_008070c1();
            if (iVar14 == 0) {
              uVar13 = *(uint *)(iVar12 + (uVar13 >> 1 & 0x7f) * 0xc);
            }
            else {
              uVar13 = *(uint *)(iVar12 + 4 + (uVar13 >> 1 & 0x7f) * 0xc);
            }
          } while ((uVar13 & 1) == 0);
          uVar13 = uVar13 >> 1 & 0x7f;
        }
        else {
          uVar13 = uVar8 >> 1 & 0x1f;
        }
        if (uVar13 < 8) {
          param_1 = param_1 + uVar13;
        }
        else {
          iVar12 = FUN_00806ffe();
          param_1 = param_1 + 8 + iVar12;
        }
        iVar12 = 0;
      }
      else {
        if (uVar13 == 0xb) {
          if (param_1 == 1) {
            iVar12 = FUN_00806ffe();
            iVar12 = iVar12 + 1;
            if (iVar12 == 3) {
              iVar12 = FUN_00806ffe();
              iVar12 = iVar12 + 3;
            }
            else if (iVar12 == 4) {
              iVar12 = FUN_008070c1();
              if (iVar12 == 0) {
                iVar12 = FUN_00806ffe();
                iVar12 = iVar12 + 7;
              }
              else {
                iVar12 = FUN_00806ffe();
                iVar12 = iVar12 + 0xb;
              }
            }
            *piVar3 = iVar12 + -1;
          }
          break;
        }
        if (4 < uVar13) {
          iVar14 = FUN_00806ffe();
          iVar12 = iVar12 + iVar14;
        }
        sVar11 = FUN_008070c1();
        param_2[*(byte *)(param_1 + 0x580 + iVar10)] = (-sVar11 ^ (ushort)iVar12) + sVar11;
        iVar12 = (1 < iVar12) + 1;
      }
      param_1 = param_1 + 1;
    } while (param_1 < 0x40);
  }
  else {
    *piVar3 = *piVar3 + -1;
  }
LAB_0080854c:
  return CONCAT31((int3)((uint)param_1 >> 8),*(undefined1 *)(param_1 + 0x5ff + iVar10));
}

