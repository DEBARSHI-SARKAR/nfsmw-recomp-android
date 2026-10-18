/* speed.exe 004a6d10 FUN_004a6d10; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 0049af00 FUN_0049af00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004a6d10(int param_1,float param_2,int param_3,int param_4)

{
  short *psVar1;
  float *pfVar2;
  short *psVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  byte bVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  int iVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  short *psVar19;
  short *psVar20;
  undefined4 uVar21;
  int iVar22;
  float *pfVar23;
  ushort *puVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  ushort *puVar28;
  bool bVar29;
  float local_28;
  
  iVar17 = param_3;
  if (*(char *)(param_1 + 0x12) != '\0') {
    param_2 = (float)*(byte *)(param_1 + 0x13) * param_2;
  }
  iVar15 = *(int *)(param_1 + 0xc);
  iVar18 = FUN_007c4b80();
  puVar28 = *(ushort **)(iVar15 + 8);
  local_28 = 0.0;
  if (puVar28 == (ushort *)0x0) {
    if (iVar18 < 0) {
      iVar27 = 0;
    }
    else {
      iVar27 = iVar18;
      if ((int)(uint)*(ushort *)(iVar15 + 0x10) <= iVar18) {
        iVar27 = *(ushort *)(iVar15 + 0x10) - 1;
      }
    }
    bVar16 = param_2 != (float)iVar18;
    local_28 = param_2 - (float)iVar18;
    iVar18 = *(ushort *)(iVar15 + 0x10) - 1;
    bVar29 = SBORROW4(iVar27,iVar18);
    iVar18 = iVar27 - iVar18;
    goto LAB_004a6e93;
  }
  if (iVar18 < (int)(uint)*puVar28) {
    iVar27 = 0;
LAB_004a6dfc:
    if (param_2 == _DAT_00890968) {
      bVar16 = false;
    }
    else {
      bVar16 = true;
      local_28 = param_2 / (float)*puVar28;
    }
  }
  else {
    if (*(ushort *)(param_1 + 0x10) == 0) {
      iVar22 = 0;
    }
    else {
      iVar22 = *(ushort *)(param_1 + 0x10) - 1;
    }
    puVar24 = puVar28 + iVar22;
    if (iVar18 < (int)(uint)puVar28[iVar22]) {
      for (; (0 < iVar22 && (iVar18 < (int)(uint)*puVar24)); puVar24 = puVar24 + -1) {
        iVar22 = iVar22 + -1;
      }
    }
    else {
      while ((iVar22 < (int)(*(ushort *)(iVar15 + 0x10) - 2) &&
             (puVar24 = puVar24 + 1, (int)(uint)*puVar24 <= iVar18))) {
        iVar22 = iVar22 + 1;
      }
    }
    iVar27 = iVar22 + 1;
    if (iVar27 == 0) goto LAB_004a6dfc;
    fVar5 = (float)puVar28[iVar22];
    bVar16 = param_2 != fVar5;
    if (bVar16) {
      local_28 = (param_2 - fVar5) / ((float)puVar28[iVar27] - fVar5);
    }
  }
  iVar18 = *(ushort *)(iVar15 + 0x10) - 1;
  bVar29 = SBORROW4(iVar27,iVar18);
  iVar18 = iVar27 - iVar18;
LAB_004a6e93:
  if (bVar29 == iVar18 < 0) {
    bVar16 = false;
  }
  *(short *)(param_1 + 0x10) = (short)iVar27;
  if (param_4 != 0) {
    uVar21 = FUN_0049af00(param_2,param_3,param_4,bVar16,iVar27,local_28);
    return uVar21;
  }
  uVar25 = (uint)*(byte *)(iVar15 + 0x12);
  iVar18 = uVar25 * 0x20 + 0x18 + iVar15;
  iVar22 = *(int *)(iVar15 + 0xc);
  psVar20 = (short *)(iVar18 + uVar25 * iVar27 * 6);
  if (bVar16) {
    psVar19 = (short *)(iVar18 + (iVar27 + 1) * (uint)*(byte *)(iVar15 + 0x12) * 6);
    iVar27 = 0;
    if (3 < uVar25) {
      puVar28 = (ushort *)(iVar22 + 4);
      pfVar23 = (float *)(iVar15 + 0x4c);
      param_2 = (float)((uVar25 - 4 >> 2) + 1);
      iVar27 = (int)param_2 * 4;
      do {
        sVar10 = psVar20[1];
        sVar11 = psVar20[2];
        fVar5 = pfVar23[-8];
        sVar12 = psVar19[1];
        fVar6 = pfVar23[-7];
        sVar13 = psVar19[2];
        uVar26 = (uint)puVar28[-2];
        fVar7 = pfVar23[-8];
        fVar8 = pfVar23[-7];
        *(float *)(param_3 + uVar26 * 4) =
             ((float)(int)*psVar19 * pfVar23[-9] - (float)(int)*psVar20 * pfVar23[-9]) * local_28 +
             (float)(int)*psVar20 * pfVar23[-9];
        *(float *)(param_3 + 4 + uVar26 * 4) =
             ((float)(int)sVar12 * fVar7 - (float)(int)sVar10 * fVar5) * local_28 +
             (float)(int)sVar10 * fVar5;
        *(float *)(param_3 + 8 + uVar26 * 4) =
             ((float)(int)sVar13 * fVar8 - (float)(int)sVar11 * fVar6) * local_28 +
             (float)(int)sVar11 * fVar6;
        sVar10 = psVar20[4];
        sVar11 = psVar20[5];
        fVar5 = *pfVar23;
        sVar12 = psVar19[4];
        fVar6 = pfVar23[1];
        sVar13 = psVar19[5];
        uVar26 = (uint)puVar28[-1];
        fVar7 = *pfVar23;
        fVar8 = pfVar23[1];
        *(float *)(param_3 + uVar26 * 4) =
             ((float)(int)psVar19[3] * pfVar23[-1] - (float)(int)psVar20[3] * pfVar23[-1]) *
             local_28 + (float)(int)psVar20[3] * pfVar23[-1];
        *(float *)(param_3 + 4 + uVar26 * 4) =
             ((float)(int)sVar12 * fVar7 - (float)(int)sVar10 * fVar5) * local_28 +
             (float)(int)sVar10 * fVar5;
        *(float *)(param_3 + 8 + uVar26 * 4) =
             ((float)(int)sVar13 * fVar8 - (float)(int)sVar11 * fVar6) * local_28 +
             (float)(int)sVar11 * fVar6;
        sVar10 = psVar20[7];
        sVar11 = psVar20[8];
        fVar5 = pfVar23[8];
        sVar12 = psVar19[7];
        fVar6 = pfVar23[9];
        sVar13 = psVar19[8];
        uVar26 = (uint)*puVar28;
        fVar7 = pfVar23[8];
        fVar8 = pfVar23[9];
        *(float *)(param_3 + uVar26 * 4) =
             ((float)(int)psVar19[6] * pfVar23[7] - (float)(int)psVar20[6] * pfVar23[7]) * local_28
             + (float)(int)psVar20[6] * pfVar23[7];
        *(float *)(param_3 + 4 + uVar26 * 4) =
             ((float)(int)sVar12 * fVar7 - (float)(int)sVar10 * fVar5) * local_28 +
             (float)(int)sVar10 * fVar5;
        *(float *)(param_3 + 8 + uVar26 * 4) =
             ((float)(int)sVar13 * fVar8 - (float)(int)sVar11 * fVar6) * local_28 +
             (float)(int)sVar11 * fVar6;
        psVar1 = psVar20 + 9;
        sVar10 = psVar20[10];
        sVar11 = psVar20[0xb];
        pfVar2 = pfVar23 + 0xf;
        psVar3 = psVar19 + 9;
        fVar5 = pfVar23[0x10];
        sVar12 = psVar19[10];
        fVar6 = pfVar23[0x11];
        pfVar4 = pfVar23 + 0xf;
        fVar7 = pfVar23[0x10];
        sVar13 = psVar19[0xb];
        uVar26 = (uint)puVar28[1];
        psVar20 = psVar20 + 0xc;
        psVar19 = psVar19 + 0xc;
        fVar8 = pfVar23[0x11];
        pfVar23 = pfVar23 + 0x20;
        puVar28 = puVar28 + 4;
        *(float *)(param_3 + uVar26 * 4) =
             ((float)(int)*psVar3 * *pfVar4 - (float)(int)*psVar1 * *pfVar2) * local_28 +
             (float)(int)*psVar1 * *pfVar2;
        *(float *)(param_3 + 4 + uVar26 * 4) =
             ((float)(int)sVar12 * fVar7 - (float)(int)sVar10 * fVar5) * local_28 +
             (float)(int)sVar10 * fVar5;
        *(float *)(param_3 + 8 + uVar26 * 4) =
             ((float)(int)sVar13 * fVar8 - (float)(int)sVar11 * fVar6) * local_28 +
             (float)(int)sVar11 * fVar6;
        param_2 = (float)((int)param_2 + -1);
      } while (param_2 != 0.0);
    }
    if (iVar27 < (int)uVar25) {
      pfVar23 = (float *)(iVar27 * 0x20 + 0x2c + iVar15);
      do {
        sVar10 = *psVar20;
        sVar11 = psVar20[1];
        sVar12 = psVar20[2];
        fVar5 = *pfVar23;
        sVar13 = psVar19[1];
        fVar6 = pfVar23[1];
        psVar20 = psVar20 + 3;
        sVar14 = psVar19[2];
        uVar26 = (uint)*(ushort *)(iVar22 + iVar27 * 2);
        fVar7 = *pfVar23;
        iVar27 = iVar27 + 1;
        fVar8 = pfVar23[1];
        *(float *)(param_3 + uVar26 * 4) =
             ((float)(int)*psVar19 * pfVar23[-1] - (float)(int)sVar10 * pfVar23[-1]) * local_28 +
             (float)(int)sVar10 * pfVar23[-1];
        *(float *)(param_3 + 4 + uVar26 * 4) =
             ((float)(int)sVar13 * fVar7 - (float)(int)sVar11 * fVar5) * local_28 +
             (float)(int)sVar11 * fVar5;
        *(float *)(param_3 + 8 + uVar26 * 4) =
             ((float)(int)sVar14 * fVar8 - (float)(int)sVar12 * fVar6) * local_28 +
             (float)(int)sVar12 * fVar6;
        pfVar23 = pfVar23 + 8;
        psVar19 = psVar19 + 3;
      } while (iVar27 < (int)uVar25);
    }
  }
  else {
    param_2 = 0.0;
    if (3 < uVar25) {
      param_3 = (uVar25 - 4 >> 2) + 1;
      param_2 = (float)(param_3 * 4);
      psVar19 = psVar20;
      pfVar23 = (float *)(iVar15 + 0x30);
      puVar28 = (ushort *)(iVar22 + 4);
      do {
        uVar26 = (uint)puVar28[-2];
        psVar20 = psVar19 + 0xc;
        *(float *)(iVar17 + uVar26 * 4) = (float)(int)*psVar19 * pfVar23[-2];
        *(float *)(iVar17 + 4 + uVar26 * 4) = (float)(int)psVar19[1] * pfVar23[-1];
        *(float *)(iVar17 + 8 + uVar26 * 4) = (float)(int)psVar19[2] * *pfVar23;
        uVar26 = (uint)puVar28[-1];
        *(float *)(iVar17 + uVar26 * 4) = (float)(int)psVar19[3] * pfVar23[6];
        *(float *)(iVar17 + 4 + uVar26 * 4) = (float)(int)psVar19[4] * pfVar23[7];
        *(float *)(iVar17 + 8 + uVar26 * 4) = (float)(int)psVar19[5] * pfVar23[8];
        uVar26 = (uint)*puVar28;
        *(float *)(iVar17 + uVar26 * 4) = (float)(int)psVar19[6] * pfVar23[0xe];
        *(float *)(iVar17 + 4 + uVar26 * 4) = (float)(int)psVar19[7] * pfVar23[0xf];
        *(float *)(iVar17 + 8 + uVar26 * 4) = (float)(int)psVar19[8] * pfVar23[0x10];
        uVar26 = (uint)puVar28[1];
        *(float *)(iVar17 + uVar26 * 4) = (float)(int)psVar19[9] * pfVar23[0x16];
        *(float *)(iVar17 + 4 + uVar26 * 4) = (float)(int)psVar19[10] * pfVar23[0x17];
        *(float *)(iVar17 + 8 + uVar26 * 4) = (float)(int)psVar19[0xb] * pfVar23[0x18];
        param_3 = param_3 + -1;
        psVar19 = psVar20;
        pfVar23 = pfVar23 + 0x20;
        puVar28 = puVar28 + 4;
      } while (param_3 != 0);
    }
    if ((int)param_2 < (int)uVar25) {
      psVar19 = psVar20;
      pfVar23 = (float *)((int)param_2 * 0x20 + 0x30 + iVar15);
      do {
        uVar26 = (uint)*(ushort *)(iVar22 + (int)param_2 * 2);
        psVar20 = psVar19 + 3;
        *(float *)(iVar17 + uVar26 * 4) = (float)(int)*psVar19 * pfVar23[-2];
        *(float *)(iVar17 + 4 + uVar26 * 4) = (float)(int)psVar19[1] * pfVar23[-1];
        *(float *)(iVar17 + 8 + uVar26 * 4) = (float)(int)psVar19[2] * *pfVar23;
        param_2 = (float)((int)param_2 + 1);
        psVar19 = psVar20;
        pfVar23 = pfVar23 + 8;
      } while ((int)param_2 < (int)uVar25);
    }
  }
  if (*(char *)(iVar15 + 0x13) != '\0') {
    bVar9 = *(byte *)(iVar15 + 0x12);
    iVar27 = *(int *)(iVar15 + 0xc);
    psVar20 = (short *)(iVar18 + 3 + (uint)*(ushort *)(iVar15 + 0x10) * (uint)bVar9 * 6 & 0xfffffffc
                       );
    iVar18 = 0;
    if (*(char *)(iVar15 + 0x13) != '\0') {
      psVar20 = psVar20 + 4;
      do {
        uVar25 = (uint)*(ushort *)(iVar27 + (uint)bVar9 * 2 + iVar18 * 2);
        *(undefined4 *)(iVar17 + uVar25 * 4) = *(undefined4 *)(psVar20 + -4);
        *(undefined4 *)(iVar17 + 4 + uVar25 * 4) = *(undefined4 *)(psVar20 + -2);
        *(undefined4 *)(iVar17 + 8 + uVar25 * 4) = *(undefined4 *)psVar20;
        iVar18 = iVar18 + 1;
        psVar20 = psVar20 + 6;
      } while (iVar18 < (int)(uint)*(byte *)(iVar15 + 0x13));
    }
  }
  return CONCAT31((int3)((uint)psVar20 >> 8),1);
}

