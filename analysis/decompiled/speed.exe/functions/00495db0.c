/* speed.exe 00495db0 FUN_00495db0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00495db0(int param_1,float param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  int iVar9;
  undefined4 uVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  float *pfVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  float *pfVar19;
  uint uVar20;
  ushort *puVar21;
  byte *pbVar22;
  byte *pbVar23;
  int iVar24;
  undefined4 *puVar25;
  uint uVar26;
  undefined4 *puVar27;
  int iVar28;
  int local_88;
  float local_84;
  int local_80;
  ushort *local_7c;
  int local_78;
  ushort *local_70;
  byte *local_68;
  byte abStack_50 [80];
  
  if (param_4 != *(int *)(param_1 + 0x28)) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
    *(int *)(param_1 + 0x28) = param_4;
  }
  iVar9 = *(int *)(param_1 + 0xc);
  uVar12 = FUN_007c4b80();
  puVar21 = *(ushort **)(iVar9 + 8);
  if (puVar21 == (ushort *)0x0) {
    if ((int)uVar12 < 0) {
      local_7c = (ushort *)0x0;
    }
    else {
      local_7c = (ushort *)uVar12;
      if ((int)(uint)*(ushort *)(iVar9 + 0xc) <= (int)uVar12) {
        local_7c = (ushort *)(*(ushort *)(iVar9 + 0xc) - 1);
      }
    }
  }
  else if ((int)uVar12 < (int)(uint)*puVar21) {
    local_7c = (ushort *)0x0;
  }
  else {
    if (*(int *)(param_1 + 0x10) < 1) {
      iVar17 = 0;
    }
    else {
      iVar17 = *(int *)(param_1 + 0x10) + -1;
    }
    puVar21 = puVar21 + iVar17;
    if ((int)uVar12 < (int)(uint)*puVar21) {
      for (; (0 < iVar17 && ((int)uVar12 < (int)(uint)*puVar21)); puVar21 = puVar21 + -1) {
        iVar17 = iVar17 + -1;
      }
    }
    else {
      while ((iVar17 < (int)(*(ushort *)(iVar9 + 0xc) - 2) &&
             (puVar21 = puVar21 + 1, (int)(uint)*puVar21 <= (int)uVar12))) {
        iVar17 = iVar17 + 1;
      }
    }
    local_7c = (ushort *)(iVar17 + 1);
  }
  bVar5 = *(byte *)(iVar9 + 0x10);
  uVar13 = 0x7fffffff >> (0x1f - bVar5 & 0x1f);
  iVar28 = (int)local_7c >> (bVar5 & 0x1f);
  uVar14 = uVar13 & (uint)local_7c;
  uVar20 = (uint)*(ushort *)(iVar9 + 0xe);
  uVar16 = *(uint *)(param_1 + 0x10);
  uVar26 = (uint)*(ushort *)(iVar9 + 0xe);
  iVar17 = (((1 << (bVar5 & 0x1f)) + 1) * uVar20 * 3 + 1 & 0xfffffffe) * iVar28 + iVar9 + 0x14 +
           uVar20 * 0x24;
  if (uVar26 != 0) {
    iVar18 = 0;
    do {
      abStack_50[iVar18] = (byte)(*(ushort *)(*(int *)(iVar9 + 4) + iVar18 * 2) / 0xc);
      iVar18 = iVar18 + 1;
    } while (iVar18 < (int)uVar26);
  }
  if (((int)local_7c < (int)uVar16) && (DAT_008ee4e4 == '\0')) {
    bVar11 = true;
  }
  else {
    bVar11 = false;
  }
  if (local_7c == (ushort *)*(uint *)(param_1 + 0x1c)) {
    uVar10 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x24) = uVar10;
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  }
  else {
    if (((uVar16 == 0xffffffff) || (iVar28 != (int)uVar16 >> (bVar5 & 0x1f))) || (bVar11)) {
      iVar18 = 0;
      if (uVar26 != 0) {
        local_80 = 0;
        local_84 = 0.0;
        puVar21 = (ushort *)(iVar17 + 4);
        do {
          if ((*(uint *)(param_4 + ((int)(uint)abStack_50[iVar18] >> 5) * 4) &
              1 << (abStack_50[iVar18] & 0x1f)) != 0) {
            pfVar19 = (float *)(*(int *)(param_1 + 0x18) + (int)local_84);
            pfVar15 = (float *)(*(int *)(param_1 + 0x2c) + local_80);
            *pfVar19 = (float)puVar21[-2] * pfVar15[3] + *pfVar15;
            pfVar19[1] = (float)puVar21[-1] * pfVar15[4] + pfVar15[1];
            pfVar19[2] = (float)*puVar21 * pfVar15[5] + pfVar15[2];
          }
          iVar18 = iVar18 + 1;
          local_84 = (float)((int)local_84 + 0x10);
          local_80 = local_80 + 0x30;
          puVar21 = puVar21 + 3;
        } while (iVar18 < (int)(uint)*(ushort *)(iVar9 + 0xe));
      }
      uVar16 = 0;
    }
    else {
      uVar16 = uVar16 & uVar13;
    }
    if ((int)uVar16 < (int)uVar14) {
      iVar17 = iVar17 + (uVar16 + 2) * (uint)*(ushort *)(iVar9 + 0xe) * 3;
      local_78 = uVar14 - uVar16;
      do {
        local_88 = 0;
        if (*(short *)(iVar9 + 0xe) != 0) {
          iVar18 = 0;
          local_80 = 0;
          pbVar22 = (byte *)(iVar17 + 2);
          do {
            if ((*(uint *)(param_4 + ((int)(uint)abStack_50[local_88] >> 5) * 4) &
                1 << (abStack_50[local_88] & 0x1f)) != 0) {
              iVar24 = *(int *)(param_1 + 0x2c) + local_80;
              bVar6 = pbVar22[-1];
              bVar7 = *pbVar22;
              fVar1 = *(float *)(iVar24 + 0x28);
              fVar2 = *(float *)(iVar24 + 0x1c);
              fVar3 = *(float *)(iVar24 + 0x2c);
              fVar4 = *(float *)(iVar24 + 0x20);
              pfVar15 = (float *)(*(int *)(param_1 + 0x18) + iVar18);
              *pfVar15 = (float)pbVar22[-2] * *(float *)(iVar24 + 0x24) + *(float *)(iVar24 + 0x18)
                         + *pfVar15;
              pfVar15 = (float *)(iVar18 + 4 + *(int *)(param_1 + 0x18));
              *pfVar15 = (float)bVar6 * fVar1 + fVar2 + *pfVar15;
              pfVar15 = (float *)(iVar18 + 8 + *(int *)(param_1 + 0x18));
              *pfVar15 = (float)bVar7 * fVar3 + fVar4 + *pfVar15;
            }
            local_80 = local_80 + 0x30;
            local_88 = local_88 + 1;
            pbVar22 = pbVar22 + 3;
            iVar18 = iVar18 + 0x10;
          } while (local_88 < (int)(uint)*(ushort *)(iVar9 + 0xe));
        }
        iVar17 = iVar17 + uVar20 * 3;
        local_78 = local_78 + -1;
      } while (local_78 != 0);
    }
    else if ((int)uVar14 < (int)uVar16) {
      if ((int)uVar14 <= (int)(uVar16 - 1)) {
        pbVar22 = (byte *)(iVar17 + (uVar16 + 1) * (uint)*(ushort *)(iVar9 + 0xe) * 3 + 2);
        local_84 = (float)(((uVar16 - 1) - uVar14) + 1);
        do {
          local_78 = 0;
          if (*(short *)(iVar9 + 0xe) != 0) {
            iVar17 = 0;
            local_88 = 0;
            pbVar23 = pbVar22;
            do {
              if ((*(uint *)(param_4 + ((int)(uint)abStack_50[local_78] >> 5) * 4) &
                  1 << (abStack_50[local_78] & 0x1f)) != 0) {
                iVar18 = *(int *)(param_1 + 0x2c) + local_88;
                bVar6 = pbVar23[-1];
                bVar7 = *pbVar23;
                fVar1 = *(float *)(iVar18 + 0x28);
                fVar2 = *(float *)(iVar18 + 0x1c);
                fVar3 = *(float *)(iVar18 + 0x2c);
                fVar4 = *(float *)(iVar18 + 0x20);
                pfVar15 = (float *)(*(int *)(param_1 + 0x18) + iVar17);
                *pfVar15 = *pfVar15 -
                           ((float)pbVar23[-2] * *(float *)(iVar18 + 0x24) +
                           *(float *)(iVar18 + 0x18));
                *(float *)(iVar17 + 4 + *(int *)(param_1 + 0x18)) =
                     *(float *)(iVar17 + 4 + *(int *)(param_1 + 0x18)) -
                     ((float)bVar6 * fVar1 + fVar2);
                pfVar15 = (float *)(iVar17 + 8 + *(int *)(param_1 + 0x18));
                *pfVar15 = *pfVar15 - ((float)bVar7 * fVar3 + fVar4);
              }
              local_88 = local_88 + 0x30;
              local_78 = local_78 + 1;
              pbVar23 = pbVar23 + 3;
              iVar17 = iVar17 + 0x10;
            } while (local_78 < (int)(uint)*(ushort *)(iVar9 + 0xe));
          }
          pbVar22 = pbVar22 + uVar20 * -3;
          local_84 = (float)((int)local_84 + -1);
        } while (local_84 != 0.0);
      }
    }
  }
  *(ushort **)(param_1 + 0x10) = local_7c;
  puVar21 = *(ushort **)(iVar9 + 8);
  iVar17 = (int)local_7c + 1;
  local_84 = 1.0;
  if (puVar21 == (ushort *)0x0) {
    if (param_2 != (float)(int)uVar12) {
      local_84 = param_2 - (float)(int)uVar12;
LAB_004962fa:
      bVar11 = true;
      goto LAB_00496300;
    }
  }
  else {
    if (local_7c == (ushort *)0x0) {
      if (param_2 == _DAT_00890968) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
        local_84 = param_2 / (float)*puVar21;
      }
      goto LAB_00496300;
    }
    fVar1 = (float)puVar21[(int)local_7c - 1];
    if (param_2 != fVar1) {
      local_84 = (param_2 - fVar1) / ((float)puVar21[(int)local_7c] - fVar1);
      goto LAB_004962fa;
    }
  }
  bVar11 = false;
LAB_00496300:
  puVar21 = *(ushort **)(iVar9 + 4);
  if ((bVar11) && ((int)local_7c < (int)(*(ushort *)(iVar9 + 0xc) - 1))) {
    iVar24 = iVar17 >> (bVar5 & 0x1f);
    iVar18 = (((1 << (*(byte *)(iVar9 + 0x10) & 0x1f)) + 1) * (uint)*(ushort *)(iVar9 + 0xe) * 3 + 1
             & 0xfffffffe) * iVar24 + iVar9 + 0x14 + (uint)*(ushort *)(iVar9 + 0xe) * 0x24;
    if (iVar17 == *(int *)(param_1 + 0x1c)) {
      local_70 = (ushort *)0x0;
      iVar28 = iVar17;
      if (*(short *)(iVar9 + 0xe) != 0) {
        local_88 = 0;
        do {
          if ((*(uint *)(param_4 + ((int)(uint)abStack_50[(int)local_70] >> 5) * 4) &
              1 << (abStack_50[(int)local_70] & 0x1f)) != 0) {
            pfVar15 = (float *)(*(int *)(param_1 + 0x18) + local_88);
            *(float *)(param_3 + (uint)*puVar21 * 4) =
                 (*(float *)(*(int *)(param_1 + 0x24) + local_88) - *pfVar15) * local_84 + *pfVar15;
            pfVar15 = (float *)(*(int *)(param_1 + 0x18) + 4 + local_88);
            *(float *)(param_3 + 4 + (uint)*puVar21 * 4) =
                 (*(float *)(*(int *)(param_1 + 0x24) + 4 + local_88) - *pfVar15) * local_84 +
                 *pfVar15;
            pfVar15 = (float *)(*(int *)(param_1 + 0x18) + 8 + local_88);
            *(float *)(param_3 + 8 + (uint)*puVar21 * 4) =
                 (*(float *)(*(int *)(param_1 + 0x24) + 8 + local_88) - *pfVar15) * local_84 +
                 *pfVar15;
          }
          puVar21 = puVar21 + 1;
          local_70 = (ushort *)((int)local_70 + 1);
          iVar28 = local_88 + 0x10;
          local_88 = iVar28;
        } while ((int)local_70 < (int)(uint)*(ushort *)(iVar9 + 0xe));
      }
    }
    else if (iVar24 == iVar28) {
      iVar28 = (uVar14 + 2) * (uint)*(ushort *)(iVar9 + 0xe);
      iVar24 = iVar28 * 3;
      local_7c = (ushort *)0x0;
      if (*(short *)(iVar9 + 0xe) != 0) {
        iVar28 = 0;
        local_68 = (byte *)(iVar18 + iVar24 + 2);
        local_88 = 0;
        do {
          if ((*(uint *)(param_4 + ((int)(uint)abStack_50[(int)local_7c] >> 5) * 4) &
              1 << (abStack_50[(int)local_7c] & 0x1f)) != 0) {
            iVar18 = *(int *)(param_1 + 0x2c) + local_88;
            fVar1 = (float)local_68[-2] * *(float *)(iVar18 + 0x24) + *(float *)(iVar18 + 0x18);
            fVar2 = (float)local_68[-1] * *(float *)(iVar18 + 0x28) + *(float *)(iVar18 + 0x1c);
            fVar3 = (float)*local_68 * *(float *)(iVar18 + 0x2c) + *(float *)(iVar18 + 0x20);
            *(int *)(param_1 + 0x1c) = iVar17;
            *(float *)(iVar28 + *(int *)(param_1 + 0x24)) =
                 fVar1 + *(float *)(*(int *)(param_1 + 0x18) + iVar28);
            *(float *)(*(int *)(param_1 + 0x24) + 4 + iVar28) =
                 fVar2 + *(float *)(*(int *)(param_1 + 0x18) + 4 + iVar28);
            *(float *)(*(int *)(param_1 + 0x24) + 8 + iVar28) =
                 fVar3 + *(float *)(*(int *)(param_1 + 0x18) + 8 + iVar28);
            *(float *)(param_3 + (uint)*puVar21 * 4) =
                 fVar1 * local_84 + *(float *)(*(int *)(param_1 + 0x18) + iVar28);
            *(float *)(param_3 + 4 + (uint)*puVar21 * 4) =
                 fVar2 * local_84 + *(float *)(*(int *)(param_1 + 0x18) + 4 + iVar28);
            *(float *)(param_3 + 8 + (uint)*puVar21 * 4) =
                 fVar3 * local_84 + *(float *)(*(int *)(param_1 + 0x18) + 8 + iVar28);
          }
          puVar21 = puVar21 + 1;
          local_7c = (ushort *)((int)local_7c + 1);
          local_88 = local_88 + 0x30;
          local_68 = local_68 + 3;
          iVar28 = iVar28 + 0x10;
        } while ((int)local_7c < (int)(uint)*(ushort *)(iVar9 + 0xe));
      }
    }
    else {
      iVar28 = 0;
      local_70 = (ushort *)0x0;
      if (*(short *)(iVar9 + 0xe) != 0) {
        iVar24 = 0;
        local_7c = (ushort *)(iVar18 + 4);
        local_88 = 0;
        do {
          if ((*(uint *)(param_4 + ((int)(uint)abStack_50[(int)local_70] >> 5) * 4) &
              1 << (abStack_50[(int)local_70] & 0x1f)) != 0) {
            pfVar19 = (float *)(*(int *)(param_1 + 0x24) + iVar24);
            pfVar15 = (float *)(*(int *)(param_1 + 0x2c) + local_88);
            *pfVar19 = (float)local_7c[-2] * pfVar15[3] + *pfVar15;
            pfVar19[1] = (float)local_7c[-1] * pfVar15[4] + pfVar15[1];
            pfVar19[2] = (float)*local_7c * pfVar15[5] + pfVar15[2];
            *(int *)(param_1 + 0x1c) = iVar17;
            pfVar15 = (float *)(*(int *)(param_1 + 0x18) + iVar24);
            *(float *)(param_3 + (uint)*puVar21 * 4) =
                 (*(float *)(*(int *)(param_1 + 0x24) + iVar24) - *pfVar15) * local_84 + *pfVar15;
            pfVar15 = (float *)(*(int *)(param_1 + 0x18) + 4 + iVar24);
            *(float *)(param_3 + 4 + (uint)*puVar21 * 4) =
                 (*(float *)(*(int *)(param_1 + 0x24) + 4 + iVar24) - *pfVar15) * local_84 +
                 *pfVar15;
            pfVar15 = (float *)(*(int *)(param_1 + 0x18) + 8 + iVar24);
            *(float *)(param_3 + 8 + (uint)*puVar21 * 4) =
                 (*(float *)(*(int *)(param_1 + 0x24) + 8 + iVar24) - *pfVar15) * local_84 +
                 *pfVar15;
          }
          local_7c = local_7c + 3;
          local_88 = local_88 + 0x30;
          puVar21 = puVar21 + 1;
          iVar28 = (int)local_70 + 1;
          iVar24 = iVar24 + 0x10;
          local_70 = (ushort *)iVar28;
        } while (iVar28 < (int)(uint)*(ushort *)(iVar9 + 0xe));
      }
    }
  }
  else {
    iVar28 = 0;
    local_88 = 0;
    if (*(short *)(iVar9 + 0xe) != 0) {
      local_80 = 0;
      do {
        if ((*(uint *)(param_4 + ((int)(uint)abStack_50[local_88] >> 5) * 4) &
            1 << (abStack_50[local_88] & 0x1f)) != 0) {
          puVar25 = (undefined4 *)(*(int *)(param_1 + 0x18) + local_80);
          puVar27 = (undefined4 *)(param_3 + (uint)puVar21[local_88] * 4);
          *puVar27 = *puVar25;
          puVar27[1] = puVar25[1];
          puVar27[2] = puVar25[2];
        }
        local_80 = local_80 + 0x10;
        iVar28 = local_88 + 1;
        local_88 = iVar28;
      } while (iVar28 < (int)(uint)*(ushort *)(iVar9 + 0xe));
    }
  }
  iVar17 = CONCAT31((int3)((uint)iVar28 >> 8),*(char *)(iVar9 + 0x11));
  if (*(char *)(iVar9 + 0x11) != '\0') {
    bVar5 = *(byte *)(iVar9 + 0x10);
    local_70 = (ushort *)
               ((((1 << (bVar5 & 0x1f)) + 1) * (uint)*(ushort *)(iVar9 + 0xe) * 3 + 1 & 0xfffffffe)
                * (uint)(*(ushort *)(iVar9 + 0xc) >> (bVar5 & 0x1f)) + iVar9 + 0x14 +
               (uint)*(ushort *)(iVar9 + 0xe) * 0x24);
    uVar12 = 0x7fffffffU >> (0x1f - bVar5 & 0x1f) & (uint)*(ushort *)(iVar9 + 0xc);
    if (uVar12 != 0) {
      local_70 = (ushort *)
                 ((uVar12 + 1) * (uint)*(ushort *)(iVar9 + 0xe) * 3 + 1 + (int)local_70 & 0xfffffffe
                 );
    }
    if (*(short *)(iVar9 + 0xe) == 0) {
      local_70 = (ushort *)((int)local_70 + 1U & 0xfffffffe);
    }
    bVar5 = *(byte *)(iVar9 + 0x10);
    uVar12 = (((1 << (bVar5 & 0x1f)) + 1) * (uint)*(ushort *)(iVar9 + 0xe) * 3 + 1 & 0xfffffffe) *
             (uint)(*(ushort *)(iVar9 + 0xc) >> (bVar5 & 0x1f)) + iVar9 + 0x14 +
             (uint)*(ushort *)(iVar9 + 0xe) * 0x24;
    uVar16 = 0x7fffffffU >> (0x1f - bVar5 & 0x1f) & (uint)*(ushort *)(iVar9 + 0xc);
    if (uVar16 != 0) {
      uVar12 = (uVar16 + 1) * (uint)*(ushort *)(iVar9 + 0xe) * 3 + 1 + uVar12 & 0xfffffffe;
    }
    if (*(short *)(iVar9 + 0xe) == 0) {
      uVar12 = uVar12 + 1 & 0xfffffffe;
    }
    puVar27 = (undefined4 *)(uVar12 + 3 + (uint)*(byte *)(iVar9 + 0x11) * 2 & 0xfffffffc);
    local_78 = 0;
    iVar17 = 0;
    if (*(byte *)(iVar9 + 0x11) != 0) {
      do {
        uVar8 = *local_70;
        local_70 = local_70 + 1;
        if ((*(uint *)(param_4 + ((int)(uVar8 / 0xc) >> 5) * 4) & 1 << ((byte)(uVar8 / 0xc) & 0x1f))
            != 0) {
          *(undefined4 *)(param_3 + (uint)uVar8 * 4) = *puVar27;
          *(undefined4 *)(param_3 + (uint)(ushort)(uVar8 + 1) * 4) = puVar27[1];
          *(undefined4 *)(param_3 + (uint)(ushort)(uVar8 + 2) * 4) = puVar27[2];
        }
        puVar27 = puVar27 + 3;
        iVar17 = local_78 + 1;
        local_78 = iVar17;
      } while (iVar17 < (int)(uint)*(byte *)(iVar9 + 0x11));
    }
  }
  return CONCAT31((int3)((uint)iVar17 >> 8),1);
}

