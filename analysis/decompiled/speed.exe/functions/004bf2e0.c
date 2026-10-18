/* speed.exe 004bf2e0 FUN_004bf2e0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 0045f340 FUN_0045f340
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004bf2e0(int param_1)

{
  uint *puVar1;
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
  float *pfVar14;
  int iVar15;
  undefined4 uVar16;
  float10 fVar17;
  
  if ((((DAT_00911fe8 & 0x3b) == 0) && ((DAT_00911fe8 & 0x34800) == 0)) &&
     (pfVar14 = *(float **)(param_1 + 0x30), pfVar14 != (float *)0x0)) {
    iVar15 = *(int *)(param_1 + 0x44);
    fVar2 = *pfVar14;
    fVar3 = (float)(&DAT_00914520)[iVar15 * 4];
    fVar4 = pfVar14[1];
    fVar5 = (float)(&DAT_00914524)[iVar15 * 4];
    fVar6 = pfVar14[2];
    fVar7 = (float)(&DAT_00914528)[iVar15 * 4];
    fVar8 = *pfVar14;
    fVar9 = (float)(&DAT_00914540)[iVar15 * 4];
    fVar10 = pfVar14[1];
    fVar11 = (float)(&DAT_00914544)[iVar15 * 4];
    fVar12 = pfVar14[2];
    fVar13 = (float)(&DAT_00914548)[iVar15 * 4];
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x34);
    fVar17 = (float10)FUN_0045f340(&DAT_00914560 + iVar15 * 4,*(undefined4 *)(param_1 + 0x28));
    *(float *)(param_1 + 0x34) = (float)fVar17;
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x3c);
    fVar17 = (float10)FUN_0045f340(&DAT_00914430 + *(int *)(param_1 + 0x44) * 4,
                                   *(undefined4 *)(param_1 + 0x28));
    *(float *)(param_1 + 0x3c) = (float)fVar17;
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x54);
    fVar3 = SQRT((fVar2 - fVar3) * (fVar2 - fVar3) +
                 (fVar6 - fVar7) * (fVar6 - fVar7) + (fVar4 - fVar5) * (fVar4 - fVar5));
    *(float *)(param_1 + 0x4c) = fVar3;
    fVar2 = SQRT((fVar8 - fVar9) * (fVar8 - fVar9) +
                 (fVar10 - fVar11) * (fVar10 - fVar11) + (fVar12 - fVar13) * (fVar12 - fVar13));
    *(float *)(param_1 + 0x54) = fVar2;
    if (*(float *)(param_1 + 0x34) < *(float *)(param_1 + 0x38)) {
      *(float *)(param_1 + 0x4c) = fVar3 * _DAT_00890da8;
    }
    if (fVar17 < (float10)*(float *)(param_1 + 0x40)) {
      *(float *)(param_1 + 0x54) = fVar2 * _DAT_00890da8;
    }
    if (((*(float *)(param_1 + 0x50) < _DAT_00890968) &&
        (_DAT_00890968 < *(float *)(param_1 + 0x4c))) ||
       ((_DAT_00890968 < *(float *)(param_1 + 0x50) && (*(float *)(param_1 + 0x4c) < _DAT_00890968))
       )) {
      puVar1 = (uint *)(*(int *)(param_1 + 0xc) + 0x3c);
      *puVar1 = *puVar1 | 0x80000000;
    }
    if (((*(float *)(param_1 + 0x58) < _DAT_00890968) &&
        (_DAT_00890968 < *(float *)(param_1 + 0x54))) ||
       ((_DAT_00890968 < *(float *)(param_1 + 0x58) && (*(float *)(param_1 + 0x54) < _DAT_00890968))
       )) {
      puVar1 = (uint *)(*(int *)(param_1 + 0xc) + 0x3c);
      *puVar1 = *puVar1 | 0x40000000;
    }
    uVar16 = FUN_007c4b80();
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x34) = uVar16;
    uVar16 = FUN_007c4b80();
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x38) = uVar16;
  }
  return;
}

