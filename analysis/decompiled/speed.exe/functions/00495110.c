/* speed.exe 00495110 FUN_00495110; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00495110(int param_1,float param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  float fVar3;
  bool bVar4;
  float fVar5;
  uint uVar6;
  undefined2 uVar9;
  uint3 uVar8;
  uint uVar7;
  uint uVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  uint uVar14;
  byte *pbVar15;
  byte *pbVar16;
  int iVar17;
  uint uVar18;
  undefined4 *puVar19;
  uint uVar20;
  ushort *puVar21;
  ushort uVar22;
  float local_80;
  byte *local_78;
  byte *local_74;
  byte *local_70;
  int local_6c;
  int local_64;
  byte local_50 [80];
  
  if (param_4 != *(int *)(param_1 + 0x28)) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
    *(int *)(param_1 + 0x28) = param_4;
  }
  iVar2 = *(int *)(param_1 + 0xc);
  uVar6 = FUN_007c4b80();
  puVar21 = *(ushort **)(iVar2 + 8);
  if (puVar21 == (ushort *)0x0) {
    if ((int)uVar6 < 0) {
      local_80 = 0.0;
    }
    else {
      local_80 = (float)uVar6;
      if ((int)(uint)*(ushort *)(iVar2 + 0xc) <= (int)uVar6) {
        local_80 = (float)(*(ushort *)(iVar2 + 0xc) - 1);
      }
    }
  }
  else if ((int)uVar6 < (int)(uint)*puVar21) {
    local_80 = 0.0;
  }
  else {
    if (*(int *)(param_1 + 0x10) < 1) {
      iVar17 = 0;
    }
    else {
      iVar17 = *(int *)(param_1 + 0x10) + -1;
    }
    puVar21 = puVar21 + iVar17;
    if ((int)uVar6 < (int)(uint)*puVar21) {
      for (; (0 < iVar17 && ((int)uVar6 < (int)(uint)*puVar21)); puVar21 = puVar21 + -1) {
        iVar17 = iVar17 + -1;
      }
    }
    else {
      while ((iVar17 < (int)(*(ushort *)(iVar2 + 0xc) - 2) &&
             (puVar21 = puVar21 + 1, (int)(uint)*puVar21 <= (int)uVar6))) {
        iVar17 = iVar17 + 1;
      }
    }
    local_80 = (float)(iVar17 + 1);
  }
  fVar5 = local_80;
  bVar1 = *(byte *)(iVar2 + 0x10);
  uVar18 = 0x7fffffff >> (0x1f - bVar1 & 0x1f);
  uVar14 = (int)local_80 >> (bVar1 & 0x1f);
  uVar10 = uVar18 & (uint)local_80;
  uVar7 = *(uint *)(param_1 + 0x10);
  uVar20 = (uint)*(ushort *)(iVar2 + 0xe);
  iVar17 = (((1 << (bVar1 & 0x1f)) + 1) * uVar20 + 1 & 0xfffffffe) * uVar14 + iVar2 + 0x14 +
           uVar20 * 0xc;
  iVar11 = 0;
  if (*(short *)(iVar2 + 0xe) != 0) {
    do {
      uVar22 = *(ushort *)(iVar2 + 0xe);
      local_50[iVar11] = (byte)(*(ushort *)(*(int *)(iVar2 + 4) + iVar11 * 2) / 0xc);
      iVar11 = iVar11 + 1;
    } while (iVar11 < (int)(uint)uVar22);
  }
  if (((int)local_80 < (int)uVar7) && (DAT_008ee4e4 == '\0')) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (local_80 == (float)*(uint *)(param_1 + 0x1c)) {
    uVar7 = *(uint *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x24);
    *(uint *)(param_1 + 0x24) = uVar7;
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  }
  else {
    if (((uVar7 == 0xffffffff) || (uVar14 != (int)uVar7 >> (bVar1 & 0x1f))) || (bVar4)) {
      iVar11 = 0;
      if (*(short *)(iVar2 + 0xe) != 0) {
        local_74 = (byte *)0x0;
        do {
          if ((*(uint *)(param_4 + ((int)(uint)local_50[iVar11] >> 5) * 4) &
              1 << (local_50[iVar11] & 0x1f)) != 0) {
            pfVar12 = (float *)(*(int *)(param_1 + 0x2c) + (int)local_74);
            *(float *)(*(int *)(param_1 + 0x18) + iVar11 * 4) =
                 (float)*(ushort *)(iVar17 + iVar11 * 2) * pfVar12[1] + *pfVar12;
          }
          local_74 = (byte *)((int)local_74 + 0x10);
          iVar11 = iVar11 + 1;
        } while (iVar11 < (int)(uint)*(ushort *)(iVar2 + 0xe));
      }
      uVar7 = 0;
    }
    else {
      uVar7 = uVar7 & uVar18;
    }
    if ((int)uVar7 < (int)uVar10) {
      pbVar15 = (byte *)((uVar7 + 2) * (uint)*(ushort *)(iVar2 + 0xe) + iVar17);
      local_70 = local_50 + -(int)pbVar15;
      local_6c = uVar10 - uVar7;
      do {
        iVar17 = 0;
        if (*(short *)(iVar2 + 0xe) != 0) {
          local_74 = (byte *)0x0;
          pbVar16 = pbVar15;
          do {
            if ((*(uint *)(param_4 + ((int)(uint)pbVar16[(int)local_70] >> 5) * 4) &
                1 << (pbVar16[(int)local_70] & 0x1f)) != 0) {
              iVar11 = *(int *)(param_1 + 0x2c) + (int)local_74;
              pfVar12 = (float *)(*(int *)(param_1 + 0x18) + iVar17 * 4);
              *pfVar12 = (float)*pbVar16 * *(float *)(iVar11 + 0xc) + *(float *)(iVar11 + 8) +
                         *pfVar12;
            }
            local_74 = (byte *)((int)local_74 + 0x10);
            iVar17 = iVar17 + 1;
            pbVar16 = pbVar16 + 1;
          } while (iVar17 < (int)(uint)*(ushort *)(iVar2 + 0xe));
        }
        pbVar15 = pbVar15 + uVar20;
        local_70 = local_70 + -uVar20;
        local_6c = local_6c + -1;
      } while (local_6c != 0);
      uVar7 = 0;
    }
    else if ((int)uVar10 < (int)uVar7) {
      pbVar15 = (byte *)((uVar7 + 1) * (uint)*(ushort *)(iVar2 + 0xe) + iVar17);
      uVar7 = uVar7 - 1;
      if ((int)uVar10 <= (int)uVar7) {
        local_74 = local_50 + -(int)pbVar15;
        local_6c = (uVar7 - uVar10) + 1;
        do {
          iVar17 = 0;
          if (*(short *)(iVar2 + 0xe) != 0) {
            local_70 = (byte *)0x0;
            pbVar16 = pbVar15;
            do {
              if ((*(uint *)(param_4 + ((int)(uint)pbVar16[(int)local_74] >> 5) * 4) &
                  1 << (pbVar16[(int)local_74] & 0x1f)) != 0) {
                iVar11 = *(int *)(param_1 + 0x2c) + (int)local_70;
                pfVar12 = (float *)(*(int *)(param_1 + 0x18) + iVar17 * 4);
                *pfVar12 = *pfVar12 -
                           ((float)*pbVar16 * *(float *)(iVar11 + 0xc) + *(float *)(iVar11 + 8));
              }
              local_70 = (byte *)((int)local_70 + 0x10);
              iVar17 = iVar17 + 1;
              pbVar16 = pbVar16 + 1;
            } while (iVar17 < (int)(uint)*(ushort *)(iVar2 + 0xe));
          }
          pbVar15 = pbVar15 + -uVar20;
          local_74 = local_74 + uVar20;
          local_6c = local_6c + -1;
          uVar7 = 0;
        } while (local_6c != 0);
      }
    }
  }
  *(float *)(param_1 + 0x10) = local_80;
  puVar21 = *(ushort **)(iVar2 + 8);
  iVar17 = (int)local_80 + 1;
  local_80 = 1.0;
  uVar9 = (undefined2)(uVar7 >> 0x10);
  if (puVar21 == (ushort *)0x0) {
    fVar3 = (float)(int)uVar6;
    uVar6 = CONCAT22(uVar9,(ushort)(param_2 < fVar3) << 8 |
                           (ushort)(NAN(param_2) || NAN(fVar3)) << 10 |
                           (ushort)(param_2 == fVar3) << 0xe);
    if (param_2 != fVar3) {
      uVar8 = (uint3)(uVar6 >> 8);
      local_80 = param_2 - fVar3;
LAB_0049557b:
      uVar6 = CONCAT31(uVar8,1);
    }
  }
  else if (fVar5 == 0.0) {
    uVar8 = (uint3)(CONCAT22(uVar9,(ushort)(param_2 < _DAT_00890968) << 8 |
                                   (ushort)(NAN(param_2) || NAN(_DAT_00890968)) << 10 |
                                   (ushort)(param_2 == _DAT_00890968) << 0xe) >> 8);
    if (param_2 == _DAT_00890968) {
      uVar6 = (uint)uVar8 << 8;
    }
    else {
      uVar6 = CONCAT31(uVar8,1);
      local_80 = param_2 / (float)*puVar21;
    }
  }
  else {
    fVar3 = (float)puVar21[(int)fVar5 - 1];
    uVar22 = (ushort)(param_2 < fVar3) << 8 | (ushort)(NAN(param_2) || NAN(fVar3)) << 10 |
             (ushort)(param_2 == fVar3) << 0xe;
    uVar6 = (uint)uVar22;
    if (param_2 != fVar3) {
      uVar8 = (uint3)(byte)(uVar22 >> 8);
      local_80 = (param_2 - fVar3) / ((float)puVar21[(int)fVar5] - fVar3);
      goto LAB_0049557b;
    }
  }
  puVar21 = *(ushort **)(iVar2 + 4);
  if (((char)uVar6 == '\0') || (uVar6 = *(ushort *)(iVar2 + 0xc) - 1, (int)uVar6 <= (int)fVar5)) {
    iVar17 = 0;
    if (*(short *)(iVar2 + 0xe) != 0) {
      do {
        uVar6 = (int)(uint)local_50[iVar17] >> 5;
        if ((*(uint *)(param_4 + uVar6 * 4) & 1 << (local_50[iVar17] & 0x1f)) != 0) {
          uVar6 = *(uint *)(*(int *)(param_1 + 0x18) + iVar17 * 4);
          *(uint *)(param_3 + (uint)puVar21[iVar17] * 4) = uVar6;
        }
        iVar17 = iVar17 + 1;
      } while (iVar17 < (int)(uint)*(ushort *)(iVar2 + 0xe));
    }
  }
  else {
    uVar6 = iVar17 >> (bVar1 & 0x1f);
    iVar11 = (((1 << (*(byte *)(iVar2 + 0x10) & 0x1f)) + 1) * (uint)*(ushort *)(iVar2 + 0xe) + 1 &
             0xfffffffe) * uVar6 + iVar2 + 0x14 + (uint)*(ushort *)(iVar2 + 0xe) * 0xc;
    if (iVar17 == *(int *)(param_1 + 0x1c)) {
      iVar17 = 0;
      if (*(short *)(iVar2 + 0xe) != 0) {
        do {
          if ((*(uint *)(param_4 + ((int)(uint)local_50[iVar17] >> 5) * 4) &
              1 << (local_50[iVar17] & 0x1f)) != 0) {
            *(float *)(param_3 + (uint)*puVar21 * 4) =
                 (*(float *)(*(int *)(param_1 + 0x24) + iVar17 * 4) -
                 *(float *)(*(int *)(param_1 + 0x18) + iVar17 * 4)) * local_80 +
                 *(float *)(*(int *)(param_1 + 0x18) + iVar17 * 4);
          }
          uVar6 = (uint)*(ushort *)(iVar2 + 0xe);
          puVar21 = puVar21 + 1;
          iVar17 = iVar17 + 1;
        } while (iVar17 < (int)uVar6);
      }
    }
    else {
      if (uVar6 == uVar14) {
        uVar6 = 0;
        local_78 = (byte *)((uVar10 + 2) * (uint)*(ushort *)(iVar2 + 0xe) + iVar11);
        if (*(short *)(iVar2 + 0xe) != 0) {
          iVar11 = -(int)local_78;
          local_70 = (byte *)0x0;
          do {
            if ((*(uint *)(param_4 + ((int)(uint)local_78[(int)(local_50 + iVar11)] >> 5) * 4) &
                1 << (local_78[(int)(local_50 + iVar11)] & 0x1f)) != 0) {
              iVar13 = *(int *)(param_1 + 0x2c) + (int)local_70;
              *(float *)(*(int *)(param_1 + 0x24) + uVar6 * 4) =
                   (float)*local_78 * *(float *)(iVar13 + 0xc) + *(float *)(iVar13 + 8) +
                   *(float *)(*(int *)(param_1 + 0x18) + uVar6 * 4);
              *(float *)(param_3 + (uint)*puVar21 * 4) =
                   (*(float *)(*(int *)(param_1 + 0x24) + uVar6 * 4) -
                   *(float *)(*(int *)(param_1 + 0x18) + uVar6 * 4)) * local_80 +
                   *(float *)(*(int *)(param_1 + 0x18) + uVar6 * 4);
            }
            local_70 = (byte *)((int)local_70 + 0x10);
            puVar21 = puVar21 + 1;
            uVar6 = uVar6 + 1;
            local_78 = local_78 + 1;
          } while ((int)uVar6 < (int)(uint)*(ushort *)(iVar2 + 0xe));
        }
      }
      else {
        uVar6 = 0;
        if (*(short *)(iVar2 + 0xe) != 0) {
          local_70 = (byte *)0x0;
          do {
            if ((*(uint *)(param_4 + ((int)(uint)local_50[uVar6] >> 5) * 4) &
                1 << (local_50[uVar6] & 0x1f)) != 0) {
              pfVar12 = (float *)(*(int *)(param_1 + 0x2c) + (int)local_70);
              *(float *)(*(int *)(param_1 + 0x24) + uVar6 * 4) =
                   (float)*(ushort *)(iVar11 + uVar6 * 2) * pfVar12[1] + *pfVar12;
              pfVar12 = (float *)(*(int *)(param_1 + 0x18) + uVar6 * 4);
              *(float *)(param_3 + (uint)*puVar21 * 4) =
                   (*(float *)(*(int *)(param_1 + 0x24) + uVar6 * 4) - *pfVar12) * local_80 +
                   *pfVar12;
            }
            puVar21 = puVar21 + 1;
            uVar6 = uVar6 + 1;
            local_70 = (byte *)((int)local_70 + 0x10);
          } while ((int)uVar6 < (int)(uint)*(ushort *)(iVar2 + 0xe));
          *(int *)(param_1 + 0x1c) = iVar17;
          goto LAB_004957f0;
        }
      }
      *(int *)(param_1 + 0x1c) = iVar17;
    }
  }
LAB_004957f0:
  iVar17 = CONCAT31((int3)(uVar6 >> 8),*(char *)(iVar2 + 0x11));
  if (*(char *)(iVar2 + 0x11) != '\0') {
    bVar1 = *(byte *)(iVar2 + 0x10);
    puVar21 = (ushort *)
              ((((1 << (bVar1 & 0x1f)) + 1) * (uint)*(ushort *)(iVar2 + 0xe) + 1 & 0xfffffffe) *
               (uint)(*(ushort *)(iVar2 + 0xc) >> (bVar1 & 0x1f)) + iVar2 + 0x14 +
              (uint)*(ushort *)(iVar2 + 0xe) * 0xc);
    uVar6 = 0x7fffffffU >> (0x1f - bVar1 & 0x1f) & (uint)*(ushort *)(iVar2 + 0xc);
    if (uVar6 != 0) {
      puVar21 = (ushort *)
                ((uVar6 + 1) * (uint)*(ushort *)(iVar2 + 0xe) + 1 + (int)puVar21 & 0xfffffffe);
    }
    if (*(short *)(iVar2 + 0xe) == 0) {
      puVar21 = (ushort *)((int)puVar21 + 1U & 0xfffffffe);
    }
    bVar1 = *(byte *)(iVar2 + 0x10);
    uVar7 = 0x7fffffffU >> (0x1f - bVar1 & 0x1f) & (uint)*(ushort *)(iVar2 + 0xc);
    uVar6 = (((1 << (bVar1 & 0x1f)) + 1) * (uint)*(ushort *)(iVar2 + 0xe) + 1 & 0xfffffffe) *
            (uint)(*(ushort *)(iVar2 + 0xc) >> (bVar1 & 0x1f)) + iVar2 + 0x14 +
            (uint)*(ushort *)(iVar2 + 0xe) * 0xc;
    if (uVar7 != 0) {
      uVar6 = (uVar7 + 1) * (uint)*(ushort *)(iVar2 + 0xe) + 1 + uVar6 & 0xfffffffe;
    }
    if (*(short *)(iVar2 + 0xe) == 0) {
      uVar6 = uVar6 + 1 & 0xfffffffe;
    }
    puVar19 = (undefined4 *)(uVar6 + 3 + (uint)*(byte *)(iVar2 + 0x11) * 2 & 0xfffffffc);
    local_64 = 0;
    iVar17 = 0;
    if (*(byte *)(iVar2 + 0x11) != 0) {
      do {
        uVar22 = *puVar21;
        uVar6 = uVar22 / 0xc;
        puVar21 = puVar21 + 1;
        if ((*(uint *)(param_4 + ((int)uVar6 >> 5) * 4) & 1 << ((byte)uVar6 & 0x1f)) != 0) {
          *(undefined4 *)(param_3 + (uint)uVar22 * 4) = *puVar19;
        }
        puVar19 = puVar19 + 1;
        iVar17 = local_64 + 1;
        local_64 = iVar17;
      } while (iVar17 < (int)(uint)*(byte *)(iVar2 + 0x11));
    }
  }
  return CONCAT31((int3)((uint)iVar17 >> 8),1);
}

