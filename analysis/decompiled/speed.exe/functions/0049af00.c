/* speed.exe 0049af00 FUN_0049af00; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall
FUN_0049af00(int param_1,undefined4 param_2,int param_3,int param_4,char param_5,int param_6,
            float param_7)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  ushort uVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  float *pfVar17;
  uint uVar18;
  float *pfVar19;
  short *psVar20;
  short *psVar21;
  int iVar22;
  short *psVar23;
  undefined4 *puVar24;
  ushort *local_a8;
  int local_a4;
  float *local_a0;
  byte abStack_78 [120];
  
  if (param_4 != *(int *)(param_1 + 0x14)) {
    *(int *)(param_1 + 0x14) = param_4;
  }
  iVar14 = *(int *)(param_1 + 0xc);
  iVar15 = *(int *)(iVar14 + 0xc);
  pfVar19 = (float *)(uint)*(byte *)(iVar14 + 0x12);
  iVar1 = (int)pfVar19 * 0x20 + 0x18 + iVar14;
  uVar18 = (uint)*(byte *)(iVar14 + 0x12);
  iVar16 = (int)pfVar19 * param_6 * 3;
  iVar22 = 0;
  psVar21 = (short *)(iVar1 + (int)pfVar19 * param_6 * 6);
  if (uVar18 != 0) {
    do {
      uVar7 = *(ushort *)(iVar15 + iVar22 * 2);
      iVar16 = (uint)uVar7 * -0x55555555;
      abStack_78[iVar22] = (byte)(uVar7 / 0xc);
      iVar22 = iVar22 + 1;
    } while (iVar22 < (int)uVar18);
  }
  pfVar17 = (float *)CONCAT31((int3)((uint)iVar16 >> 8),param_5);
  if (param_5 == '\0') {
    iVar16 = 0;
    if ((float *)0x3 < pfVar19) {
      local_a8 = (ushort *)(iVar15 + 4);
      pfVar17 = (float *)(iVar14 + 0x30);
      do {
        psVar20 = psVar21;
        if ((*(uint *)(param_4 + ((int)(uint)abStack_78[iVar16] >> 5) * 4) &
            1 << (abStack_78[iVar16] & 0x1f)) != 0) {
          uVar18 = (uint)local_a8[-2];
          psVar20 = psVar21 + 3;
          *(float *)(param_3 + uVar18 * 4) = (float)(int)*psVar21 * pfVar17[-2];
          *(float *)(param_3 + 4 + uVar18 * 4) = (float)(int)psVar21[1] * pfVar17[-1];
          *(float *)(param_3 + 8 + uVar18 * 4) = (float)(int)psVar21[2] * *pfVar17;
        }
        psVar21 = psVar20;
        if ((*(uint *)(param_4 + ((int)(uint)abStack_78[iVar16 + 1] >> 5) * 4) &
            1 << (abStack_78[iVar16 + 1] & 0x1f)) != 0) {
          uVar18 = (uint)local_a8[-1];
          psVar21 = psVar20 + 3;
          *(float *)(param_3 + uVar18 * 4) = (float)(int)*psVar20 * pfVar17[6];
          *(float *)(param_3 + 4 + uVar18 * 4) = (float)(int)psVar20[1] * pfVar17[7];
          *(float *)(param_3 + 8 + uVar18 * 4) = (float)(int)psVar20[2] * pfVar17[8];
        }
        psVar20 = psVar21;
        if ((*(uint *)(param_4 + ((int)(uint)abStack_78[iVar16 + 2] >> 5) * 4) &
            1 << (abStack_78[iVar16 + 2] & 0x1f)) != 0) {
          uVar18 = (uint)*local_a8;
          psVar20 = psVar21 + 3;
          *(float *)(param_3 + uVar18 * 4) = (float)(int)*psVar21 * pfVar17[0xe];
          *(float *)(param_3 + 4 + uVar18 * 4) = (float)(int)psVar21[1] * pfVar17[0xf];
          *(float *)(param_3 + 8 + uVar18 * 4) = (float)(int)psVar21[2] * pfVar17[0x10];
        }
        psVar21 = psVar20;
        if ((*(uint *)(param_4 + ((int)(uint)abStack_78[iVar16 + 3] >> 5) * 4) &
            1 << (abStack_78[iVar16 + 3] & 0x1f)) != 0) {
          uVar18 = (uint)local_a8[1];
          psVar21 = psVar20 + 3;
          *(float *)(param_3 + uVar18 * 4) = (float)(int)*psVar20 * pfVar17[0x16];
          *(float *)(param_3 + 4 + uVar18 * 4) = (float)(int)psVar20[1] * pfVar17[0x17];
          *(float *)(param_3 + 8 + uVar18 * 4) = (float)(int)psVar20[2] * pfVar17[0x18];
        }
        local_a8 = local_a8 + 4;
        iVar16 = iVar16 + 4;
        pfVar17 = pfVar17 + 0x20;
      } while (iVar16 < (int)pfVar19 + -3);
    }
    if (iVar16 < (int)pfVar19) {
      local_a0 = (float *)(iVar16 * 0x20 + 0x30 + iVar14);
      do {
        if ((*(uint *)(param_4 + ((int)(uint)abStack_78[iVar16] >> 5) * 4) &
            1 << (abStack_78[iVar16] & 0x1f)) != 0) {
          uVar18 = (uint)*(ushort *)(iVar15 + iVar16 * 2);
          *(float *)(param_3 + uVar18 * 4) = (float)(int)*psVar21 * local_a0[-2];
          *(float *)(param_3 + 4 + uVar18 * 4) = (float)(int)psVar21[1] * local_a0[-1];
          *(float *)(param_3 + 8 + uVar18 * 4) = (float)(int)psVar21[2] * *local_a0;
          psVar21 = psVar21 + 3;
        }
        iVar16 = iVar16 + 1;
        local_a0 = local_a0 + 8;
        pfVar17 = pfVar19;
      } while (iVar16 < (int)pfVar19);
    }
  }
  else {
    iVar16 = (param_6 + 1) * uVar18;
    pfVar17 = (float *)(iVar16 * 3);
    psVar20 = (short *)(iVar1 + iVar16 * 6);
    local_a4 = 0;
    if ((float *)0x3 < pfVar19) {
      local_a8 = (ushort *)(iVar15 + 4);
      pfVar17 = (float *)(iVar14 + 0x4c);
      do {
        psVar23 = psVar20;
        if ((*(uint *)(param_4 + ((int)(uint)abStack_78[local_a4] >> 5) * 4) &
            1 << (abStack_78[local_a4] & 0x1f)) != 0) {
          sVar8 = *psVar21;
          sVar9 = psVar21[1];
          sVar10 = psVar21[2];
          fVar2 = pfVar17[-8];
          sVar11 = psVar20[1];
          fVar3 = pfVar17[-7];
          psVar21 = psVar21 + 3;
          psVar23 = psVar20 + 3;
          sVar12 = psVar20[2];
          uVar18 = (uint)local_a8[-2];
          fVar4 = pfVar17[-8];
          fVar5 = pfVar17[-7];
          *(float *)(param_3 + uVar18 * 4) =
               ((float)(int)*psVar20 * pfVar17[-9] - (float)(int)sVar8 * pfVar17[-9]) * param_7 +
               (float)(int)sVar8 * pfVar17[-9];
          *(float *)(param_3 + 4 + uVar18 * 4) =
               ((float)(int)sVar11 * fVar4 - (float)(int)sVar9 * fVar2) * param_7 +
               (float)(int)sVar9 * fVar2;
          *(float *)(param_3 + 8 + uVar18 * 4) =
               ((float)(int)sVar12 * fVar5 - (float)(int)sVar10 * fVar3) * param_7 +
               (float)(int)sVar10 * fVar3;
        }
        psVar20 = psVar23;
        if ((*(uint *)(param_4 + ((int)(uint)abStack_78[local_a4 + 1] >> 5) * 4) &
            1 << (abStack_78[local_a4 + 1] & 0x1f)) != 0) {
          sVar8 = *psVar21;
          sVar9 = psVar21[1];
          sVar10 = psVar21[2];
          fVar2 = *pfVar17;
          sVar11 = psVar23[1];
          fVar3 = pfVar17[1];
          psVar21 = psVar21 + 3;
          psVar20 = psVar23 + 3;
          sVar12 = psVar23[2];
          uVar18 = (uint)local_a8[-1];
          fVar4 = *pfVar17;
          fVar5 = pfVar17[1];
          *(float *)(param_3 + uVar18 * 4) =
               ((float)(int)*psVar23 * pfVar17[-1] - (float)(int)sVar8 * pfVar17[-1]) * param_7 +
               (float)(int)sVar8 * pfVar17[-1];
          *(float *)(param_3 + 4 + uVar18 * 4) =
               ((float)(int)sVar11 * fVar4 - (float)(int)sVar9 * fVar2) * param_7 +
               (float)(int)sVar9 * fVar2;
          *(float *)(param_3 + 8 + uVar18 * 4) =
               ((float)(int)sVar12 * fVar5 - (float)(int)sVar10 * fVar3) * param_7 +
               (float)(int)sVar10 * fVar3;
        }
        psVar23 = psVar20;
        if ((*(uint *)(param_4 + ((int)(uint)abStack_78[local_a4 + 2] >> 5) * 4) &
            1 << (abStack_78[local_a4 + 2] & 0x1f)) != 0) {
          sVar8 = *psVar21;
          sVar9 = psVar21[1];
          sVar10 = psVar21[2];
          fVar2 = pfVar17[8];
          sVar11 = psVar20[1];
          fVar3 = pfVar17[9];
          psVar21 = psVar21 + 3;
          psVar23 = psVar20 + 3;
          sVar12 = psVar20[2];
          uVar18 = (uint)*local_a8;
          fVar4 = pfVar17[8];
          fVar5 = pfVar17[9];
          *(float *)(param_3 + uVar18 * 4) =
               ((float)(int)*psVar20 * pfVar17[7] - (float)(int)sVar8 * pfVar17[7]) * param_7 +
               (float)(int)sVar8 * pfVar17[7];
          *(float *)(param_3 + 4 + uVar18 * 4) =
               ((float)(int)sVar11 * fVar4 - (float)(int)sVar9 * fVar2) * param_7 +
               (float)(int)sVar9 * fVar2;
          *(float *)(param_3 + 8 + uVar18 * 4) =
               ((float)(int)sVar12 * fVar5 - (float)(int)sVar10 * fVar3) * param_7 +
               (float)(int)sVar10 * fVar3;
        }
        psVar20 = psVar23;
        if ((*(uint *)(param_4 + ((int)(uint)abStack_78[local_a4 + 3] >> 5) * 4) &
            1 << (abStack_78[local_a4 + 3] & 0x1f)) != 0) {
          sVar8 = *psVar21;
          sVar9 = psVar21[1];
          sVar10 = psVar21[2];
          fVar2 = pfVar17[0x10];
          sVar11 = psVar23[1];
          fVar3 = pfVar17[0x11];
          psVar21 = psVar21 + 3;
          psVar20 = psVar23 + 3;
          sVar12 = psVar23[2];
          uVar18 = (uint)local_a8[1];
          fVar4 = pfVar17[0x10];
          fVar5 = pfVar17[0x11];
          *(float *)(param_3 + uVar18 * 4) =
               ((float)(int)*psVar23 * pfVar17[0xf] - (float)(int)sVar8 * pfVar17[0xf]) * param_7 +
               (float)(int)sVar8 * pfVar17[0xf];
          *(float *)(param_3 + 4 + uVar18 * 4) =
               ((float)(int)sVar11 * fVar4 - (float)(int)sVar9 * fVar2) * param_7 +
               (float)(int)sVar9 * fVar2;
          *(float *)(param_3 + 8 + uVar18 * 4) =
               ((float)(int)sVar12 * fVar5 - (float)(int)sVar10 * fVar3) * param_7 +
               (float)(int)sVar10 * fVar3;
        }
        local_a8 = local_a8 + 4;
        local_a4 = local_a4 + 4;
        pfVar17 = pfVar17 + 0x20;
      } while (local_a4 < (int)pfVar19 + -3);
    }
    if (local_a4 < (int)pfVar19) {
      pfVar17 = (float *)(local_a4 * 0x20 + 0x2c + iVar14);
      do {
        if ((*(uint *)(param_4 + ((int)(uint)abStack_78[local_a4] >> 5) * 4) &
            1 << (abStack_78[local_a4] & 0x1f)) != 0) {
          sVar8 = *psVar21;
          sVar9 = psVar21[1];
          sVar10 = psVar21[2];
          sVar11 = *psVar20;
          fVar2 = *pfVar17;
          sVar12 = psVar20[1];
          fVar3 = pfVar17[1];
          psVar21 = psVar21 + 3;
          sVar13 = psVar20[2];
          uVar18 = (uint)*(ushort *)(iVar15 + local_a4 * 2);
          fVar4 = *pfVar17;
          psVar20 = psVar20 + 3;
          fVar5 = pfVar17[1];
          *(float *)(param_3 + uVar18 * 4) =
               ((float)(int)sVar11 * pfVar17[-1] - (float)(int)sVar8 * pfVar17[-1]) * param_7 +
               (float)(int)sVar8 * pfVar17[-1];
          *(float *)(param_3 + 4 + uVar18 * 4) =
               ((float)(int)sVar12 * fVar4 - (float)(int)sVar9 * fVar2) * param_7 +
               (float)(int)sVar9 * fVar2;
          *(float *)(param_3 + 8 + uVar18 * 4) =
               ((float)(int)sVar13 * fVar5 - (float)(int)sVar10 * fVar3) * param_7 +
               (float)(int)sVar10 * fVar3;
        }
        local_a4 = local_a4 + 1;
        pfVar17 = pfVar17 + 8;
      } while (local_a4 < (int)pfVar19);
    }
  }
  if (*(char *)(iVar14 + 0x13) != '\0') {
    bVar6 = *(byte *)(iVar14 + 0x12);
    iVar15 = *(int *)(iVar14 + 0xc);
    iVar16 = (uint)*(ushort *)(iVar14 + 0x10) * (uint)bVar6;
    pfVar17 = (float *)(iVar16 * 3);
    iVar22 = 0;
    if (*(char *)(iVar14 + 0x13) != '\0') {
      puVar24 = (undefined4 *)((iVar1 + 3 + iVar16 * 6 & 0xfffffffcU) + 8);
      do {
        if ((*(uint *)(param_4 + ((int)(uint)abStack_78[iVar22] >> 5) * 4) &
            1 << (abStack_78[iVar22] & 0x1f)) != 0) {
          uVar18 = (uint)*(ushort *)(iVar15 + (uint)bVar6 * 2 + iVar22 * 2);
          *(undefined4 *)(param_3 + uVar18 * 4) = puVar24[-2];
          *(undefined4 *)(param_3 + 4 + uVar18 * 4) = puVar24[-1];
          *(undefined4 *)(param_3 + 8 + uVar18 * 4) = *puVar24;
        }
        pfVar17 = (float *)(uint)*(byte *)(iVar14 + 0x13);
        iVar22 = iVar22 + 1;
        puVar24 = puVar24 + 3;
      } while (iVar22 < (int)pfVar17);
    }
  }
  return CONCAT31((int3)((uint)pfVar17 >> 8),1);
}

