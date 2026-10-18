/* speed.exe 004bd160 FUN_004bd160; analysis pseudocode, not buildable source.
 * calls 004b0720 FUN_004b0720
 * calls 006269b0 FUN_006269b0
 * calls 007c4b80 FUN_007c4b80
 * calls 004e42a0 FUN_004e42a0
 * calls 00454810 FUN_00454810
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004bd160(int param_1)

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
  bool bVar10;
  float *pfVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  
  (**(code **)(**(int **)(param_1 + 0x28) + 0x4c))();
  FUN_004b0720();
  iVar12 = *(int *)(param_1 + 0x18);
  fVar6 = *(float *)(*(int *)(iVar12 + 0xd8) + 0x78);
  fVar8 = ABS(*(float *)(param_1 + 0x90) + _DAT_00890bf8);
  bVar10 = true;
  fVar6 = _DAT_0089096c - (fVar6 - fVar8) / fVar6;
  *(float *)(param_1 + 0xd0) = fVar6;
  fVar9 = _DAT_00890968;
  if ((_DAT_00890968 < fVar6) && (fVar9 = fVar6, _DAT_0089096c < fVar6)) {
    fVar9 = _DAT_0089096c;
  }
  *(float *)(param_1 + 0xd0) = fVar9;
  fVar6 = _DAT_0089096c -
          (*(float *)(*(int *)(iVar12 + 0xd8) + 100) - fVar8) /
          *(float *)(*(int *)(iVar12 + 0xd8) + 100);
  *(float *)(param_1 + 0xd4) = fVar6;
  fVar8 = _DAT_00890968;
  if ((_DAT_00890968 < fVar6) && (fVar8 = fVar6, _DAT_0089096c < fVar6)) {
    fVar8 = _DAT_0089096c;
  }
  *(float *)(param_1 + 0xd4) = fVar8;
  if (((*(int *)(*(int *)(*(int *)(param_1 + 0x14) + 0x34) + 0x1ec) == 0) &&
      (iVar14 = *(int *)(*(int *)(param_1 + 0x2c) + 0x38), iVar14 != 3)) && (iVar14 == 0)) {
    iVar14 = *(int *)(*(int *)(param_1 + 0x30) + 0x84);
    if ((iVar14 == 0) || (iVar14 != 1)) goto LAB_004bd2ec;
  }
  else {
    iVar14 = *(int *)(*(int *)(param_1 + 0x2c) + 0x38);
    if ((iVar14 != 2) && ((iVar14 != 7 || (*(char *)(iVar12 + 0x68) == '\0')))) goto LAB_004bd2ec;
  }
  bVar10 = false;
LAB_004bd2ec:
  iVar12 = *(int *)(iVar12 + 0xd8);
  fVar6 = *(float *)(iVar12 + 0x70);
  fVar1 = *(float *)(iVar12 + 0x68);
  fVar2 = *(float *)(iVar12 + 0x68);
  fVar3 = *(float *)(iVar12 + 0x90);
  fVar4 = *(float *)(iVar12 + 0x7c);
  fVar5 = *(float *)(iVar12 + 0x7c);
  fVar8 = (*(float *)(iVar12 + 0x88) - *(float *)(iVar12 + 0x8c)) * fVar8 +
          *(float *)(iVar12 + 0x8c);
  pfVar11 = (float *)FUN_00454810(0x38afe02e,0);
  if (pfVar11 == (float *)0x0) {
    pfVar11 = (float *)FUN_006269b0(4);
  }
  fVar7 = (*(float *)(iVar12 + 0x6c) - *(float *)(iVar12 + 0x6c)) * *(float *)(param_1 + 0xd4) +
          *pfVar11;
  iVar12 = FUN_00454810(0xe3836473,0);
  if (iVar12 == 0) {
    FUN_006269b0(4);
  }
  fVar8 = (((fVar6 - fVar1) * fVar9 + fVar2) - fVar8) * 0.0 + fVar8;
  fVar6 = _DAT_00890968 * 0.0;
  fVar7 = (((fVar3 - fVar4) * fVar9 + fVar5) - fVar7) * 0.0 + fVar7;
  iVar12 = FUN_007c4b80();
  if (bVar10) {
    fVar9 = fVar8 + _DAT_00895074;
    if ((fVar8 <= fVar8 + _DAT_00895074) &&
       (fVar9 = fVar8 - _DAT_00895074, fVar8 - _DAT_00895074 <= fVar8)) {
      fVar9 = fVar8;
    }
    *(float *)(param_1 + 0xc0) = fVar9;
    fVar8 = fVar7 + _DAT_00895074;
    if ((fVar7 <= fVar7 + _DAT_00895074) &&
       (fVar8 = fVar7 - _DAT_00895074, fVar7 - _DAT_00895074 <= fVar7)) {
      fVar8 = fVar7;
    }
    *(float *)(param_1 + 0xc4) = fVar8;
    fVar8 = fVar6 + _DAT_00895074;
    if ((fVar6 <= fVar6 + _DAT_00895074) &&
       (fVar8 = fVar6 - _DAT_00895074, fVar6 - _DAT_00895074 <= fVar6)) {
      fVar8 = fVar6;
    }
    iVar14 = iVar12 + 6000;
    *(float *)(param_1 + 200) = fVar8;
    if ((iVar14 < iVar12) || (iVar14 = iVar12 + -6000, iVar12 < iVar14)) {
      iVar12 = iVar14;
    }
    *(int *)(param_1 + 0xcc) = iVar12;
  }
  else {
    *(float *)(param_1 + 0xc0) = fVar8;
    *(float *)(param_1 + 0xc4) = fVar7;
    *(float *)(param_1 + 200) = fVar6;
    *(int *)(param_1 + 0xcc) = iVar12;
  }
  uVar13 = FUN_007c4b80(1);
  iVar12 = FUN_004e42a0(7,uVar13);
  *(float *)(param_1 + 0x7c) = (float)(25000 - iVar12);
  iVar12 = FUN_007c4b80();
  iVar14 = FUN_007c4b80();
  iVar15 = FUN_007c4b80();
  if (bVar10) {
    iVar17 = *(int *)(param_1 + 0x38) + 7000;
    if ((iVar12 <= iVar17) &&
       (iVar16 = *(int *)(param_1 + 0x38) + -7000, iVar17 = iVar12, iVar12 < iVar16)) {
      iVar17 = iVar16;
    }
    iVar12 = *(int *)(param_1 + 0x3c) + 7000;
    *(int *)(param_1 + 0x38) = iVar17;
    if ((iVar14 <= iVar12) && (iVar12 = *(int *)(param_1 + 0x3c) + -7000, iVar12 <= iVar14)) {
      iVar12 = iVar14;
    }
    *(int *)(param_1 + 0x3c) = iVar12;
    iVar12 = *(int *)(param_1 + 0x40) + 7000;
    if ((iVar15 <= iVar12) &&
       (iVar14 = *(int *)(param_1 + 0x40) + -7000, iVar12 = iVar15, iVar15 < iVar14)) {
      iVar12 = iVar14;
    }
  }
  else {
    *(int *)(param_1 + 0x38) = iVar12;
    *(int *)(param_1 + 0x3c) = iVar14;
    iVar12 = iVar15;
  }
  *(int *)(param_1 + 0x40) = iVar12;
  uVar13 = FUN_007c4b80();
  *(undefined4 *)(param_1 + 0x74) = uVar13;
  return;
}

