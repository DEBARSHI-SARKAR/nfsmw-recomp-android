/* speed.exe 004bd650 FUN_004bd650; analysis pseudocode, not buildable source.
 * calls 004b0720 FUN_004b0720
 * calls 006269b0 FUN_006269b0
 * calls 007c4b80 FUN_007c4b80
 * calls 004e42a0 FUN_004e42a0
 * calls 00454810 FUN_00454810
 * calls 00653790 FUN_00653790
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004bd650(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  bool bVar15;
  float *pfVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined4 uVar20;
  int iVar21;
  int iVar22;
  float10 fVar23;
  float10 fVar24;
  float10 fVar25;
  int iStack_50;
  
  (**(code **)(**(int **)(param_1 + 0x28) + 0x4c))();
  FUN_004b0720();
  iVar17 = *(int *)(param_1 + 0x18);
  fVar13 = *(float *)(*(int *)(iVar17 + 0xd8) + 0x78);
  fVar12 = ABS(*(float *)(param_1 + 0x90) + _DAT_00890bf8);
  bVar15 = true;
  fVar13 = _DAT_0089096c - (fVar13 - fVar12) / fVar13;
  *(float *)(param_1 + 0xd0) = fVar13;
  fVar14 = _DAT_00890968;
  if ((_DAT_00890968 < fVar13) && (fVar14 = fVar13, _DAT_0089096c < fVar13)) {
    fVar14 = _DAT_0089096c;
  }
  *(float *)(param_1 + 0xd0) = fVar14;
  fVar13 = _DAT_0089096c -
           (*(float *)(*(int *)(iVar17 + 0xd8) + 100) - fVar12) /
           *(float *)(*(int *)(iVar17 + 0xd8) + 100);
  *(float *)(param_1 + 0xd4) = fVar13;
  fVar12 = _DAT_00890968;
  if ((_DAT_00890968 < fVar13) && (fVar12 = fVar13, _DAT_0089096c < fVar13)) {
    fVar12 = _DAT_0089096c;
  }
  *(float *)(param_1 + 0xd4) = fVar12;
  if (*(char *)(*(int *)(iVar17 + 0x5c) + 0xb4) == '\0') {
    if (((*(int *)(*(int *)(*(int *)(param_1 + 0x14) + 0x34) + 0x1ec) != 0) ||
        (iVar18 = *(int *)(*(int *)(param_1 + 0x2c) + 0x38), iVar18 == 3)) || (iVar18 != 0)) {
      switch(*(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x38)) {
      default:
        goto switchD_004bda6f_caseD_1;
      case 2:
        goto switchD_004bda6f_caseD_2;
      }
    }
    iVar18 = *(int *)(*(int *)(param_1 + 0x30) + 0x84);
    if (iVar18 == 0) {
      bVar15 = true;
    }
    else if (iVar18 == 1) {
switchD_004bda6f_caseD_2:
      bVar15 = false;
    }
  }
switchD_004bda6f_caseD_1:
  iVar17 = *(int *)(iVar17 + 0xd8);
  fVar13 = *(float *)(iVar17 + 0x70);
  fVar1 = *(float *)(iVar17 + 0x68);
  fVar2 = *(float *)(iVar17 + 0x68);
  fVar3 = *(float *)(iVar17 + 0x90);
  fVar4 = *(float *)(iVar17 + 0x7c);
  fVar5 = *(float *)(iVar17 + 0x7c);
  fVar6 = *(float *)(iVar17 + 0x88);
  fVar7 = *(float *)(iVar17 + 0x8c);
  fVar8 = *(float *)(iVar17 + 0x8c);
  fVar9 = *(float *)(iVar17 + 0x80);
  fVar10 = *(float *)(iVar17 + 0x48);
  fVar11 = *(float *)(iVar17 + 0x48);
  fVar23 = (float10)FUN_00653790(*(undefined4 *)(param_1 + 0xb8));
  fVar25 = (float10)_DAT_0089096c;
  fVar24 = (float10)FUN_00653790(*(undefined4 *)(param_1 + 0xb8));
  fVar6 = (float)(fVar24 * (float10)((fVar6 - fVar7) * fVar12 + fVar8) +
                 (float10)(float)(fVar25 - fVar23));
  fVar25 = (float10)FUN_00653790(*(undefined4 *)(param_1 + 0xb8));
  iVar17 = *(int *)(*(int *)(param_1 + 0x18) + 0xd8);
  fVar12 = (float)(fVar25 * (float10)((fVar9 - fVar10) * fVar12 + fVar11));
  pfVar16 = (float *)FUN_00454810(0x38afe02e,0);
  if (pfVar16 == (float *)0x0) {
    pfVar16 = (float *)FUN_006269b0(4);
  }
  fVar7 = (*(float *)(iVar17 + 0x6c) - *(float *)(iVar17 + 0x6c)) * *(float *)(param_1 + 0xd4) +
          *pfVar16;
  iVar17 = FUN_00454810(0xe3836473,0);
  if (iVar17 == 0) {
    FUN_006269b0(4);
  }
  fVar6 = (((fVar13 - fVar1) * fVar14 + fVar2) - fVar6) * 0.0 + fVar6;
  fVar12 = -fVar12 * 0.0 + fVar12;
  fVar7 = (((fVar3 - fVar4) * fVar14 + fVar5) - fVar7) * 0.0 + fVar7;
  iVar17 = FUN_007c4b80();
  *(undefined1 *)(param_1 + 0x80) = 0;
  pfVar16 = (float *)(param_1 + 0xc0);
  if (bVar15) {
    fVar13 = *pfVar16 + _DAT_00895074;
    if ((fVar6 <= fVar13) && (fVar13 = *pfVar16 - _DAT_00895074, fVar13 <= fVar6)) {
      fVar13 = fVar6;
    }
    *pfVar16 = fVar13;
    fVar13 = *(float *)(param_1 + 0xc4) + _DAT_00895074;
    if ((fVar7 <= fVar13) && (fVar13 = *(float *)(param_1 + 0xc4) - _DAT_00895074, fVar13 <= fVar7))
    {
      fVar13 = fVar7;
    }
    *(float *)(param_1 + 0xc4) = fVar13;
    fVar13 = *(float *)(param_1 + 200) + _DAT_00895074;
    if ((fVar12 <= fVar13) && (fVar13 = *(float *)(param_1 + 200) - _DAT_00895074, fVar13 <= fVar12)
       ) {
      fVar13 = fVar12;
    }
    *(float *)(param_1 + 200) = fVar13;
    iVar18 = *(int *)(param_1 + 0xcc) + 6000;
    if (iVar18 < iVar17) {
      *(int *)(param_1 + 0xcc) = iVar18;
    }
    else {
      iVar18 = *(int *)(param_1 + 0xcc) + -6000;
      if (iVar17 < iVar18) {
        iVar17 = iVar18;
      }
      *(int *)(param_1 + 0xcc) = iVar17;
    }
  }
  else {
    *pfVar16 = fVar6;
    *(float *)(param_1 + 0xc4) = fVar7;
    *(float *)(param_1 + 200) = fVar12;
    *(int *)(param_1 + 0xcc) = iVar17;
  }
  iVar17 = FUN_004e42a0(7,*(undefined4 *)(param_1 + 0xcc),1);
  *(float *)(param_1 + 0x7c) = (float)iVar17;
  iVar17 = *(int *)(*(int *)(param_1 + 0x28) + 0x134);
  iStack_50 = *(int *)(param_1 + 0xcc);
  if (iVar17 <= *(int *)(param_1 + 0xcc)) {
    iStack_50 = iVar17;
  }
  *(float *)(param_1 + 0x7c) = (float)iStack_50;
  FUN_007c4b80();
  iVar17 = FUN_007c4b80();
  iVar18 = FUN_007c4b80();
  iVar19 = FUN_007c4b80();
  if (bVar15) {
    iVar22 = *(int *)(param_1 + 0x38) + 7000;
    if ((iVar17 <= iVar22) &&
       (iVar21 = *(int *)(param_1 + 0x38) + -7000, iVar22 = iVar17, iVar17 < iVar21)) {
      iVar22 = iVar21;
    }
    iVar17 = *(int *)(param_1 + 0x3c) + 7000;
    *(int *)(param_1 + 0x38) = iVar22;
    if ((iVar18 <= iVar17) && (iVar17 = *(int *)(param_1 + 0x3c) + -7000, iVar17 <= iVar18)) {
      iVar17 = iVar18;
    }
    *(int *)(param_1 + 0x3c) = iVar17;
    iVar17 = *(int *)(param_1 + 0x40) + 7000;
    if ((iVar19 <= iVar17) &&
       (iVar18 = *(int *)(param_1 + 0x40) + -7000, iVar17 = iVar19, iVar19 < iVar18)) {
      iVar17 = iVar18;
    }
  }
  else {
    *(int *)(param_1 + 0x38) = iVar17;
    *(int *)(param_1 + 0x3c) = iVar18;
    iVar17 = iVar19;
  }
  *(int *)(param_1 + 0x40) = iVar17;
  uVar20 = FUN_007c4b80();
  *(undefined4 *)(param_1 + 0x74) = uVar20;
  return;
}

