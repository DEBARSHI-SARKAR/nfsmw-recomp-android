/* speed.exe 0049b740 FUN_0049b740; analysis pseudocode, not buildable source.
 * calls 0049af00 FUN_0049af00
 */

undefined4 __thiscall
FUN_0049b740(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,int param_6,
            float param_7)

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
  int iVar16;
  int iVar17;
  short *psVar18;
  short *psVar19;
  undefined4 uVar20;
  float *pfVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  ushort *puVar25;
  int iVar26;
  
  iVar17 = param_3;
  *(short *)(param_1 + 0x10) = (short)param_6;
  if (param_4 != 0) {
    uVar20 = FUN_0049af00(param_2,param_3,param_4,param_5,param_6,param_7);
    return uVar20;
  }
  iVar15 = *(int *)(param_1 + 0xc);
  uVar22 = (uint)*(byte *)(iVar15 + 0x12);
  iVar16 = *(int *)(iVar15 + 0xc);
  iVar26 = uVar22 * 0x20 + 0x18 + iVar15;
  psVar19 = (short *)(iVar26 + uVar22 * param_6 * 6);
  if ((char)param_5 == '\0') {
    param_7 = 0.0;
    if (3 < uVar22) {
      param_3 = (uVar22 - 4 >> 2) + 1;
      param_7 = (float)(param_3 * 4);
      psVar18 = psVar19;
      pfVar21 = (float *)(iVar15 + 0x30);
      puVar25 = (ushort *)(iVar16 + 4);
      do {
        uVar23 = (uint)puVar25[-2];
        psVar19 = psVar18 + 0xc;
        *(float *)(iVar17 + uVar23 * 4) = (float)(int)*psVar18 * pfVar21[-2];
        *(float *)(iVar17 + 4 + uVar23 * 4) = (float)(int)psVar18[1] * pfVar21[-1];
        *(float *)(iVar17 + 8 + uVar23 * 4) = (float)(int)psVar18[2] * *pfVar21;
        uVar23 = (uint)puVar25[-1];
        *(float *)(iVar17 + uVar23 * 4) = (float)(int)psVar18[3] * pfVar21[6];
        *(float *)(iVar17 + 4 + uVar23 * 4) = (float)(int)psVar18[4] * pfVar21[7];
        *(float *)(iVar17 + 8 + uVar23 * 4) = (float)(int)psVar18[5] * pfVar21[8];
        uVar23 = (uint)*puVar25;
        *(float *)(iVar17 + uVar23 * 4) = (float)(int)psVar18[6] * pfVar21[0xe];
        *(float *)(iVar17 + 4 + uVar23 * 4) = (float)(int)psVar18[7] * pfVar21[0xf];
        *(float *)(iVar17 + 8 + uVar23 * 4) = (float)(int)psVar18[8] * pfVar21[0x10];
        uVar23 = (uint)puVar25[1];
        *(float *)(iVar17 + uVar23 * 4) = (float)(int)psVar18[9] * pfVar21[0x16];
        *(float *)(iVar17 + 4 + uVar23 * 4) = (float)(int)psVar18[10] * pfVar21[0x17];
        *(float *)(iVar17 + 8 + uVar23 * 4) = (float)(int)psVar18[0xb] * pfVar21[0x18];
        param_3 = param_3 + -1;
        psVar18 = psVar19;
        pfVar21 = pfVar21 + 0x20;
        puVar25 = puVar25 + 4;
      } while (param_3 != 0);
    }
    if ((int)param_7 < (int)uVar22) {
      psVar18 = psVar19;
      pfVar21 = (float *)((int)param_7 * 0x20 + 0x30 + iVar15);
      do {
        uVar23 = (uint)*(ushort *)(iVar16 + (int)param_7 * 2);
        psVar19 = psVar18 + 3;
        *(float *)(iVar17 + uVar23 * 4) = (float)(int)*psVar18 * pfVar21[-2];
        *(float *)(iVar17 + 4 + uVar23 * 4) = (float)(int)psVar18[1] * pfVar21[-1];
        *(float *)(iVar17 + 8 + uVar23 * 4) = (float)(int)psVar18[2] * *pfVar21;
        param_7 = (float)((int)param_7 + 1);
        psVar18 = psVar19;
        pfVar21 = pfVar21 + 8;
      } while ((int)param_7 < (int)uVar22);
    }
  }
  else {
    iVar24 = 0;
    psVar18 = (short *)(iVar26 + (param_6 + 1) * (uint)*(byte *)(iVar15 + 0x12) * 6);
    if (3 < uVar22) {
      puVar25 = (ushort *)(iVar16 + 4);
      pfVar21 = (float *)(iVar15 + 0x4c);
      param_3 = (uVar22 - 4 >> 2) + 1;
      iVar24 = param_3 * 4;
      do {
        sVar10 = psVar19[1];
        sVar11 = psVar19[2];
        fVar5 = pfVar21[-8];
        sVar12 = psVar18[1];
        fVar6 = pfVar21[-7];
        sVar13 = psVar18[2];
        uVar23 = (uint)puVar25[-2];
        fVar7 = pfVar21[-8];
        fVar8 = pfVar21[-7];
        *(float *)(iVar17 + uVar23 * 4) =
             ((float)(int)*psVar18 * pfVar21[-9] - (float)(int)*psVar19 * pfVar21[-9]) * param_7 +
             (float)(int)*psVar19 * pfVar21[-9];
        *(float *)(iVar17 + 4 + uVar23 * 4) =
             ((float)(int)sVar12 * fVar7 - (float)(int)sVar10 * fVar5) * param_7 +
             (float)(int)sVar10 * fVar5;
        *(float *)(iVar17 + 8 + uVar23 * 4) =
             ((float)(int)sVar13 * fVar8 - (float)(int)sVar11 * fVar6) * param_7 +
             (float)(int)sVar11 * fVar6;
        sVar10 = psVar19[4];
        sVar11 = psVar19[5];
        fVar5 = *pfVar21;
        sVar12 = psVar18[4];
        fVar6 = pfVar21[1];
        sVar13 = psVar18[5];
        uVar23 = (uint)puVar25[-1];
        fVar7 = *pfVar21;
        fVar8 = pfVar21[1];
        *(float *)(iVar17 + uVar23 * 4) =
             ((float)(int)psVar18[3] * pfVar21[-1] - (float)(int)psVar19[3] * pfVar21[-1]) * param_7
             + (float)(int)psVar19[3] * pfVar21[-1];
        *(float *)(iVar17 + 4 + uVar23 * 4) =
             ((float)(int)sVar12 * fVar7 - (float)(int)sVar10 * fVar5) * param_7 +
             (float)(int)sVar10 * fVar5;
        *(float *)(iVar17 + 8 + uVar23 * 4) =
             ((float)(int)sVar13 * fVar8 - (float)(int)sVar11 * fVar6) * param_7 +
             (float)(int)sVar11 * fVar6;
        sVar10 = psVar19[7];
        sVar11 = psVar19[8];
        fVar5 = pfVar21[8];
        sVar12 = psVar18[7];
        fVar6 = pfVar21[9];
        sVar13 = psVar18[8];
        uVar23 = (uint)*puVar25;
        fVar7 = pfVar21[8];
        fVar8 = pfVar21[9];
        *(float *)(iVar17 + uVar23 * 4) =
             ((float)(int)psVar18[6] * pfVar21[7] - (float)(int)psVar19[6] * pfVar21[7]) * param_7 +
             (float)(int)psVar19[6] * pfVar21[7];
        *(float *)(iVar17 + 4 + uVar23 * 4) =
             ((float)(int)sVar12 * fVar7 - (float)(int)sVar10 * fVar5) * param_7 +
             (float)(int)sVar10 * fVar5;
        *(float *)(iVar17 + 8 + uVar23 * 4) =
             ((float)(int)sVar13 * fVar8 - (float)(int)sVar11 * fVar6) * param_7 +
             (float)(int)sVar11 * fVar6;
        psVar1 = psVar19 + 9;
        sVar10 = psVar19[10];
        sVar11 = psVar19[0xb];
        pfVar2 = pfVar21 + 0xf;
        psVar3 = psVar18 + 9;
        fVar5 = pfVar21[0x10];
        sVar12 = psVar18[10];
        fVar6 = pfVar21[0x11];
        pfVar4 = pfVar21 + 0xf;
        fVar7 = pfVar21[0x10];
        sVar13 = psVar18[0xb];
        uVar23 = (uint)puVar25[1];
        psVar19 = psVar19 + 0xc;
        psVar18 = psVar18 + 0xc;
        fVar8 = pfVar21[0x11];
        pfVar21 = pfVar21 + 0x20;
        puVar25 = puVar25 + 4;
        *(float *)(iVar17 + uVar23 * 4) =
             ((float)(int)*psVar3 * *pfVar4 - (float)(int)*psVar1 * *pfVar2) * param_7 +
             (float)(int)*psVar1 * *pfVar2;
        *(float *)(iVar17 + 4 + uVar23 * 4) =
             ((float)(int)sVar12 * fVar7 - (float)(int)sVar10 * fVar5) * param_7 +
             (float)(int)sVar10 * fVar5;
        *(float *)(iVar17 + 8 + uVar23 * 4) =
             ((float)(int)sVar13 * fVar8 - (float)(int)sVar11 * fVar6) * param_7 +
             (float)(int)sVar11 * fVar6;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    if (iVar24 < (int)uVar22) {
      pfVar21 = (float *)(iVar24 * 0x20 + 0x2c + iVar15);
      do {
        sVar10 = *psVar19;
        sVar11 = psVar19[1];
        sVar12 = psVar19[2];
        fVar5 = *pfVar21;
        sVar13 = psVar18[1];
        fVar6 = pfVar21[1];
        psVar19 = psVar19 + 3;
        sVar14 = psVar18[2];
        uVar23 = (uint)*(ushort *)(iVar16 + iVar24 * 2);
        fVar7 = *pfVar21;
        iVar24 = iVar24 + 1;
        fVar8 = pfVar21[1];
        *(float *)(iVar17 + uVar23 * 4) =
             ((float)(int)*psVar18 * pfVar21[-1] - (float)(int)sVar10 * pfVar21[-1]) * param_7 +
             (float)(int)sVar10 * pfVar21[-1];
        *(float *)(iVar17 + 4 + uVar23 * 4) =
             ((float)(int)sVar13 * fVar7 - (float)(int)sVar11 * fVar5) * param_7 +
             (float)(int)sVar11 * fVar5;
        *(float *)(iVar17 + 8 + uVar23 * 4) =
             ((float)(int)sVar14 * fVar8 - (float)(int)sVar12 * fVar6) * param_7 +
             (float)(int)sVar12 * fVar6;
        pfVar21 = pfVar21 + 8;
        psVar18 = psVar18 + 3;
      } while (iVar24 < (int)uVar22);
    }
  }
  if (*(char *)(iVar15 + 0x13) != '\0') {
    bVar9 = *(byte *)(iVar15 + 0x12);
    iVar16 = *(int *)(iVar15 + 0xc);
    psVar19 = (short *)(iVar26 + 3 + (uint)*(ushort *)(iVar15 + 0x10) * (uint)bVar9 * 6 & 0xfffffffc
                       );
    iVar26 = 0;
    if (*(char *)(iVar15 + 0x13) != '\0') {
      psVar19 = psVar19 + 4;
      do {
        uVar22 = (uint)*(ushort *)(iVar16 + (uint)bVar9 * 2 + iVar26 * 2);
        *(undefined4 *)(iVar17 + uVar22 * 4) = *(undefined4 *)(psVar19 + -4);
        *(undefined4 *)(iVar17 + 4 + uVar22 * 4) = *(undefined4 *)(psVar19 + -2);
        *(undefined4 *)(iVar17 + 8 + uVar22 * 4) = *(undefined4 *)psVar19;
        iVar26 = iVar26 + 1;
        psVar19 = psVar19 + 6;
      } while (iVar26 < (int)(uint)*(byte *)(iVar15 + 0x13));
    }
  }
  return CONCAT31((int3)((uint)psVar19 >> 8),1);
}

