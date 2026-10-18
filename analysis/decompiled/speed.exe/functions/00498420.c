/* speed.exe 00498420 FUN_00498420; analysis pseudocode, not buildable source.
 * calls 00497860 FUN_00497860
 * calls 00494bc0 FUN_00494bc0
 * calls 007c4b80 FUN_007c4b80
 * calls 00494c70 FUN_00494c70
 * calls 00494d10 FUN_00494d10
 * calls 00497a90 FUN_00497a90
 * calls 00496c10 FUN_00496c10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00498420(int param_1,float param_2,int param_3,int param_4)

{
  float fVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  undefined2 uVar12;
  int iVar10;
  float *pfVar11;
  int iVar13;
  uint uVar14;
  float *pfVar15;
  float *pfVar16;
  int iVar17;
  uint uVar18;
  ushort *puVar19;
  int iVar20;
  int iVar21;
  float local_70;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  float local_48 [2];
  float local_40;
  float local_3c;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined1 local_1c [28];
  
  FUN_00497860();
  iVar4 = *(int *)(param_1 + 0xc);
  uVar8 = FUN_007c4b80();
  puVar19 = *(ushort **)(iVar4 + 8);
  if (puVar19 == (ushort *)0x0) {
    if ((int)uVar8 < 0) {
      local_70 = 0.0;
    }
    else {
      local_70 = (float)uVar8;
      if ((int)(uint)*(ushort *)(iVar4 + 4) <= (int)uVar8) {
        local_70 = (float)(*(ushort *)(iVar4 + 4) - 1);
      }
    }
  }
  else if ((int)uVar8 < (int)(uint)*puVar19) {
    local_70 = 0.0;
  }
  else {
    if (*(int *)(param_1 + 0x1c) < 1) {
      iVar13 = 0;
    }
    else {
      iVar13 = *(int *)(param_1 + 0x1c) + -1;
    }
    puVar19 = puVar19 + iVar13;
    if ((int)uVar8 < (int)(uint)*puVar19) {
      for (; (0 < iVar13 && ((int)uVar8 < (int)(uint)*puVar19)); puVar19 = puVar19 + -1) {
        iVar13 = iVar13 + -1;
      }
    }
    else {
      while ((iVar13 < (int)(*(ushort *)(iVar4 + 4) - 2) &&
             (puVar19 = puVar19 + 1, (int)(uint)*puVar19 <= (int)uVar8))) {
        iVar13 = iVar13 + 1;
      }
    }
    local_70 = (float)(iVar13 + 1);
  }
  fVar1 = local_70;
  bVar2 = *(byte *)(iVar4 + 7);
  uVar9 = 0x7fffffff >> (0x1f - bVar2 & 0x1f);
  iVar17 = (int)local_70 >> (bVar2 & 0x1f);
  uVar14 = uVar9 & (uint)local_70;
  iVar13 = *(int *)(iVar4 + 0xc);
  uVar18 = *(uint *)(param_1 + 0x1c);
  if (((uVar18 == 0xffffffff) || (iVar17 != (int)uVar18 >> (bVar2 & 0x1f))) ||
     ((int)local_70 < (int)uVar18)) {
    uVar9 = CONCAT31((int3)(uVar9 >> 8),*(char *)(iVar4 + 6));
    iVar10 = 0;
    if (*(char *)(iVar4 + 6) != '\0') {
      local_5c = 0;
      local_60 = 0;
      do {
        if ((*(uint *)(param_3 + ((int)(uint)*(byte *)(iVar10 + iVar13) >> 5) * 4) &
            1 << (*(byte *)(iVar10 + iVar13) & 0x1f)) != 0) {
          FUN_00494c70(*(undefined2 *)(*(int *)(param_1 + 0x10) + 0xc + local_5c),
                       *(int *)(param_1 + 0x24) + local_60);
        }
        local_5c = local_5c + 0xe;
        uVar9 = (uint)*(byte *)(iVar4 + 6);
        iVar10 = iVar10 + 1;
        local_60 = local_60 + 0x10;
      } while (iVar10 < (int)uVar9);
    }
    uVar18 = 0;
  }
  else {
    uVar18 = uVar18 & uVar9;
  }
  uVar12 = (undefined2)(uVar9 >> 0x10);
  if ((int)uVar18 < (int)uVar14) {
    iVar10 = 0;
    local_5c = uVar14 - uVar18;
    do {
      iVar20 = 0;
      iVar10 = CONCAT31((int3)((uint)iVar10 >> 8),*(char *)(iVar4 + 6));
      if (*(char *)(iVar4 + 6) != '\0') {
        iVar21 = 0;
        do {
          if ((*(uint *)(param_3 + ((int)(uint)*(byte *)(iVar13 + iVar20) >> 5) * 4) &
              1 << (*(byte *)(iVar13 + iVar20) & 0x1f)) != 0) {
            FUN_00494bc0(local_48);
            FUN_00494d10(local_48,&local_2c);
            *(float *)(iVar21 + *(int *)(param_1 + 0x24)) =
                 local_2c + *(float *)(iVar21 + *(int *)(param_1 + 0x24));
            pfVar15 = (float *)(iVar21 + 4 + *(int *)(param_1 + 0x24));
            *pfVar15 = local_28 + *pfVar15;
            pfVar15 = (float *)(iVar21 + 8 + *(int *)(param_1 + 0x24));
            *pfVar15 = local_24 + *pfVar15;
            pfVar15 = (float *)(iVar21 + 0xc + *(int *)(param_1 + 0x24));
            *pfVar15 = local_20 + *pfVar15;
          }
          iVar20 = iVar20 + 1;
          iVar21 = iVar21 + 0x10;
          iVar10 = iVar4;
        } while (iVar20 < (int)(uint)*(byte *)(iVar4 + 6));
      }
      uVar12 = (undefined2)((uint)iVar10 >> 0x10);
      local_5c = local_5c + -1;
    } while (local_5c != 0);
  }
  *(float *)(param_1 + 0x1c) = local_70;
  puVar19 = *(ushort **)(iVar4 + 8);
  iVar10 = (int)local_70 + 1;
  if (puVar19 == (ushort *)0x0) {
    local_70 = (float)(int)uVar8;
    uVar8 = CONCAT22(uVar12,(ushort)(param_2 < local_70) << 8 |
                            (ushort)(NAN(param_2) || NAN(local_70)) << 10 |
                            (ushort)(param_2 == local_70) << 0xe);
    if (param_2 != local_70) {
      local_70 = param_2 - local_70;
      goto LAB_0049874e;
    }
  }
  else if (local_70 == 0.0) {
    uVar8 = CONCAT22(uVar12,(ushort)(param_2 < _DAT_00890968) << 8 |
                            (ushort)(NAN(param_2) || NAN(_DAT_00890968)) << 10 |
                            (ushort)(param_2 == _DAT_00890968) << 0xe);
    if (param_2 != _DAT_00890968) {
      local_70 = param_2 / (float)*puVar19;
LAB_0049874e:
      uVar8 = *(ushort *)(iVar4 + 4) - 1;
      if ((int)fVar1 < (int)uVar8) {
        iVar10 = iVar10 >> (bVar2 & 0x1f);
        local_5c = *(int *)(param_1 + 0x18) * iVar10 + *(int *)(param_1 + 0x14);
        if (iVar10 == iVar17) {
          local_5c = 0;
          local_54 = 0;
          if (*(char *)(iVar4 + 6) != '\0') {
            iVar17 = 0;
            local_5c = 0;
            do {
              uVar8 = (uint)*(byte *)(local_54 + iVar13);
              if ((*(uint *)(param_3 + ((int)uVar8 >> 5) * 4) &
                  1 << (*(byte *)(local_54 + iVar13) & 0x1f)) != 0) {
                iVar20 = *(int *)(param_1 + 0x10);
                FUN_00494bc0(local_1c);
                FUN_00494d10(local_1c,&local_2c);
                local_2c = local_2c + *(float *)(*(int *)(param_1 + 0x24) + iVar17);
                iVar10 = *(int *)(param_1 + 0x24) + iVar17;
                local_28 = local_28 + *(float *)(iVar10 + 4);
                local_24 = local_24 + *(float *)(iVar10 + 8);
                local_20 = local_20 + *(float *)(iVar10 + 0xc);
                FUN_00496c10(local_70);
                sVar3 = *(short *)(iVar20 + local_5c + 0xc);
                if (sVar3 == 0) {
                  iVar10 = *(int *)(param_1 + 0x2c);
                  pfVar11 = (float *)(iVar10 + iVar17);
                  pfVar15 = (float *)(uVar8 * 0x30 + 0x10 + param_4);
                  *pfVar15 = local_48[0] * *(float *)(iVar10 + 0xc + iVar17) +
                             local_3c * *(float *)(iVar10 + iVar17);
                  pfVar15[1] = local_48[0] * pfVar11[2] + local_3c * pfVar11[1];
                  pfVar15[2] = local_3c * pfVar11[2] - local_48[0] * pfVar11[1];
                  fVar1 = pfVar11[3];
                  fVar5 = local_48[0] * *pfVar11;
                }
                else {
                  if (sVar3 == 1) {
                    FUN_00497a90();
                    goto LAB_00498af0;
                  }
                  pfVar15 = (float *)(uVar8 * 0x30 + 0x10 + param_4);
                  pfVar11 = (float *)(*(int *)(param_1 + 0x28) + iVar17);
                  *pfVar15 = local_3c * *(float *)(*(int *)(param_1 + 0x28) + iVar17) -
                             local_40 * pfVar11[1];
                  pfVar15[1] = local_3c * pfVar11[1] + local_40 * *pfVar11;
                  pfVar15[2] = local_3c * pfVar11[2] + local_40 * pfVar11[3];
                  fVar1 = pfVar11[3];
                  fVar5 = local_40 * pfVar11[2];
                }
                pfVar15[3] = local_3c * fVar1 - fVar5;
              }
LAB_00498af0:
              local_54 = local_54 + 1;
              local_5c = local_5c + 0xe;
              iVar17 = iVar17 + 0x10;
              if ((int)(uint)*(byte *)(iVar4 + 6) <= local_54) {
                return CONCAT31((int3)((uint)local_54 >> 8),1);
              }
            } while( true );
          }
        }
        else {
          local_54 = 0;
          if (*(char *)(iVar4 + 6) != '\0') {
            iVar17 = 0;
            local_58 = 0;
            do {
              uVar8 = (uint)*(byte *)(local_54 + iVar13);
              if ((*(uint *)(param_3 + ((int)uVar8 >> 5) * 4) &
                  1 << (*(byte *)(local_54 + iVar13) & 0x1f)) != 0) {
                sVar3 = *(short *)(*(int *)(param_1 + 0x10) + 0xc + local_58);
                FUN_00494c70(sVar3,&local_2c);
                FUN_00496c10(local_70);
                if (sVar3 == 0) {
                  pfVar15 = (float *)(uVar8 * 0x30 + 0x10 + param_4);
                  pfVar11 = (float *)(*(int *)(param_1 + 0x2c) + iVar17);
                  *pfVar15 = local_3c * *pfVar11 +
                             local_48[0] * *(float *)(*(int *)(param_1 + 0x2c) + 0xc + iVar17);
                  pfVar15[1] = local_48[0] * pfVar11[2] + local_3c * pfVar11[1];
                  pfVar15[2] = local_3c * pfVar11[2] - local_48[0] * pfVar11[1];
                  fVar1 = pfVar11[3];
                  fVar5 = local_48[0] * *pfVar11;
                }
                else {
                  if (sVar3 == 1) {
                    FUN_00497a90();
                    goto LAB_004988ef;
                  }
                  pfVar15 = (float *)(uVar8 * 0x30 + 0x10 + param_4);
                  pfVar11 = (float *)(*(int *)(param_1 + 0x28) + iVar17);
                  *pfVar15 = local_3c * *(float *)(*(int *)(param_1 + 0x28) + iVar17) -
                             local_40 * pfVar11[1];
                  pfVar15[1] = local_40 * *pfVar11 + local_3c * pfVar11[1];
                  pfVar15[2] = local_3c * pfVar11[2] + local_40 * pfVar11[3];
                  fVar1 = pfVar11[3];
                  fVar5 = local_40 * pfVar11[2];
                }
                pfVar15[3] = local_3c * fVar1 - fVar5;
              }
LAB_004988ef:
              local_58 = local_58 + 0xe;
              local_54 = local_54 + 1;
              local_5c = local_5c + 2;
              iVar17 = iVar17 + 0x10;
              if ((int)(uint)*(byte *)(iVar4 + 6) <= local_54) {
                return CONCAT31((int3)((uint)local_5c >> 8),1);
              }
            } while( true );
          }
        }
        goto LAB_00498ce7;
      }
    }
  }
  else {
    fVar5 = (float)puVar19[(int)local_70 - 1];
    uVar8 = (uint)(ushort)((ushort)(param_2 < fVar5) << 8 |
                           (ushort)(NAN(param_2) || NAN(fVar5)) << 10 |
                          (ushort)(param_2 == fVar5) << 0xe);
    if (param_2 != fVar5) {
      local_70 = (param_2 - fVar5) / ((float)puVar19[(int)local_70] - fVar5);
      goto LAB_0049874e;
    }
  }
  local_5c = CONCAT31((int3)(uVar8 >> 8),*(char *)(iVar4 + 6));
  local_58 = 0;
  if (*(char *)(iVar4 + 6) != '\0') {
    iVar10 = 0;
    local_5c = 0;
    iVar17 = local_5c;
    do {
      local_5c = iVar17;
      uVar8 = (uint)*(byte *)(local_58 + iVar13);
      if ((*(uint *)(param_3 + ((int)uVar8 >> 5) * 4) & 1 << (*(byte *)(local_58 + iVar13) & 0x1f))
          != 0) {
        sVar3 = *(short *)(*(int *)(param_1 + 0x10) + 0xc + local_5c);
        if (sVar3 == 0) {
          pfVar11 = (float *)(*(int *)(param_1 + 0x2c) + iVar10);
          pfVar15 = (float *)(uVar8 * 0x30 + 0x10 + param_4);
          pfVar16 = (float *)(*(int *)(param_1 + 0x24) + iVar10);
          *pfVar15 = pfVar11[3] * *pfVar16 +
                     *(float *)(*(int *)(param_1 + 0x24) + 0xc + iVar10) * *pfVar11;
          pfVar15[1] = pfVar11[2] * *pfVar16 + pfVar16[3] * pfVar11[1];
          pfVar15[2] = pfVar16[3] * pfVar11[2] - pfVar11[1] * *pfVar16;
          fVar1 = pfVar16[3] * pfVar11[3];
          fVar5 = *pfVar16 * *pfVar11;
        }
        else {
          if (sVar3 == 1) {
            iVar17 = *(int *)(param_1 + 0x24);
            iVar20 = *(int *)(param_1 + 0x28);
            fVar1 = *(float *)(iVar20 + iVar10) * *(float *)(iVar17 + 0xc + iVar10);
            pfVar15 = (float *)(uVar8 * 0x30 + 0x10 + param_4);
            fVar5 = *(float *)(iVar17 + 4 + iVar10) * *(float *)(iVar20 + 0xc + iVar10);
            iVar21 = *(int *)(param_1 + 0x2c) + iVar10;
            fVar6 = -(*(float *)(iVar17 + 4 + iVar10) * *(float *)(iVar20 + iVar10));
            fVar7 = *(float *)(iVar20 + iVar10 + 0xc) * *(float *)(iVar17 + iVar10 + 0xc);
            *pfVar15 = fVar1 * *(float *)(iVar21 + 0xc) - fVar5 * *(float *)(iVar21 + 8);
            pfVar15[1] = fVar1 * *(float *)(iVar21 + 8) + fVar5 * *(float *)(iVar21 + 0xc);
            pfVar15[2] = fVar6 * *(float *)(iVar21 + 0xc) + fVar7 * *(float *)(iVar21 + 8);
            pfVar15[3] = fVar7 * *(float *)(iVar21 + 0xc) - fVar6 * *(float *)(iVar21 + 8);
            goto LAB_00498cc0;
          }
          iVar17 = *(int *)(param_1 + 0x24) + iVar10;
          pfVar11 = (float *)(*(int *)(param_1 + 0x28) + iVar10);
          pfVar15 = (float *)(uVar8 * 0x30 + 0x10 + param_4);
          *pfVar15 = *(float *)(*(int *)(param_1 + 0x24) + 0xc + iVar10) *
                     *(float *)(*(int *)(param_1 + 0x28) + iVar10) -
                     *(float *)(iVar17 + 8) * pfVar11[1];
          pfVar15[1] = *(float *)(iVar17 + 0xc) * pfVar11[1] + *(float *)(iVar17 + 8) * *pfVar11;
          pfVar15[2] = pfVar11[2] * *(float *)(iVar17 + 0xc) + pfVar11[3] * *(float *)(iVar17 + 8);
          fVar1 = pfVar11[3] * *(float *)(iVar17 + 0xc);
          fVar5 = pfVar11[2] * *(float *)(iVar17 + 8);
        }
        pfVar15[3] = fVar1 - fVar5;
      }
LAB_00498cc0:
      iVar17 = local_5c + 0xe;
      local_5c = local_58 + 1;
      iVar10 = iVar10 + 0x10;
      local_58 = local_5c;
    } while (local_5c < (int)(uint)*(byte *)(iVar4 + 6));
  }
LAB_00498ce7:
  return CONCAT31((int3)((uint)local_5c >> 8),1);
}

