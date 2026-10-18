/* speed.exe 004a4c70 FUN_004a4c70; analysis pseudocode, not buildable source.
 * calls 00494820 FUN_00494820
 * calls 004948c0 FUN_004948c0
 * calls 007c4b80 FUN_007c4b80
 * calls 00494930 FUN_00494930
 * calls 004a4250 FUN_004a4250
 * calls 00496c10 FUN_00496c10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004a4c70(int param_1,float param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  float fVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  bool bVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  undefined2 uVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  undefined4 *puVar15;
  ushort *puVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  byte *pbVar22;
  int local_40;
  uint local_3c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_004a4250();
  uVar6 = *(uint *)(param_1 + 0xc);
  cVar3 = *(char *)(uVar6 + 6);
  uVar9 = CONCAT31((int3)(uVar6 >> 8),cVar3);
  if (cVar3 == '\0') goto LAB_004a55ed;
  uVar9 = FUN_007c4b80();
  puVar16 = *(ushort **)(uVar6 + 8);
  if (puVar16 == (ushort *)0x0) {
    if ((int)uVar9 < 0) {
      uVar21 = 0;
    }
    else {
      uVar21 = uVar9;
      if ((int)(uint)*(ushort *)(uVar6 + 4) <= (int)uVar9) {
        uVar21 = *(ushort *)(uVar6 + 4) - 1;
      }
    }
  }
  else if ((int)uVar9 < (int)(uint)*puVar16) {
    uVar21 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x1c) < 1) {
      iVar12 = 0;
    }
    else {
      iVar12 = *(int *)(param_1 + 0x1c) + -1;
    }
    puVar16 = puVar16 + iVar12;
    if ((int)uVar9 < (int)(uint)*puVar16) {
      for (; (0 < iVar12 && ((int)uVar9 < (int)(uint)*puVar16)); puVar16 = puVar16 + -1) {
        iVar12 = iVar12 + -1;
      }
    }
    else {
      while ((iVar12 < (int)(*(ushort *)(uVar6 + 4) - 2) &&
             (puVar16 = puVar16 + 1, (int)(uint)*puVar16 <= (int)uVar9))) {
        iVar12 = iVar12 + 1;
      }
    }
    uVar21 = iVar12 + 1;
  }
  bVar4 = *(byte *)(uVar6 + 0x10);
  uVar17 = 0x7fffffff >> (0x1f - bVar4 & 0x1f);
  uVar10 = uVar17 & uVar21;
  iVar19 = (int)uVar21 >> (bVar4 & 0x1f);
  local_3c = *(uint *)(param_1 + 0x1c);
  iVar13 = *(int *)(param_1 + 0x18) * iVar19 + *(int *)(param_1 + 0x14);
  iVar12 = *(int *)(uVar6 + 0xc);
  if (((int)uVar21 < (int)local_3c) && (DAT_008ee4e4 == '\0')) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  if ((((local_3c == 0xffffffff) || (iVar19 != (int)local_3c >> (bVar4 & 0x1f))) || (uVar10 == 0))
     || (bVar7)) {
    iVar18 = 0;
    if (cVar3 != '\0') {
      iVar20 = 0;
      do {
        if ((*(uint *)(param_3 + ((int)(uint)*(byte *)(iVar18 + iVar12) >> 5) * 4) &
            1 << (*(byte *)(iVar18 + iVar12) & 0x1f)) != 0) {
          FUN_00494930(*(int *)(param_1 + 0x24) + iVar20);
        }
        iVar18 = iVar18 + 1;
        iVar20 = iVar20 + 0x10;
      } while (iVar18 < (int)(uint)*(byte *)(uVar6 + 6));
    }
    local_3c = 0;
  }
  else {
    local_3c = local_3c & uVar17;
  }
  if ((int)local_3c < (int)uVar10) {
    pbVar22 = (byte *)(iVar13 + (local_3c + 2) * (uint)*(byte *)(uVar6 + 6) * 3);
    local_3c = uVar10 - local_3c;
    do {
      iVar18 = 0;
      if (*(char *)(uVar6 + 6) != '\0') {
        iVar20 = 0;
        do {
          if ((*(uint *)(param_3 + ((int)(uint)*(byte *)(iVar18 + iVar12) >> 5) * 4) &
              1 << (*(byte *)(iVar18 + iVar12) & 0x1f)) != 0) {
            FUN_00494820(&local_18);
            pfVar14 = (float *)(*(int *)(param_1 + 0x24) + iVar20);
            fVar2 = (float)pbVar22[1] * local_8 * _DAT_008954f8;
            fVar8 = (float)pbVar22[2] * local_4 * _DAT_008954f8;
            *pfVar14 = (float)(*pbVar22 >> 1) * local_c * _DAT_008954f4 + local_18 + *pfVar14;
            pfVar14 = (float *)(*(int *)(param_1 + 0x24) + 4 + iVar20);
            *pfVar14 = fVar2 + local_14 + *pfVar14;
            pfVar14 = (float *)(*(int *)(param_1 + 0x24) + 8 + iVar20);
            *pfVar14 = fVar8 + local_10 + *pfVar14;
          }
          pbVar22 = pbVar22 + 3;
          iVar18 = iVar18 + 1;
          iVar20 = iVar20 + 0x10;
        } while (iVar18 < (int)(uint)*(byte *)(uVar6 + 6));
      }
      local_3c = local_3c + -1;
    } while (local_3c != 0);
    iVar18 = (uVar10 + 1) * (uint)*(byte *)(uVar6 + 6);
    pbVar22 = (byte *)(iVar13 + iVar18 * 3);
    iVar13 = 0;
    local_3c = CONCAT31((int3)((uint)iVar18 >> 8),*(char *)(uVar6 + 6));
    if (*(char *)(uVar6 + 6) != '\0') {
      iVar18 = 0;
      do {
        if ((*(uint *)(param_3 + ((int)(uint)*(byte *)(iVar13 + iVar12) >> 5) * 4) &
            1 << (*(byte *)(iVar13 + iVar12) & 0x1f)) != 0) {
          fVar2 = *(float *)(*(int *)(param_1 + 0x24) + 8 + iVar18);
          pfVar14 = (float *)(*(int *)(param_1 + 0x24) + iVar18);
          bVar5 = *pbVar22;
          fVar2 = fVar2 * fVar2 + pfVar14[1] * pfVar14[1] + *pfVar14 * *pfVar14;
          if (fVar2 <= _DAT_0089096c) {
            fVar2 = _DAT_0089096c - fVar2;
            pfVar14[3] = SQRT(fVar2);
            if ((bVar5 & 1) != 0) {
              pfVar14[3] = -SQRT(fVar2);
            }
          }
          else {
            pfVar14[3] = 0.0;
            fVar2 = _DAT_0089096c / SQRT(fVar2);
            *pfVar14 = fVar2 * *pfVar14;
            pfVar14[1] = fVar2 * pfVar14[1];
            pfVar14[2] = fVar2 * pfVar14[2];
          }
        }
        pbVar22 = pbVar22 + 3;
        iVar13 = iVar13 + 1;
        iVar18 = iVar18 + 0x10;
        local_3c = uVar6;
      } while (iVar13 < (int)(uint)*(byte *)(uVar6 + 6));
    }
  }
  else if ((int)uVar10 < (int)local_3c) {
    pbVar22 = (byte *)((local_3c + 2) * (uint)*(byte *)(uVar6 + 6) * 3 + -3 + iVar13);
    if ((int)uVar10 <= (int)(local_3c - 1)) {
      local_3c = ((local_3c - 1) - uVar10) + 1;
      do {
        iVar18 = *(byte *)(uVar6 + 6) - 1;
        if (-1 < iVar18) {
          iVar20 = iVar18 * 0x10;
          do {
            if ((*(uint *)(param_3 + ((int)(uint)*(byte *)(iVar12 + iVar18) >> 5) * 4) &
                1 << (*(byte *)(iVar12 + iVar18) & 0x1f)) != 0) {
              FUN_00494820(&local_18);
              pfVar14 = (float *)(*(int *)(param_1 + 0x24) + iVar20);
              fVar2 = (float)pbVar22[1] * local_8 * _DAT_008954f8;
              fVar8 = (float)pbVar22[2] * local_4 * _DAT_008954f8;
              *pfVar14 = *pfVar14 - ((float)(*pbVar22 >> 1) * local_c * _DAT_008954f4 + local_18);
              *(float *)(*(int *)(param_1 + 0x24) + 4 + iVar20) =
                   *(float *)(*(int *)(param_1 + 0x24) + 4 + iVar20) - (fVar2 + local_14);
              pfVar14 = (float *)(*(int *)(param_1 + 0x24) + 8 + iVar20);
              *pfVar14 = *pfVar14 - (fVar8 + local_10);
            }
            pbVar22 = pbVar22 + -3;
            iVar18 = iVar18 + -1;
            iVar20 = iVar20 + -0x10;
          } while (-1 < iVar18);
        }
        local_3c = local_3c + -1;
      } while (local_3c != 0);
    }
    iVar18 = (uVar10 + 1) * (uint)*(byte *)(uVar6 + 6);
    pbVar22 = (byte *)(iVar13 + iVar18 * 3);
    iVar13 = 0;
    local_3c = CONCAT31((int3)((uint)iVar18 >> 8),*(char *)(uVar6 + 6));
    if (*(char *)(uVar6 + 6) != '\0') {
      local_40 = 0;
      do {
        local_3c = (int)(uint)*(byte *)(iVar13 + iVar12) >> 5;
        if ((*(uint *)(param_3 + local_3c * 4) & 1 << (*(byte *)(iVar13 + iVar12) & 0x1f)) != 0) {
          local_3c = FUN_004948c0(*pbVar22 & 1,*(int *)(param_1 + 0x24) + local_40);
        }
        local_40 = local_40 + 0x10;
        pbVar22 = pbVar22 + 3;
        iVar13 = iVar13 + 1;
      } while (iVar13 < (int)(uint)*(byte *)(uVar6 + 6));
    }
  }
  *(uint *)(param_1 + 0x1c) = uVar21;
  puVar16 = *(ushort **)(uVar6 + 8);
  iVar13 = 0;
  uVar11 = (undefined2)(local_3c >> 0x10);
  if (puVar16 == (ushort *)0x0) {
    fVar2 = (float)(int)uVar9;
    uVar9 = CONCAT22(uVar11,(ushort)(param_2 < fVar2) << 8 |
                            (ushort)(NAN(param_2) || NAN(fVar2)) << 10 |
                            (ushort)(param_2 == fVar2) << 0xe);
    if (param_2 != fVar2) {
      param_2 = param_2 - fVar2;
      goto LAB_004a5253;
    }
  }
  else if (uVar21 == 0) {
    uVar9 = CONCAT22(uVar11,(ushort)(param_2 < _DAT_00890968) << 8 |
                            (ushort)(NAN(param_2) || NAN(_DAT_00890968)) << 10 |
                            (ushort)(param_2 == _DAT_00890968) << 0xe);
    if (param_2 != _DAT_00890968) {
      param_2 = param_2 / (float)*puVar16;
LAB_004a5253:
      uVar9 = *(ushort *)(uVar6 + 4) - 1;
      if ((int)uVar21 < (int)uVar9) {
        iVar18 = (int)(uVar21 + 1) >> (bVar4 & 0x1f);
        if (iVar18 == iVar19) {
          uVar9 = 0;
          local_3c = 0;
          if (*(char *)(uVar6 + 6) != '\0') {
            do {
              if ((*(uint *)(param_3 + ((int)(uint)*(byte *)(local_3c + iVar12) >> 5) * 4) &
                  1 << (*(byte *)(local_3c + iVar12) & 0x1f)) != 0) {
                FUN_00494820(&local_18);
                FUN_00496c10(param_2);
              }
              uVar9 = local_3c + 1;
              local_3c = uVar9;
            } while ((int)uVar9 < (int)(uint)*(byte *)(uVar6 + 6));
          }
        }
        else {
          uVar9 = CONCAT31((int3)((uint)iVar18 >> 8),*(char *)(uVar6 + 6));
          if (*(char *)(uVar6 + 6) != '\0') {
            do {
              if ((*(uint *)(param_3 + ((int)(uint)*(byte *)(iVar13 + iVar12) >> 5) * 4) &
                  1 << (*(byte *)(iVar13 + iVar12) & 0x1f)) != 0) {
                FUN_00496c10(param_2);
              }
              uVar9 = (uint)*(byte *)(uVar6 + 6);
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)uVar9);
          }
        }
        goto LAB_004a55ed;
      }
    }
  }
  else {
    fVar2 = (float)puVar16[uVar21 - 1];
    uVar9 = (uint)(ushort)((ushort)(param_2 < fVar2) << 8 |
                           (ushort)(NAN(param_2) || NAN(fVar2)) << 10 |
                          (ushort)(param_2 == fVar2) << 0xe);
    if (param_2 != fVar2) {
      param_2 = (param_2 - fVar2) / ((float)puVar16[uVar21] - fVar2);
      goto LAB_004a5253;
    }
  }
  uVar9 = CONCAT31((int3)(uVar9 >> 8),*(char *)(uVar6 + 6));
  iVar13 = 0;
  if (*(char *)(uVar6 + 6) != '\0') {
    param_2 = 0.0;
    do {
      bVar4 = *(byte *)(iVar13 + iVar12);
      if ((*(uint *)(param_3 + ((int)(uint)bVar4 >> 5) * 4) & 1 << (bVar4 & 0x1f)) != 0) {
        puVar15 = (undefined4 *)(*(int *)(param_1 + 0x24) + (int)param_2);
        puVar1 = (undefined4 *)((uint)bVar4 * 0x30 + 0x10 + param_4);
        *puVar1 = *puVar15;
        puVar1[1] = puVar15[1];
        puVar1[2] = puVar15[2];
        puVar1[3] = puVar15[3];
      }
      uVar9 = (uint)*(byte *)(uVar6 + 6);
      iVar13 = iVar13 + 1;
      param_2 = (float)((int)param_2 + 0x10);
    } while (iVar13 < (int)uVar9);
  }
LAB_004a55ed:
  cVar3 = *(char *)(uVar6 + 7);
  uVar9 = CONCAT31((int3)(uVar9 >> 8),cVar3);
  if (cVar3 != '\0') {
    iVar12 = *(int *)(uVar6 + 0xc);
    iVar13 = 0;
    if (cVar3 != '\0') {
      iVar19 = 0;
      do {
        bVar4 = *(byte *)(iVar13 + iVar12);
        if ((*(uint *)(param_3 + ((int)(uint)bVar4 >> 5) * 4) & 1 << (bVar4 & 0x1f)) != 0) {
          pbVar22 = (byte *)(*(int *)(param_1 + 0x2c) + iVar19);
          pfVar14 = (float *)((uint)*(byte *)(*(int *)(param_1 + 0x28) + iVar13) * 0x30 + 0x10 +
                             param_4);
          *pfVar14 = (float)(*(ushort *)(*(int *)(param_1 + 0x2c) + iVar19) >> 1) * _DAT_008957c0 -
                     _DAT_0089096c;
          pfVar14[1] = (float)*(ushort *)(pbVar22 + 2) * _DAT_008957bc - _DAT_0089096c;
          fVar2 = (float)*(ushort *)(pbVar22 + 4) * _DAT_008957bc - _DAT_0089096c;
          pfVar14[2] = fVar2;
          bVar4 = *pbVar22;
          fVar2 = fVar2 * fVar2 + pfVar14[1] * pfVar14[1] + *pfVar14 * *pfVar14;
          if (fVar2 <= _DAT_0089096c) {
            fVar2 = _DAT_0089096c - fVar2;
            pfVar14[3] = SQRT(fVar2);
            if ((bVar4 & 1) != 0) {
              pfVar14[3] = -SQRT(fVar2);
            }
          }
          else {
            pfVar14[3] = 0.0;
            fVar2 = _DAT_0089096c / SQRT(fVar2);
            *pfVar14 = fVar2 * *pfVar14;
            pfVar14[1] = fVar2 * pfVar14[1];
            pfVar14[2] = fVar2 * pfVar14[2];
          }
        }
        uVar9 = (uint)*(byte *)(uVar6 + 7);
        iVar13 = iVar13 + 1;
        iVar19 = iVar19 + 6;
      } while (iVar13 < (int)uVar9);
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  return CONCAT31((int3)(uVar9 >> 8),1);
}

