/* speed.exe 00776600 FUN_00776600; analysis pseudocode, not buildable source.
 * calls 007698a0 FUN_007698a0
 * calls 00762300 FUN_00762300
 * calls 00775be0 FUN_00775be0
 * calls 0045f850 FUN_0045f850
 * calls 0045f800 FUN_0045f800
 * calls 0045f3c0 FUN_0045f3c0
 * calls 00764c20 FUN_00764c20
 * calls 00401ae0 FUN_00401ae0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00776600(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  float *pfVar11;
  undefined1 uVar12;
  int *piVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  float10 fVar24;
  char unaff_retaddr;
  float fVar25;
  float *pfVar26;
  float **ppfStack_8c8;
  float *pfStack_8c0;
  float *pfStack_8b0;
  float fStack_8a8;
  float fStack_894;
  float fStack_890;
  float *pfStack_88c;
  float fStack_888;
  float *pfStack_884;
  float *pfStack_880;
  float fStack_87c;
  float fStack_878;
  float *pfStack_874;
  float fStack_870;
  float *pfStack_86c;
  float fStack_868;
  float *pfStack_864;
  float fStack_860;
  float fStack_85c;
  float *pfStack_858;
  float fStack_854;
  float fStack_850;
  float fStack_84c;
  float fStack_848;
  float afStack_844 [8];
  float afStack_824 [2];
  uint auStack_81c [3];
  float afStack_810 [516];
  
  if (*(char *)(param_1 + 0x55) != '\0') {
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined1 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    if ((((*(int *)(param_1 + 0x84) != 0) &&
         (piVar13 = (int *)(**(code **)(*(int *)(*(int *)(param_1 + 0x84) + 0x4c) + 4))(),
         piVar13 != (int *)0x0)) &&
        (piVar13 = (int *)(**(code **)(*piVar13 + 0x54))(), piVar13 != (int *)0x0)) &&
       (pfVar22 = (float *)**(float **)(param_1 + 8), 0 < (int)pfVar22)) {
      pfStack_880 = pfVar22;
      (**(code **)(*piVar13 + 0x34))(&fStack_84c);
      pfStack_880 = (float *)(**(code **)(*piVar13 + 0x24))();
      pfVar14 = (float *)(**(code **)(*piVar13 + 0x20))();
      fVar7 = fStack_850 * _DAT_00890968 + *pfVar14;
      fVar4 = fStack_84c * _DAT_00890968;
      fVar1 = pfVar14[1];
      fVar8 = fStack_848 * _DAT_00890968 + pfVar14[2];
      if (*(int *)(param_1 + 0x78) == 1) {
        fStack_8a8 = 4.0;
        pfStack_8c0 = (float *)0x3fc00000;
      }
      else {
        fStack_8a8 = 8.0;
        pfStack_8c0 = (float *)0x3f800000;
      }
      pfVar14 = *(float **)(param_1 + 4);
      pfStack_88c = (float *)0x0;
      fVar25 = _DAT_00890d3c;
      if (3 < (int)pfVar22 - (int)pfVar14) {
        piVar13 = *(int **)(param_1 + 8);
        ppfStack_8c8 = (float **)((int)pfVar14 + 2);
        do {
          if (*piVar13 < piVar13[2]) {
            iVar19 = (int)pfVar14 % *piVar13;
          }
          else {
            iVar19 = (piVar13[1] + 1 + (int)pfVar14) % piVar13[2];
          }
          fVar2 = (float)piVar13[iVar19 * 0x10 + 0x10];
          fVar3 = (float)piVar13[iVar19 * 0x10 + 0x12];
          fVar9 = (fVar7 - fVar2) * (float)piVar13[iVar19 * 0x10 + 8] +
                  (fVar8 - fVar3) * (float)piVar13[iVar19 * 0x10 + 9];
          if (_DAT_00890968 <= fVar9) {
            *(float **)(param_1 + 4) = pfVar14;
            fVar2 = (fVar7 - fVar2) * (float)piVar13[iVar19 * 0x10 + 9] -
                    (fVar8 - fVar3) * (float)piVar13[iVar19 * 0x10 + 8];
            fStack_894 = (float)piVar13[iVar19 * 0x10 + 0xc] - fVar2;
            fVar2 = fVar2 - (float)piVar13[iVar19 * 0x10 + 0xd];
            if (fVar2 <= fStack_894) {
              fVar2 = fStack_894;
            }
            fVar3 = fVar2 + (float)pfStack_8c0;
            if (fVar2 + (float)pfStack_8c0 < _DAT_00890968) {
              fVar3 = _DAT_00890968;
            }
            fVar25 = fVar3 + fVar3 + fVar25;
            pfStack_88c = (float *)fVar9;
            if (fStack_8a8 < fVar25) {
              fVar25 = fStack_8a8;
            }
          }
          if (fVar9 < -fVar25) goto LAB_00776bb0;
          if (*piVar13 < piVar13[2]) {
            iVar19 = ((int)ppfStack_8c8 + -1) % *piVar13;
          }
          else {
            iVar19 = (piVar13[1] + 2 + (int)pfVar14) % piVar13[2];
          }
          fVar2 = (float)piVar13[iVar19 * 0x10 + 0x10];
          fVar3 = (float)piVar13[iVar19 * 0x10 + 0x12];
          fVar9 = (fVar7 - fVar2) * (float)piVar13[iVar19 * 0x10 + 8] +
                  (fVar8 - fVar3) * (float)piVar13[iVar19 * 0x10 + 9];
          if (_DAT_00890968 <= fVar9) {
            *(int *)(param_1 + 4) = (int)ppfStack_8c8 + -1;
            fVar2 = (fVar7 - fVar2) * (float)piVar13[iVar19 * 0x10 + 9] -
                    (fVar8 - fVar3) * (float)piVar13[iVar19 * 0x10 + 8];
            fStack_894 = (float)piVar13[iVar19 * 0x10 + 0xc] - fVar2;
            fVar2 = fVar2 - (float)piVar13[iVar19 * 0x10 + 0xd];
            if (fVar2 <= fStack_894) {
              fVar2 = fStack_894;
            }
            fVar3 = fVar2 + (float)pfStack_8c0;
            if (fVar2 + (float)pfStack_8c0 < _DAT_00890968) {
              fVar3 = _DAT_00890968;
            }
            fVar25 = fVar3 + fVar3 + fVar25;
            pfStack_88c = (float *)fVar9;
            if (fStack_8a8 < fVar25) {
              fVar25 = fStack_8a8;
            }
          }
          if (fVar9 < -fVar25) {
            pfVar14 = (float *)((int)pfVar14 + 1);
            goto LAB_00776bb0;
          }
          if (*piVar13 < piVar13[2]) {
            iVar19 = (int)ppfStack_8c8 % *piVar13;
          }
          else {
            iVar19 = (piVar13[1] + 3 + (int)pfVar14) % piVar13[2];
          }
          fVar2 = (float)piVar13[iVar19 * 0x10 + 0x10];
          fVar3 = (float)piVar13[iVar19 * 0x10 + 0x12];
          fVar9 = (fVar7 - fVar2) * (float)piVar13[iVar19 * 0x10 + 8] +
                  (fVar8 - fVar3) * (float)piVar13[iVar19 * 0x10 + 9];
          if (_DAT_00890968 <= fVar9) {
            *(float ***)(param_1 + 4) = ppfStack_8c8;
            fVar2 = (fVar7 - fVar2) * (float)piVar13[iVar19 * 0x10 + 9] -
                    (fVar8 - fVar3) * (float)piVar13[iVar19 * 0x10 + 8];
            fStack_894 = (float)piVar13[iVar19 * 0x10 + 0xc] - fVar2;
            fVar2 = fVar2 - (float)piVar13[iVar19 * 0x10 + 0xd];
            if (fVar2 <= fStack_894) {
              fVar2 = fStack_894;
            }
            fVar3 = fVar2 + (float)pfStack_8c0;
            if (fVar2 + (float)pfStack_8c0 < _DAT_00890968) {
              fVar3 = _DAT_00890968;
            }
            fVar25 = fVar3 + fVar3 + fVar25;
            pfStack_88c = (float *)fVar9;
            if (fStack_8a8 < fVar25) {
              fVar25 = fStack_8a8;
            }
          }
          if (fVar9 < -fVar25) {
            pfVar14 = (float *)((int)pfVar14 + 2);
            goto LAB_00776bb0;
          }
          if (*piVar13 < piVar13[2]) {
            iVar19 = ((int)ppfStack_8c8 + 1) % *piVar13;
          }
          else {
            iVar19 = (piVar13[1] + 4 + (int)pfVar14) % piVar13[2];
          }
          fVar2 = (float)piVar13[iVar19 * 0x10 + 0x10];
          fVar3 = (float)piVar13[iVar19 * 0x10 + 0x12];
          fVar9 = (fVar7 - fVar2) * (float)piVar13[iVar19 * 0x10 + 8] +
                  (fVar8 - fVar3) * (float)piVar13[iVar19 * 0x10 + 9];
          if (_DAT_00890968 <= fVar9) {
            *(int *)(param_1 + 4) = (int)ppfStack_8c8 + 1;
            fVar2 = (fVar7 - fVar2) * (float)piVar13[iVar19 * 0x10 + 9] -
                    (fVar8 - fVar3) * (float)piVar13[iVar19 * 0x10 + 8];
            fStack_894 = (float)piVar13[iVar19 * 0x10 + 0xc] - fVar2;
            fVar2 = fVar2 - (float)piVar13[iVar19 * 0x10 + 0xd];
            if (fVar2 <= fStack_894) {
              fVar2 = fStack_894;
            }
            fVar3 = fVar2 + (float)pfStack_8c0;
            if (fVar2 + (float)pfStack_8c0 < _DAT_00890968) {
              fVar3 = _DAT_00890968;
            }
            fVar25 = fVar3 + fVar3 + fVar25;
            pfStack_88c = (float *)fVar9;
            if (fStack_8a8 < fVar25) {
              fVar25 = fStack_8a8;
            }
          }
          if (fVar9 < -fVar25) {
            pfVar14 = (float *)((int)pfVar14 + 3);
            goto LAB_00776bb0;
          }
          ppfStack_8c8 = (float **)((int)ppfStack_8c8 + 4);
          pfVar14 = pfVar14 + 1;
          pfVar22 = pfStack_884;
        } while ((int)pfVar14 < (int)pfStack_884 + -3);
      }
      if ((int)pfVar14 < (int)pfVar22) {
        piVar13 = *(int **)(param_1 + 8);
        do {
          if (*piVar13 < piVar13[2]) {
            iVar19 = (int)pfVar14 % *piVar13;
          }
          else {
            iVar19 = (piVar13[1] + 1 + (int)pfVar14) % piVar13[2];
          }
          fVar2 = (float)piVar13[iVar19 * 0x10 + 0x10];
          fVar3 = (float)piVar13[iVar19 * 0x10 + 0x12];
          fVar9 = (fVar7 - fVar2) * (float)piVar13[iVar19 * 0x10 + 8] +
                  (fVar8 - fVar3) * (float)piVar13[iVar19 * 0x10 + 9];
          if (_DAT_00890968 <= fVar9) {
            *(float **)(param_1 + 4) = pfVar14;
            fVar2 = (fVar7 - fVar2) * (float)piVar13[iVar19 * 0x10 + 9] -
                    (fVar8 - fVar3) * (float)piVar13[iVar19 * 0x10 + 8];
            fStack_894 = (float)piVar13[iVar19 * 0x10 + 0xc] - fVar2;
            fVar2 = fVar2 - (float)piVar13[iVar19 * 0x10 + 0xd];
            if (fVar2 <= fStack_894) {
              fVar2 = fStack_894;
            }
            fVar3 = fVar2 + (float)pfStack_8c0;
            if (fVar2 + (float)pfStack_8c0 < _DAT_00890968) {
              fVar3 = _DAT_00890968;
            }
            fVar25 = fVar3 + fVar3 + fVar25;
            pfStack_88c = (float *)fVar9;
            if (fStack_8a8 < fVar25) {
              fVar25 = fStack_8a8;
            }
          }
        } while ((-fVar25 <= fVar9) &&
                (pfVar14 = (float *)((int)pfVar14 + 1), (int)pfVar14 < (int)pfStack_884));
      }
LAB_00776bb0:
      piVar13 = *(int **)(param_1 + 8);
      iVar19 = *(int *)(param_1 + 4);
      if (*piVar13 < piVar13[2]) {
        iVar20 = iVar19 % *piVar13;
      }
      else {
        iVar20 = (piVar13[1] + 1 + iVar19) % piVar13[2];
      }
      pfVar22 = (float *)(piVar13 + iVar20 * 0x10 + 4);
      if (iVar19 + 1 < (int)pfStack_884) {
        pfVar15 = (float *)FUN_007698a0(iVar19 + 1);
        fStack_878 = fVar7 - pfVar15[0xc];
        fVar25 = ABS(fStack_878 * pfVar22[4] + (fVar8 - pfVar15[0xe]) * pfVar22[5]) +
                 (float)pfStack_88c;
        if (fVar25 <= _DAT_00890d60) {
          fVar25 = 1.0;
        }
        else {
          fVar25 = _DAT_0089096c - (float)pfStack_88c / fVar25;
        }
        fVar2 = _DAT_0089096c - fVar25;
        *(float *)(param_1 + 0xc) = fVar2 * *pfVar15 + fVar25 * *pfVar22;
        *(float *)(param_1 + 0x10) = fVar25 * pfVar22[1] + fVar2 * pfVar15[1];
        *(float *)(param_1 + 0x14) = fVar25 * pfVar22[2] + fVar2 * pfVar15[2];
        *(float *)(param_1 + 0x18) = fVar2 * pfVar15[3] + fVar25 * pfVar22[3];
        *(float *)(param_1 + 0x1c) = fVar2 * pfVar15[4] + fVar25 * pfVar22[4];
        *(float *)(param_1 + 0x20) = fVar2 * pfVar15[5] + fVar25 * pfVar22[5];
        FUN_00762300((float *)(param_1 + 0x1c));
        *(float *)(param_1 + 0x3c) = fVar2 * pfVar15[0xc] + fVar25 * pfVar22[0xc];
        *(float *)(param_1 + 0x40) = fVar25 * pfVar22[0xd] + fVar2 * pfVar15[0xd];
        *(float *)(param_1 + 0x44) = fVar2 * pfVar15[0xe] + fVar25 * pfVar22[0xe];
        *(float *)(param_1 + 0x2c) = (pfVar15[8] - pfVar22[8]) * fVar25 + pfVar22[8];
        *(float *)(param_1 + 0x30) = (pfVar15[9] - pfVar22[9]) * fVar25 + pfVar22[9];
        pfStack_858 = (float *)(*(ushort *)((int)pfVar15 + 0x3e) & 0x7fff);
        uVar17 = *(ushort *)((int)pfVar22 + 0x3e) & 0x7fff;
        if ((float *)uVar17 == pfStack_858) {
          *(ushort *)(param_1 + 0x4a) =
               *(ushort *)(param_1 + 0x4a) ^ (*(ushort *)(param_1 + 0x4a) ^ (ushort)uVar17) & 0x7fff
          ;
          *(ushort *)(param_1 + 0x4a) =
               (*(ushort *)((int)pfVar22 + 0x3e) ^ *(ushort *)(param_1 + 0x4a)) & 0x7fff ^
               *(ushort *)((int)pfVar22 + 0x3e);
          FUN_00764c20(((float)(int)*(short *)(pfVar15 + 0xf) * _DAT_00899ddc -
                       (float)(int)*(short *)(pfVar22 + 0xf) * _DAT_00899ddc) * fVar25 +
                       (float)(int)*(short *)(pfVar22 + 0xf) * _DAT_00899ddc);
        }
        else {
          fVar2 = (float)*(ushort *)((int)pfStack_858 * 0x16 + 4 + DAT_009b38c0) * _DAT_009b3a14;
          fVar3 = (float)*(ushort *)(uVar17 * 0x16 + 4 + DAT_009b38c0) * _DAT_009b3a14;
          fVar9 = ((float)(int)*(short *)(pfVar22 + 0xf) * _DAT_00899ddc - _DAT_0089096c) * fVar3;
          fVar9 = ((float)(int)*(short *)(pfVar15 + 0xf) * _DAT_00899ddc * fVar2 - fVar9) * fVar25 +
                  fVar9;
          if (_DAT_00890968 <= fVar9) {
            *(ushort *)(param_1 + 0x4a) =
                 *(ushort *)(param_1 + 0x4a) ^
                 (*(ushort *)(param_1 + 0x4a) ^ (ushort)pfStack_858) & 0x7fff;
            *(ushort *)(param_1 + 0x4a) =
                 (*(ushort *)((int)pfVar15 + 0x3e) ^ *(ushort *)(param_1 + 0x4a)) & 0x7fff ^
                 *(ushort *)((int)pfVar15 + 0x3e);
            FUN_00764c20(fVar9 / fVar2);
          }
          else {
            *(ushort *)(param_1 + 0x4a) =
                 *(ushort *)(param_1 + 0x4a) ^
                 (*(ushort *)(param_1 + 0x4a) ^ (ushort)uVar17) & 0x7fff;
            *(ushort *)(param_1 + 0x4a) =
                 (*(ushort *)((int)pfVar22 + 0x3e) ^ *(ushort *)(param_1 + 0x4a)) & 0x7fff ^
                 *(ushort *)((int)pfVar22 + 0x3e);
            FUN_00764c20((fVar9 + fVar3) / fVar3);
          }
        }
      }
      else {
        *(float *)(param_1 + 0x1c) = pfVar22[4];
        *(float *)(param_1 + 0x20) = pfVar22[5];
        *(float *)(param_1 + 0x2c) = pfVar22[8];
        *(float *)(param_1 + 0x30) = pfVar22[9];
        *(ushort *)(param_1 + 0x4a) =
             *(ushort *)(param_1 + 0x4a) ^
             (*(ushort *)(param_1 + 0x4a) ^ *(ushort *)((int)pfVar22 + 0x3e)) & 0x7fff;
        *(ushort *)(param_1 + 0x4a) =
             (*(ushort *)((int)pfVar22 + 0x3e) ^ *(ushort *)(param_1 + 0x4a)) & 0x7fff ^
             *(ushort *)((int)pfVar22 + 0x3e);
        *(float *)(param_1 + 0xc) = (float)pfStack_88c * pfVar22[4] + *pfVar22;
        *(float *)(param_1 + 0x10) = (float)pfStack_88c * pfVar22[5] + pfVar22[1];
        *(float *)(param_1 + 0x14) = (float)pfStack_88c * pfVar22[4] + pfVar22[2];
        *(float *)(param_1 + 0x18) = (float)pfStack_88c * pfVar22[5] + pfVar22[3];
        *(float *)(param_1 + 0x3c) = (float)pfStack_88c * pfVar22[4] + pfVar22[0xc];
        *(float *)(param_1 + 0x44) = (float)pfStack_88c * pfVar22[5] + pfVar22[0xe];
        *(float *)(param_1 + 0x40) = pfVar22[0xd];
      }
      fStack_878 = fVar7 - *(float *)(param_1 + 0x3c);
      fVar25 = fStack_878 * *(float *)(param_1 + 0x20) -
               (fVar8 - *(float *)(param_1 + 0x44)) * *(float *)(param_1 + 0x1c);
      fVar2 = *(float *)(param_1 + 0x2c) - fVar25;
      fVar3 = fVar25 - *(float *)(param_1 + 0x30);
      if (fVar2 < fVar3) {
        fVar2 = fVar3;
      }
      *(float *)(param_1 + 0x4c) = fVar2 + *(float *)(param_1 + 0x88);
      if ((int)pfVar14 < (int)pfStack_884) {
        pfVar22 = afStack_844 + (int)pfStack_884 * 0x10;
        for (iVar19 = 0x10; iVar19 != 0; iVar19 = iVar19 + -1) {
          *pfVar22 = 0.0;
          pfVar22 = pfVar22 + 1;
        }
        fStack_894 = (float)((int)pfVar14 * 0x40);
        pfStack_88c = afStack_844 + (int)pfVar14 * 0x10;
        ppfStack_8c8 = (float **)0x0;
        bVar10 = false;
        pfStack_8c0 = pfVar14;
        do {
          piVar13 = *(int **)(param_1 + 8);
          if (*piVar13 < piVar13[2]) {
            iVar19 = (int)pfStack_8c0 % *piVar13;
          }
          else {
            iVar19 = (piVar13[1] + 1 + (int)pfStack_8c0) % piVar13[2];
          }
          pfVar22 = (float *)(iVar19 * 0x40 + 0x10 + *(int *)(param_1 + 8));
          pfVar15 = pfStack_88c;
          for (iVar20 = 0x10; iVar20 != 0; iVar20 = iVar20 + -1) {
            *pfVar15 = *pfVar22;
            pfVar22 = pfVar22 + 1;
            pfVar15 = pfVar15 + 1;
          }
          pfStack_8c0 = (float *)((int)pfStack_8c0 + 1);
          pfStack_88c = pfStack_88c + 0x10;
        } while ((int)pfStack_8c0 < (int)pfStack_884);
        pfStack_88c = (float *)*pfStack_880;
        fStack_888 = pfStack_880[2];
        pfStack_86c = pfVar14;
        pfStack_858 = pfVar14;
        if (unaff_retaddr != '\0') {
          FUN_00775be0(afStack_844 + (int)pfVar14 * 0x10,(int)pfStack_884 - (int)pfVar14,fVar25,
                       (float)pfStack_88c * *(float *)(param_1 + 0x20) -
                       fStack_888 * *(float *)(param_1 + 0x1c));
        }
        fVar7 = *pfStack_880 * _DAT_00890968 + fVar7;
        fVar1 = pfStack_880[1] * _DAT_00890968 + fVar4 + fVar1;
        fVar8 = pfStack_880[2] * _DAT_00890968 + fVar8;
        FUN_0045f800(param_1 + 0x68,param_1 + 0x70);
        pfVar22 = (float *)((int)afStack_844 + (int)fStack_894 + 8);
        pfVar15 = pfStack_884;
        pfVar21 = pfVar14;
        pfVar23 = pfStack_86c;
        pfVar26 = pfVar14;
        pfStack_8b0 = pfVar14;
        do {
          fStack_894 = pfVar22[-2];
          fStack_890 = pfVar22[-1];
          pfVar5 = (float *)(fStack_894 - fVar7);
          pfStack_864 = (float *)*pfVar22;
          fStack_860 = pfVar22[1];
          fVar4 = fStack_890 - fVar8;
          pfVar6 = (float *)((float)pfStack_864 - fVar7);
          fVar25 = fStack_860 - fVar8;
          if ((int)pfVar21 < (int)pfVar15) {
            FUN_0045f850(param_1 + 0x68,param_1 + 0x70,&fStack_894);
            FUN_0045f850(param_1 + 0x68,param_1 + 0x70,&pfStack_864);
            pfVar15 = pfStack_884;
          }
          pfVar11 = pfStack_8b0;
          if (pfVar21 != pfVar14) {
            pfVar16 = (float *)(param_1 + 0x98);
            if (pfVar21 != pfVar15) {
              pfVar16 = pfVar22 + 10;
            }
            fStack_878 = *pfVar16 - fVar7;
            if (pfVar21 != pfVar15) {
              if (fVar4 * (float)pfStack_86c - fStack_868 * (float)pfVar5 < _DAT_00890968) {
                pfVar26 = pfVar21;
                pfStack_86c = pfVar5;
                fStack_868 = fVar4;
              }
              if (_DAT_00890968 < fVar25 * (float)pfStack_880 - fStack_87c * (float)pfVar6) {
                pfStack_880 = pfVar6;
                fStack_87c = fVar25;
                pfStack_858 = pfVar21;
              }
            }
            pfVar6 = pfStack_880;
            fVar25 = fStack_87c;
            pfVar5 = pfStack_86c;
            fVar4 = fStack_868;
            if (_DAT_00890968 <= fStack_868 * fStack_878 - (pfVar16[2] - fVar8) * (float)pfStack_86c
               ) {
              pfVar11 = pfVar21;
              if (_DAT_00890968 <
                  fStack_87c * fStack_878 - (pfVar16[2] - fVar8) * (float)pfStack_880) {
                ppfStack_8c8 = &pfStack_880;
                bVar10 = false;
                pfVar23 = pfStack_858;
                pfVar11 = pfStack_8b0;
              }
            }
            else {
              ppfStack_8c8 = &pfStack_86c;
              bVar10 = true;
              pfVar23 = pfVar26;
            }
          }
          fStack_868 = fVar4;
          pfStack_86c = pfVar5;
          fStack_87c = fVar25;
          pfStack_880 = pfVar6;
          pfStack_8b0 = pfVar11;
          if (_DAT_00890968 < fStack_87c * (float)pfStack_86c - fStack_868 * (float)pfStack_880)
          break;
          pfVar21 = (float *)((int)pfVar21 + 1);
          pfVar22 = pfVar22 + 0x10;
        } while ((int)pfVar21 <= (int)pfVar15);
        if (((int)pfStack_8b0 < (int)pfVar15) && (ppfStack_8c8 != (float **)0x0)) {
          pfStack_864 = *ppfStack_8c8;
          fStack_860 = afStack_810[(int)pfVar23 * 0x10] - fVar1;
          uVar17 = auStack_81c[(int)pfVar23 * 0x10];
          pfVar22 = (float *)(param_1 + 0x158);
          fStack_870 = (float)ppfStack_8c8[1] + fVar8;
          *pfVar22 = (float)pfStack_864 + fVar7;
          *(float *)(param_1 + 0x15c) = fStack_860 + fVar1;
          *(float *)(param_1 + 0x160) = fStack_870;
          iVar19 = 0;
          uVar18 = uVar17 & 1;
          if (uVar18 == 0) {
            iVar19 = (uint)!bVar10 * 2 + -1;
          }
          *(int *)(param_1 + 0x58) = iVar19;
          if (uVar18 == 0) {
            iVar20 = 0;
          }
          else {
            iVar20 = (uint)!bVar10 * 2 + -1;
          }
          *(int *)(param_1 + 0x5c) = iVar20;
          if ((iVar20 == 0) || ((uVar17 & 2) == 0)) {
            uVar12 = 0;
          }
          else {
            uVar12 = 1;
          }
          *(undefined1 *)(param_1 + 0x60) = uVar12;
          if ((*(char *)(param_1 + 0x55) == '\0') || ((iVar19 == 0 && (iVar20 == 0)))) {
            *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_1 + 0x98);
            *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_1 + 0x9c);
            *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_1 + 0xa0);
          }
          else {
            fVar1 = *pfVar22;
            fVar4 = *(float *)(param_1 + 0x160);
            fVar25 = ABS(afStack_824[(int)pfVar23 * 0x10 + 1] - afStack_824[(int)pfVar23 * 0x10]);
            fVar7 = fVar1 - fVar7;
            pfStack_874 = (float *)(fVar4 - fVar8);
            fStack_878 = fVar7;
            pfStack_86c = pfStack_874;
            fStack_85c = fStack_870;
            FUN_0045f3c0(&pfStack_864,&fStack_878);
            fStack_878 = fVar1 - *(float *)(param_1 + 0x98);
            pfStack_880 = pfStack_864;
            fStack_87c = fStack_860;
            pfStack_874 = (float *)(fVar4 - *(float *)(param_1 + 0xa0));
            FUN_0045f3c0(&pfStack_864,&fStack_878);
            pfStack_858 = pfStack_864;
            fStack_854 = fStack_860;
            fVar7 = SQRT((float)pfStack_86c * (float)pfStack_86c + fVar7 * fVar7);
            fStack_878 = (float)pfStack_880 + (float)pfStack_864;
            pfStack_874 = (float *)(fStack_87c + fStack_860);
            pfStack_864 = (float *)((float)pfStack_864 * fVar7 + fVar1);
            fStack_860 = fVar4 + fStack_860 * fVar7;
            FUN_0045f3c0(&pfStack_86c,&fStack_878);
            fVar7 = fStack_868;
            pfVar14 = pfStack_86c;
            fVar1 = ((float)pfStack_864 - fVar1) * (float)pfStack_86c +
                    (fStack_860 - fVar4) * fStack_868;
            ppfStack_8c8 = (float **)fVar25;
            if (fVar1 < fVar25) {
              ppfStack_8c8 = (float **)fVar1;
            }
            if (*(int *)(param_1 + 0x5c) != 0) {
              fVar1 = fStack_87c * fStack_888 + (float)pfStack_880 * (float)pfStack_88c;
              fVar24 = (float10)FUN_00401ae0(fVar1 - *(float *)(param_1 + 100),0,fVar1 + fVar1);
              fVar24 = (fVar24 + fVar24) * (float10)(float)ppfStack_8c8;
              ppfStack_8c8 = (float **)(float)fVar24;
              if ((float10)fVar25 <= fVar24) {
                ppfStack_8c8 = (float **)fVar25;
              }
            }
            *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_1 + 0x15c);
            *(float *)(param_1 + 0x164) = (float)pfVar14 * (float)ppfStack_8c8 + *pfVar22;
            *(float *)(param_1 + 0x16c) = fVar7 * (float)ppfStack_8c8 + *(float *)(param_1 + 0x160);
          }
        }
        if (*(int *)(param_1 + 0x5c) == 0) {
          *(undefined4 *)(param_1 + 100) = 0;
          *(undefined1 *)(param_1 + 0x60) = 0;
        }
      }
    }
  }
  return;
}

