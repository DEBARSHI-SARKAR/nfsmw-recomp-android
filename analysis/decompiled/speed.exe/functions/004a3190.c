/* speed.exe 004a3190 FUN_004a3190; analysis pseudocode, not buildable source.
 * calls 00495980 FUN_00495980
 * calls 007c4b80 FUN_007c4b80
 * calls 00495110 FUN_00495110
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004a3190(int param_1,float param_2,int param_3,float param_4)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  float fVar7;
  bool bVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  float *pfVar19;
  int iVar20;
  uint uVar21;
  ushort *puVar22;
  int iVar23;
  int local_1c;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    FUN_00495980();
  }
  if (param_4 != 0.0) {
    uVar9 = FUN_00495110(param_2,param_3,param_4);
    return uVar9;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  iVar6 = *(int *)(param_1 + 0xc);
  uVar10 = FUN_007c4b80();
  puVar22 = *(ushort **)(iVar6 + 8);
  if (puVar22 == (ushort *)0x0) {
    if ((int)uVar10 < 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = uVar10;
      if ((int)(uint)*(ushort *)(iVar6 + 0xc) <= (int)uVar10) {
        uVar14 = *(ushort *)(iVar6 + 0xc) - 1;
      }
    }
  }
  else if ((int)uVar10 < (int)(uint)*puVar22) {
    uVar14 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x10) < 1) {
      iVar20 = 0;
    }
    else {
      iVar20 = *(int *)(param_1 + 0x10) + -1;
    }
    puVar22 = puVar22 + iVar20;
    if ((int)uVar10 < (int)(uint)*puVar22) {
      for (; (0 < iVar20 && ((int)uVar10 < (int)(uint)*puVar22)); puVar22 = puVar22 + -1) {
        iVar20 = iVar20 + -1;
      }
    }
    else {
      while ((iVar20 < (int)(*(ushort *)(iVar6 + 0xc) - 2) &&
             (puVar22 = puVar22 + 1, (int)(uint)*puVar22 <= (int)uVar10))) {
        iVar20 = iVar20 + 1;
      }
    }
    uVar14 = iVar20 + 1;
  }
  bVar4 = *(byte *)(iVar6 + 0x10);
  uVar11 = 0x7fffffff >> (0x1f - bVar4 & 0x1f);
  iVar23 = (int)uVar14 >> (bVar4 & 0x1f);
  uVar16 = uVar11 & uVar14;
  uVar21 = *(uint *)(param_1 + 0x10);
  uVar17 = (uint)*(ushort *)(iVar6 + 0xe);
  iVar20 = (((1 << (bVar4 & 0x1f)) + 1) * uVar17 + 1 & 0xfffffffe) * iVar23 + iVar6 + 0x14 +
           uVar17 * 0xc;
  if (((int)uVar21 <= (int)uVar14) || (bVar8 = true, DAT_008ee4e4 != '\0')) {
    bVar8 = false;
  }
  if (uVar14 == *(uint *)(param_1 + 0x1c)) {
    uVar9 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x24) = uVar9;
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  }
  else {
    if ((((uVar21 == 0xffffffff) || (iVar23 != (int)uVar21 >> (bVar4 & 0x1f))) || (uVar16 == 0)) ||
       (bVar8)) {
      iVar18 = 0;
      if (*(short *)(iVar6 + 0xe) != 0) {
        iVar13 = 0;
        do {
          iVar12 = iVar18 * 2;
          pfVar19 = (float *)(*(int *)(param_1 + 0x2c) + iVar13);
          iVar18 = iVar18 + 1;
          iVar13 = iVar13 + 0x10;
          *(float *)(*(int *)(param_1 + 0x18) + -4 + iVar18 * 4) =
               (float)*(ushort *)(iVar20 + iVar12) * pfVar19[1] + *pfVar19;
        } while (iVar18 < (int)(uint)*(ushort *)(iVar6 + 0xe));
      }
      uVar21 = 0;
    }
    else {
      uVar21 = uVar21 & uVar11;
    }
    if ((int)uVar21 < (int)uVar16) {
      uVar11 = (uint)*(ushort *)(iVar6 + 0xe);
      iVar20 = (uVar21 + 2) * (uint)*(ushort *)(iVar6 + 0xe) + iVar20;
      local_1c = uVar16 - uVar21;
      do {
        iVar18 = 0;
        if (uVar11 != 0) {
          iVar13 = 0;
          do {
            pbVar2 = (byte *)(iVar18 + iVar20);
            iVar12 = *(int *)(param_1 + 0x2c) + iVar13;
            pfVar19 = (float *)(*(int *)(param_1 + 0x18) + iVar18 * 4);
            iVar18 = iVar18 + 1;
            iVar13 = iVar13 + 0x10;
            *pfVar19 = (float)*pbVar2 * *(float *)(iVar12 + 0xc) + *(float *)(iVar12 + 8) + *pfVar19
            ;
            uVar11 = (uint)*(ushort *)(iVar6 + 0xe);
          } while (iVar18 < (int)uVar11);
        }
        iVar20 = iVar20 + uVar17;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
    }
    else if ((int)uVar16 < (int)uVar21) {
      iVar20 = (uVar21 + 1) * (uint)*(ushort *)(iVar6 + 0xe) + iVar20;
      if ((int)uVar16 <= (int)(uVar21 - 1)) {
        uVar11 = (uint)*(ushort *)(iVar6 + 0xe);
        local_1c = ((uVar21 - 1) - uVar16) + 1;
        do {
          iVar18 = 0;
          if (uVar11 != 0) {
            iVar13 = 0;
            do {
              pbVar2 = (byte *)(iVar18 + iVar20);
              iVar12 = *(int *)(param_1 + 0x2c) + iVar13;
              pfVar19 = (float *)(*(int *)(param_1 + 0x18) + iVar18 * 4);
              iVar18 = iVar18 + 1;
              iVar13 = iVar13 + 0x10;
              *pfVar19 = *pfVar19 -
                         ((float)*pbVar2 * *(float *)(iVar12 + 0xc) + *(float *)(iVar12 + 8));
              uVar11 = (uint)*(ushort *)(iVar6 + 0xe);
            } while (iVar18 < (int)uVar11);
          }
          iVar20 = iVar20 - uVar17;
          local_1c = local_1c + -1;
        } while (local_1c != 0);
      }
    }
  }
  *(uint *)(param_1 + 0x10) = uVar14;
  puVar22 = *(ushort **)(iVar6 + 8);
  iVar20 = uVar14 + 1;
  param_4 = 1.0;
  if (puVar22 == (ushort *)0x0) {
    if (param_2 == (float)(int)uVar10) {
LAB_004a35ad:
      bVar8 = false;
    }
    else {
      param_4 = param_2 - (float)(int)uVar10;
LAB_004a350e:
      bVar8 = true;
    }
  }
  else {
    if (uVar14 != 0) {
      fVar7 = (float)puVar22[uVar14 - 1];
      if (param_2 == fVar7) goto LAB_004a35ad;
      param_4 = (param_2 - fVar7) / ((float)puVar22[uVar14] - fVar7);
      goto LAB_004a350e;
    }
    if (param_2 == _DAT_00890968) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
      param_4 = param_2 / (float)*puVar22;
    }
  }
  puVar22 = *(ushort **)(iVar6 + 4);
  if ((bVar8) && ((int)uVar14 < (int)(*(ushort *)(iVar6 + 0xc) - 1))) {
    iVar13 = iVar20 >> (bVar4 & 0x1f);
    iVar18 = (((1 << (*(byte *)(iVar6 + 0x10) & 0x1f)) + 1) * (uint)*(ushort *)(iVar6 + 0xe) + 1 &
             0xfffffffe) * iVar13 + iVar6 + 0x14 + (uint)*(ushort *)(iVar6 + 0xe) * 0xc;
    if (iVar20 == *(int *)(param_1 + 0x1c)) {
      iVar23 = 0;
      if (*(short *)(iVar6 + 0xe) != 0) {
        do {
          iVar20 = iVar23 * 4;
          pfVar19 = (float *)(*(int *)(param_1 + 0x18) + iVar23 * 4);
          iVar23 = iVar23 + 1;
          *(float *)(param_3 + (uint)*puVar22 * 4) =
               (*(float *)(*(int *)(param_1 + 0x24) + iVar20) - *pfVar19) * param_4 + *pfVar19;
          puVar22 = puVar22 + 1;
        } while (iVar23 < (int)(uint)*(ushort *)(iVar6 + 0xe));
      }
    }
    else {
      if (iVar13 == iVar23) {
        uVar5 = *(ushort *)(iVar6 + 0xe);
        iVar23 = 0;
        if (*(short *)(iVar6 + 0xe) != 0) {
          param_2 = 0.0;
          do {
            iVar13 = *(int *)(param_1 + 0x2c) + (int)param_2;
            *(float *)(*(int *)(param_1 + 0x24) + iVar23 * 4) =
                 (float)*(byte *)(iVar23 + (uVar16 + 2) * (uint)uVar5 + iVar18) *
                 *(float *)(iVar13 + 0xc) + *(float *)(iVar13 + 8) +
                 *(float *)(*(int *)(param_1 + 0x18) + iVar23 * 4);
            iVar1 = iVar23 * 4;
            iVar13 = iVar23 * 4;
            iVar12 = iVar23 * 4;
            iVar23 = iVar23 + 1;
            *(float *)(param_3 + (uint)*puVar22 * 4) =
                 (*(float *)(*(int *)(param_1 + 0x24) + iVar1) -
                 *(float *)(*(int *)(param_1 + 0x18) + iVar13)) * param_4 +
                 *(float *)(*(int *)(param_1 + 0x18) + iVar12);
            param_2 = (float)((int)param_2 + 0x10);
            puVar22 = puVar22 + 1;
          } while (iVar23 < (int)(uint)*(ushort *)(iVar6 + 0xe));
        }
      }
      else {
        iVar23 = 0;
        if (*(short *)(iVar6 + 0xe) != 0) {
          iVar13 = 0;
          do {
            pfVar19 = (float *)(*(int *)(param_1 + 0x2c) + iVar13);
            iVar13 = iVar13 + 0x10;
            *(float *)(*(int *)(param_1 + 0x24) + iVar23 * 4) =
                 (float)*(ushort *)(iVar18 + iVar23 * 2) * pfVar19[1] + *pfVar19;
            iVar3 = iVar23 * 4;
            iVar12 = iVar23 * 4;
            iVar1 = iVar23 * 4;
            iVar23 = iVar23 + 1;
            *(float *)(param_3 + (uint)*puVar22 * 4) =
                 (*(float *)(*(int *)(param_1 + 0x24) + iVar3) -
                 *(float *)(*(int *)(param_1 + 0x18) + iVar12)) * param_4 +
                 *(float *)(*(int *)(param_1 + 0x18) + iVar1);
            puVar22 = puVar22 + 1;
          } while (iVar23 < (int)(uint)*(ushort *)(iVar6 + 0xe));
          *(int *)(param_1 + 0x1c) = iVar20;
          goto LAB_004a36d6;
        }
      }
      *(int *)(param_1 + 0x1c) = iVar20;
    }
  }
  else {
    iVar23 = 0;
    if (*(short *)(iVar6 + 0xe) != 0) {
      do {
        *(undefined4 *)(param_3 + (uint)puVar22[iVar23] * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar23 * 4);
        iVar23 = iVar23 + 1;
      } while (iVar23 < (int)(uint)*(ushort *)(iVar6 + 0xe));
    }
  }
LAB_004a36d6:
  puVar15 = (undefined4 *)CONCAT31((int3)((uint)iVar23 >> 8),*(char *)(iVar6 + 0x11));
  if (*(char *)(iVar6 + 0x11) != '\0') {
    bVar4 = *(byte *)(iVar6 + 0x10);
    puVar22 = (ushort *)
              ((((1 << (bVar4 & 0x1f)) + 1) * (uint)*(ushort *)(iVar6 + 0xe) + 1 & 0xfffffffe) *
               (uint)(*(ushort *)(iVar6 + 0xc) >> (bVar4 & 0x1f)) + iVar6 + 0x14 +
              (uint)*(ushort *)(iVar6 + 0xe) * 0xc);
    uVar10 = 0x7fffffffU >> (0x1f - bVar4 & 0x1f) & (uint)*(ushort *)(iVar6 + 0xc);
    if (uVar10 != 0) {
      puVar22 = (ushort *)
                ((uVar10 + 1) * (uint)*(ushort *)(iVar6 + 0xe) + 1 + (int)puVar22 & 0xfffffffe);
    }
    if (*(short *)(iVar6 + 0xe) == 0) {
      puVar22 = (ushort *)((int)puVar22 + 1U & 0xfffffffe);
    }
    bVar4 = *(byte *)(iVar6 + 0x10);
    uVar10 = (((1 << (bVar4 & 0x1f)) + 1) * (uint)*(ushort *)(iVar6 + 0xe) + 1 & 0xfffffffe) *
             (uint)(*(ushort *)(iVar6 + 0xc) >> (bVar4 & 0x1f)) + iVar6 + 0x14 +
             (uint)*(ushort *)(iVar6 + 0xe) * 0xc;
    uVar14 = 0x7fffffffU >> (0x1f - bVar4 & 0x1f) & (uint)*(ushort *)(iVar6 + 0xc);
    if (uVar14 != 0) {
      uVar10 = (uVar14 + 1) * (uint)*(ushort *)(iVar6 + 0xe) + 1 + uVar10 & 0xfffffffe;
    }
    if (*(short *)(iVar6 + 0xe) == 0) {
      uVar10 = uVar10 + 1 & 0xfffffffe;
    }
    puVar15 = (undefined4 *)(uVar10 + 3 + (uint)*(byte *)(iVar6 + 0x11) * 2 & 0xfffffffc);
    iVar20 = 0;
    if (*(byte *)(iVar6 + 0x11) != 0) {
      do {
        *(undefined4 *)(param_3 + (uint)*puVar22 * 4) = *puVar15;
        puVar22 = puVar22 + 1;
        puVar15 = puVar15 + 1;
        iVar20 = iVar20 + 1;
      } while (iVar20 < (int)(uint)*(byte *)(iVar6 + 0x11));
    }
  }
  return CONCAT31((int3)((uint)puVar15 >> 8),1);
}

