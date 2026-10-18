/* speed.exe 004a3890 FUN_004a3890; analysis pseudocode, not buildable source.
 * calls 004968e0 FUN_004968e0
 * calls 007c4b80 FUN_007c4b80
 * calls 00495db0 FUN_00495db0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004a3890(int param_1,ushort *param_2,int param_3,float param_4)

{
  byte *pbVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  int iVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  float *pfVar18;
  float *pfVar19;
  undefined4 *puVar20;
  uint uVar21;
  byte *pbVar22;
  byte *pbVar23;
  undefined4 *puVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  ushort *puVar30;
  uint uVar31;
  int local_2c;
  int local_24;
  int local_20;
  int local_18;
  
  iVar12 = param_3;
  if (*(int *)(param_1 + 0x18) == 0) {
    FUN_004968e0();
  }
  if (param_4 != 0.0) {
    uVar14 = FUN_00495db0(param_2,param_3,param_4);
    return uVar14;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  iVar10 = *(int *)(param_1 + 0xc);
  uVar15 = FUN_007c4b80();
  puVar30 = *(ushort **)(iVar10 + 8);
  if (puVar30 == (ushort *)0x0) {
    if ((int)uVar15 < 0) {
      param_4 = 0.0;
    }
    else {
      param_4 = (float)uVar15;
      if ((int)(uint)*(ushort *)(iVar10 + 0xc) <= (int)uVar15) {
        param_4 = (float)(*(ushort *)(iVar10 + 0xc) - 1);
      }
    }
  }
  else if ((int)uVar15 < (int)(uint)*puVar30) {
    param_4 = 0.0;
  }
  else {
    if (*(int *)(param_1 + 0x10) < 1) {
      iVar27 = 0;
    }
    else {
      iVar27 = *(int *)(param_1 + 0x10) + -1;
    }
    puVar30 = puVar30 + iVar27;
    if ((int)uVar15 < (int)(uint)*puVar30) {
      for (; (0 < iVar27 && ((int)uVar15 < (int)(uint)*puVar30)); puVar30 = puVar30 + -1) {
        iVar27 = iVar27 + -1;
      }
    }
    else {
      while ((iVar27 < (int)(*(ushort *)(iVar10 + 0xc) - 2) &&
             (puVar30 = puVar30 + 1, (int)(uint)*puVar30 <= (int)uVar15))) {
        iVar27 = iVar27 + 1;
      }
    }
    param_4 = (float)(iVar27 + 1);
  }
  uVar13 = (uint)param_4;
  bVar6 = *(byte *)(iVar10 + 0x10);
  uVar28 = 0x7fffffff >> (0x1f - bVar6 & 0x1f);
  iVar25 = (int)param_4 >> (bVar6 & 0x1f);
  uVar21 = uVar28 & (uint)param_4;
  uVar31 = *(uint *)(param_1 + 0x10);
  uVar26 = (uint)*(ushort *)(iVar10 + 0xe);
  iVar27 = (((1 << (bVar6 & 0x1f)) + 1) * uVar26 * 3 + 1 & 0xfffffffe) * iVar25 + iVar10 + 0x14 +
           uVar26 * 0x24;
  if (((int)param_4 < (int)uVar31) && (DAT_008ee4e4 == '\0')) {
    bVar11 = true;
  }
  else {
    bVar11 = false;
  }
  if (param_4 == (float)*(uint *)(param_1 + 0x1c)) {
    uVar14 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x24) = uVar14;
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  }
  else {
    if ((((uVar31 == 0xffffffff) || (iVar25 != (int)uVar31 >> (bVar6 & 0x1f))) || (uVar21 == 0)) ||
       (bVar11)) {
      local_20 = 0;
      if (*(short *)(iVar10 + 0xe) != 0) {
        iVar17 = 0;
        local_2c = 0;
        puVar30 = (ushort *)(iVar27 + 4);
        do {
          pfVar18 = (float *)(*(int *)(param_1 + 0x2c) + local_2c);
          pfVar19 = (float *)(*(int *)(param_1 + 0x18) + iVar17);
          iVar17 = iVar17 + 0x10;
          *pfVar19 = (float)puVar30[-2] * pfVar18[3] + *pfVar18;
          pfVar19[1] = (float)puVar30[-1] * pfVar18[4] + pfVar18[1];
          local_20 = local_20 + 1;
          pfVar19[2] = (float)*puVar30 * pfVar18[5] + pfVar18[2];
          local_2c = local_2c + 0x30;
          puVar30 = puVar30 + 3;
        } while (local_20 < (int)(uint)*(ushort *)(iVar10 + 0xe));
      }
      uVar31 = 0;
    }
    else {
      uVar31 = uVar31 & uVar28;
    }
    if ((int)uVar31 < (int)uVar21) {
      iVar27 = iVar27 + (uVar31 + 2) * (uint)*(ushort *)(iVar10 + 0xe) * 3;
      uVar28 = (uint)*(ushort *)(iVar10 + 0xe);
      local_2c = uVar21 - uVar31;
      do {
        local_20 = 0;
        if (uVar28 != 0) {
          iVar17 = 0;
          iVar29 = 0;
          pbVar22 = (byte *)(iVar27 + 2);
          do {
            pbVar23 = pbVar22 + -2;
            iVar16 = *(int *)(param_1 + 0x2c) + iVar29;
            bVar8 = pbVar22[-1];
            bVar7 = *pbVar22;
            iVar29 = iVar29 + 0x30;
            pbVar22 = pbVar22 + 3;
            fVar2 = *(float *)(iVar16 + 0x28);
            fVar3 = *(float *)(iVar16 + 0x1c);
            fVar4 = *(float *)(iVar16 + 0x2c);
            fVar5 = *(float *)(iVar16 + 0x20);
            pfVar18 = (float *)(*(int *)(param_1 + 0x18) + iVar17);
            local_20 = local_20 + 1;
            *pfVar18 = (float)*pbVar23 * *(float *)(iVar16 + 0x24) + *(float *)(iVar16 + 0x18) +
                       *pfVar18;
            pfVar18 = (float *)(iVar17 + 4 + *(int *)(param_1 + 0x18));
            *pfVar18 = (float)bVar8 * fVar2 + fVar3 + *pfVar18;
            pfVar18 = (float *)(iVar17 + 8 + *(int *)(param_1 + 0x18));
            iVar17 = iVar17 + 0x10;
            *pfVar18 = (float)bVar7 * fVar4 + fVar5 + *pfVar18;
            uVar28 = (uint)*(ushort *)(iVar10 + 0xe);
          } while (local_20 < (int)uVar28);
        }
        iVar27 = iVar27 + uVar26 * 3;
        local_2c = local_2c + -1;
      } while (local_2c != 0);
    }
    else if ((int)uVar21 < (int)uVar31) {
      if ((int)uVar21 <= (int)(uVar31 - 1)) {
        uVar28 = (uint)*(ushort *)(iVar10 + 0xe);
        pbVar22 = (byte *)(iVar27 + (uVar31 + 1) * (uint)*(ushort *)(iVar10 + 0xe) * 3 + 2);
        local_2c = ((uVar31 - 1) - uVar21) + 1;
        do {
          local_20 = 0;
          if (uVar28 != 0) {
            iVar27 = 0;
            iVar17 = 0;
            pbVar23 = pbVar22;
            do {
              pbVar1 = pbVar23 + -2;
              iVar29 = *(int *)(param_1 + 0x2c) + iVar17;
              bVar8 = pbVar23[-1];
              bVar7 = *pbVar23;
              iVar17 = iVar17 + 0x30;
              pbVar23 = pbVar23 + 3;
              fVar2 = *(float *)(iVar29 + 0x28);
              fVar3 = *(float *)(iVar29 + 0x1c);
              fVar4 = *(float *)(iVar29 + 0x2c);
              fVar5 = *(float *)(iVar29 + 0x20);
              pfVar18 = (float *)(*(int *)(param_1 + 0x18) + iVar27);
              local_20 = local_20 + 1;
              *pfVar18 = *pfVar18 -
                         ((float)*pbVar1 * *(float *)(iVar29 + 0x24) + *(float *)(iVar29 + 0x18));
              *(float *)(iVar27 + 4 + *(int *)(param_1 + 0x18)) =
                   *(float *)(iVar27 + 4 + *(int *)(param_1 + 0x18)) -
                   ((float)bVar8 * fVar2 + fVar3);
              pfVar18 = (float *)(iVar27 + 8 + *(int *)(param_1 + 0x18));
              iVar27 = iVar27 + 0x10;
              *pfVar18 = *pfVar18 - ((float)bVar7 * fVar4 + fVar5);
              uVar28 = (uint)*(ushort *)(iVar10 + 0xe);
            } while (local_20 < (int)uVar28);
          }
          pbVar22 = pbVar22 + uVar26 * -3;
          local_2c = local_2c + -1;
        } while (local_2c != 0);
      }
    }
  }
  iVar27 = (int)param_4 + 1;
  *(float *)(param_1 + 0x10) = param_4;
  puVar30 = *(ushort **)(iVar10 + 8);
  param_4 = 1.0;
  if (puVar30 == (ushort *)0x0) {
    if ((float)param_2 == (float)(int)uVar15) {
LAB_004a3e3e:
      bVar11 = false;
    }
    else {
      param_4 = (float)param_2 - (float)(int)uVar15;
LAB_004a3d54:
      bVar11 = true;
    }
  }
  else {
    if (uVar13 != 0) {
      fVar2 = (float)puVar30[uVar13 - 1];
      if ((float)param_2 == fVar2) goto LAB_004a3e3e;
      param_4 = ((float)param_2 - fVar2) / ((float)puVar30[uVar13] - fVar2);
      goto LAB_004a3d54;
    }
    if ((float)param_2 == _DAT_00890968) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
      param_4 = (float)param_2 / (float)*puVar30;
    }
  }
  puVar30 = *(ushort **)(iVar10 + 4);
  if ((bVar11) && ((int)uVar13 < (int)(*(ushort *)(iVar10 + 0xc) - 1))) {
    iVar29 = iVar27 >> (bVar6 & 0x1f);
    iVar17 = (((1 << (*(byte *)(iVar10 + 0x10) & 0x1f)) + 1) * (uint)*(ushort *)(iVar10 + 0xe) * 3 +
              1 & 0xfffffffe) * iVar29 + iVar10 + 0x14 + (uint)*(ushort *)(iVar10 + 0xe) * 0x24;
    if (iVar27 == *(int *)(param_1 + 0x1c)) {
      param_2 = (ushort *)0x0;
      if (*(short *)(iVar10 + 0xe) != 0) {
        iVar17 = 0;
        do {
          *(float *)(param_3 + (uint)*puVar30 * 4) =
               (*(float *)(iVar17 + *(int *)(param_1 + 0x24)) -
               *(float *)(*(int *)(param_1 + 0x18) + iVar17)) * param_4 +
               *(float *)(*(int *)(param_1 + 0x18) + iVar17);
          *(float *)(param_3 + 4 + (uint)*puVar30 * 4) =
               (*(float *)(iVar17 + 4 + *(int *)(param_1 + 0x24)) -
               *(float *)(iVar17 + 4 + *(int *)(param_1 + 0x18))) * param_4 +
               *(float *)(iVar17 + 4 + *(int *)(param_1 + 0x18));
          iVar27 = iVar17 + 8;
          iVar25 = iVar17 + 8;
          iVar29 = iVar17 + 8;
          iVar17 = iVar17 + 0x10;
          *(float *)(param_3 + 8 + (uint)*puVar30 * 4) =
               (*(float *)(iVar27 + *(int *)(param_1 + 0x24)) -
               *(float *)(iVar25 + *(int *)(param_1 + 0x18))) * param_4 +
               *(float *)(iVar29 + *(int *)(param_1 + 0x18));
          param_2 = (ushort *)((int)param_2 + 1);
          puVar30 = puVar30 + 1;
        } while ((int)param_2 < (int)(uint)*(ushort *)(iVar10 + 0xe));
      }
    }
    else {
      local_18 = 0;
      if (iVar29 == iVar25) {
        iVar25 = iVar17 + (uVar21 + 2) * (uint)*(ushort *)(iVar10 + 0xe) * 3;
        if (*(short *)(iVar10 + 0xe) != 0) {
          iVar17 = 0;
          param_2 = (ushort *)(iVar25 + 2);
          param_3 = 0;
          do {
            iVar25 = *(int *)(param_1 + 0x2c) + param_3;
            bVar6 = *(byte *)((int)param_2 + -1);
            bVar8 = *(byte *)param_2;
            fVar2 = *(float *)(iVar25 + 0x28);
            fVar3 = *(float *)(iVar25 + 0x1c);
            fVar4 = *(float *)(iVar25 + 0x2c);
            fVar5 = *(float *)(iVar25 + 0x20);
            *(float *)(iVar17 + *(int *)(param_1 + 0x24)) =
                 (float)*(byte *)((int)param_2 + -2) * *(float *)(iVar25 + 0x24) +
                 *(float *)(iVar25 + 0x18) + *(float *)(iVar17 + *(int *)(param_1 + 0x18));
            *(float *)(*(int *)(param_1 + 0x24) + 4 + iVar17) =
                 (float)bVar6 * fVar2 + fVar3 + *(float *)(iVar17 + 4 + *(int *)(param_1 + 0x18));
            *(float *)(*(int *)(param_1 + 0x24) + 8 + iVar17) =
                 (float)bVar8 * fVar4 + fVar5 + *(float *)(iVar17 + 8 + *(int *)(param_1 + 0x18));
            *(float *)(iVar12 + (uint)*puVar30 * 4) =
                 (*(float *)(iVar17 + *(int *)(param_1 + 0x24)) -
                 *(float *)(*(int *)(param_1 + 0x18) + iVar17)) * param_4 +
                 *(float *)(*(int *)(param_1 + 0x18) + iVar17);
            *(float *)(iVar12 + 4 + (uint)*puVar30 * 4) =
                 (*(float *)(iVar17 + 4 + *(int *)(param_1 + 0x24)) -
                 *(float *)(iVar17 + 4 + *(int *)(param_1 + 0x18))) * param_4 +
                 *(float *)(iVar17 + 4 + *(int *)(param_1 + 0x18));
            param_3 = param_3 + 0x30;
            param_2 = (ushort *)((int)param_2 + 3);
            *(float *)(iVar12 + 8 + (uint)*puVar30 * 4) =
                 (*(float *)(iVar17 + 8 + *(int *)(param_1 + 0x24)) -
                 *(float *)(iVar17 + 8 + *(int *)(param_1 + 0x18))) * param_4 +
                 *(float *)(iVar17 + 8 + *(int *)(param_1 + 0x18));
            local_18 = local_18 + 1;
            iVar17 = iVar17 + 0x10;
            puVar30 = puVar30 + 1;
          } while (local_18 < (int)(uint)*(ushort *)(iVar10 + 0xe));
        }
      }
      else if (*(short *)(iVar10 + 0xe) != 0) {
        iVar25 = 0;
        param_2 = (ushort *)(iVar17 + 4);
        local_24 = 0;
        do {
          pfVar18 = (float *)(*(int *)(param_1 + 0x24) + iVar25);
          pfVar19 = (float *)(*(int *)(param_1 + 0x2c) + local_24);
          *pfVar18 = (float)param_2[-2] * pfVar19[3] + *pfVar19;
          pfVar18[1] = (float)param_2[-1] * pfVar19[4] + pfVar19[1];
          pfVar18[2] = (float)*param_2 * pfVar19[5] + pfVar19[2];
          *(float *)(param_3 + (uint)*puVar30 * 4) =
               (*(float *)(iVar25 + *(int *)(param_1 + 0x24)) -
               *(float *)(*(int *)(param_1 + 0x18) + iVar25)) * param_4 +
               *(float *)(*(int *)(param_1 + 0x18) + iVar25);
          *(float *)(param_3 + 4 + (uint)*puVar30 * 4) =
               (*(float *)(iVar25 + 4 + *(int *)(param_1 + 0x24)) -
               *(float *)(iVar25 + 4 + *(int *)(param_1 + 0x18))) * param_4 +
               *(float *)(iVar25 + 4 + *(int *)(param_1 + 0x18));
          iVar17 = iVar25 + 8;
          iVar29 = iVar25 + 8;
          iVar16 = iVar25 + 8;
          local_24 = local_24 + 0x30;
          iVar25 = iVar25 + 0x10;
          *(float *)(param_3 + 8 + (uint)*puVar30 * 4) =
               (*(float *)(iVar17 + *(int *)(param_1 + 0x24)) -
               *(float *)(iVar29 + *(int *)(param_1 + 0x18))) * param_4 +
               *(float *)(iVar16 + *(int *)(param_1 + 0x18));
          param_2 = param_2 + 3;
          iVar17 = local_18 + 1;
          puVar30 = puVar30 + 1;
          local_18 = iVar17;
        } while (iVar17 < (int)(uint)*(ushort *)(iVar10 + 0xe));
        *(int *)(param_1 + 0x1c) = iVar27;
        goto LAB_004a40fa;
      }
      *(int *)(param_1 + 0x1c) = iVar27;
    }
  }
  else {
    iVar17 = 0;
    param_3 = 0;
    if (*(short *)(iVar10 + 0xe) != 0) {
      param_2 = (ushort *)0x0;
      do {
        puVar24 = (undefined4 *)(*(int *)(param_1 + 0x18) + (int)param_2);
        puVar20 = (undefined4 *)(iVar12 + (uint)puVar30[param_3] * 4);
        *puVar20 = *puVar24;
        puVar20[1] = puVar24[1];
        puVar20[2] = puVar24[2];
        param_2 = (ushort *)((int)param_2 + 0x10);
        iVar17 = param_3 + 1;
        param_3 = iVar17;
      } while (iVar17 < (int)(uint)*(ushort *)(iVar10 + 0xe));
    }
  }
LAB_004a40fa:
  puVar20 = (undefined4 *)CONCAT31((int3)((uint)iVar17 >> 8),*(char *)(iVar10 + 0x11));
  if (*(char *)(iVar10 + 0x11) != '\0') {
    bVar6 = *(byte *)(iVar10 + 0x10);
    puVar30 = (ushort *)
              ((((1 << (bVar6 & 0x1f)) + 1) * (uint)*(ushort *)(iVar10 + 0xe) * 3 + 1 & 0xfffffffe)
               * (uint)(*(ushort *)(iVar10 + 0xc) >> (bVar6 & 0x1f)) + iVar10 + 0x14 +
              (uint)*(ushort *)(iVar10 + 0xe) * 0x24);
    uVar15 = 0x7fffffffU >> (0x1f - bVar6 & 0x1f) & (uint)*(ushort *)(iVar10 + 0xc);
    if (uVar15 != 0) {
      puVar30 = (ushort *)
                ((uVar15 + 1) * (uint)*(ushort *)(iVar10 + 0xe) * 3 + 1 + (int)puVar30 & 0xfffffffe)
      ;
    }
    if (*(short *)(iVar10 + 0xe) == 0) {
      puVar30 = (ushort *)((int)puVar30 + 1U & 0xfffffffe);
    }
    bVar6 = *(byte *)(iVar10 + 0x10);
    uVar15 = (((1 << (bVar6 & 0x1f)) + 1) * (uint)*(ushort *)(iVar10 + 0xe) * 3 + 1 & 0xfffffffe) *
             (uint)(*(ushort *)(iVar10 + 0xc) >> (bVar6 & 0x1f)) + iVar10 + 0x14 +
             (uint)*(ushort *)(iVar10 + 0xe) * 0x24;
    uVar31 = 0x7fffffffU >> (0x1f - bVar6 & 0x1f) & (uint)*(ushort *)(iVar10 + 0xc);
    if (uVar31 != 0) {
      uVar15 = (uVar31 + 1) * (uint)*(ushort *)(iVar10 + 0xe) * 3 + 1 + uVar15 & 0xfffffffe;
    }
    if (*(short *)(iVar10 + 0xe) == 0) {
      uVar15 = uVar15 + 1 & 0xfffffffe;
    }
    puVar20 = (undefined4 *)(uVar15 + 3 + (uint)*(byte *)(iVar10 + 0x11) * 2 & 0xfffffffc);
    iVar27 = 0;
    if (*(byte *)(iVar10 + 0x11) != 0) {
      do {
        uVar9 = *puVar30;
        *(undefined4 *)(iVar12 + (uint)uVar9 * 4) = *puVar20;
        puVar30 = puVar30 + 1;
        iVar25 = uVar9 + 1;
        *(undefined4 *)(iVar12 + iVar25 * 4) = puVar20[1];
        *(undefined4 *)(iVar12 + 4 + iVar25 * 4) = puVar20[2];
        puVar20 = puVar20 + 3;
        iVar27 = iVar27 + 1;
      } while (iVar27 < (int)(uint)*(byte *)(iVar10 + 0x11));
    }
  }
  return CONCAT31((int3)((uint)puVar20 >> 8),1);
}

