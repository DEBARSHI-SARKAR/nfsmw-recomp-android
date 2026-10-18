/* speed.exe 0069a5d0 FUN_0069a5d0; analysis pseudocode, not buildable source.
 * calls 005ca910 FUN_005ca910
 * calls 004876f0 FUN_004876f0
 * calls 00487690 FUN_00487690
 * calls 0048b5a0 FUN_0048b5a0
 * calls 0048c100 FUN_0048c100
 * calls 007c8f30 __allshl
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0069a5d0(int param_1,float param_2)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  ushort uVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  float *pfVar8;
  undefined4 uVar9;
  float *pfVar10;
  uint uVar11;
  undefined *puVar12;
  bool bVar13;
  float10 fVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  undefined1 *puVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  undefined4 *puStack_1d4;
  undefined *puStack_1d0;
  int iStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b0;
  undefined1 auStack_1ac [12];
  undefined4 auStack_1a0 [16];
  undefined1 auStack_160 [176];
  undefined1 auStack_b0 [176];
  
  piVar1 = (int *)(param_1 + 0x48);
  iVar7 = (**(code **)(*(int *)(param_1 + 0x48) + 0xc))();
  iVar5 = **(int **)(param_1 + 0x60);
  puStack_1d4 = &DAT_009378d0 + iVar7 * 6;
  iStack_1cc = iVar5;
  FUN_00487690();
  fVar14 = (float10)(**(code **)(*piVar1 + 0x14))();
  if (fVar14 < (float10)_DAT_008910f0) {
    fVar14 = (float10)_DAT_008910f0;
  }
  fStack_1c4 = (float)fVar14;
  fStack_1c0 = (float)fVar14;
  fStack_1d8 = (float)fVar14;
  fStack_1bc = (float)fVar14;
  uVar4 = *(ushort *)(iVar5 + 0x1e);
  if ((short)uVar4 < 0) {
    pfVar8 = (float *)(**(code **)(*piVar1 + 0x24))();
    fStack_1f0 = pfVar8[1];
    fStack_1e8 = *pfVar8 * param_2;
    fStack_1e4 = fStack_1f0 * param_2;
    pfVar10 = &fStack_1e8;
    fStack_1ec = pfVar8[2] * param_2;
    uVar18 = 2;
    pfVar8 = &fStack_1c4;
    fStack_1e0 = fStack_1ec;
    uVar9 = (**(code **)(*piVar1 + 0x20))(pfVar8,2,pfVar10);
    puVar16 = &DAT_008a3028;
  }
  else {
    if ((uVar4 & 0x40) == 0) goto LAB_0069a734;
    uVar9 = (**(code **)(*piVar1 + 0x44))();
    FUN_005ca910(uVar9,auStack_1a0);
    pfVar8 = (float *)(**(code **)(*piVar1 + 0x24))();
    fStack_1e4 = pfVar8[1];
    fStack_1f4 = *pfVar8 * param_2;
    fStack_1f0 = fStack_1e4 * param_2;
    pfVar10 = &fStack_1f4;
    fStack_1ec = pfVar8[2] * param_2;
    uVar18 = 1;
    pfVar8 = &fStack_1c4;
    fStack_1e0 = fStack_1ec;
    uVar9 = (**(code **)(*piVar1 + 0x20))(pfVar8,1,pfVar10);
    puVar16 = auStack_1a0;
  }
  FUN_004876f0(puVar16,uVar9,pfVar8,uVar18,pfVar10);
LAB_0069a734:
  if (DAT_009382ec == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar12 = (undefined *)(DAT_009382ec + -0x70);
  }
  puStack_1d0 = &DAT_0093827c;
  do {
    if (puVar12 == puStack_1d0) {
      return;
    }
    cVar6 = (**(code **)(*(int *)(puVar12 + 0x50) + 0x1c))();
    if (cVar6 != '\0') {
      bVar13 = (*(ushort *)(iStack_1cc + 0x1e) & 0x8040) == 0;
      if (bVar13) {
        fStack_1dc = 0.0;
      }
      else {
        pfVar10 = (float *)(**(code **)(*(int *)(puVar12 + 0x48) + 0x24))();
        pfVar8 = (float *)(**(code **)(*piVar1 + 0x24))();
        fVar14 = (float10)FUN_005c5e80((*pfVar8 - *pfVar10) * (*pfVar8 - *pfVar10) +
                                       (pfVar8[1] - pfVar10[1]) * (pfVar8[1] - pfVar10[1]) +
                                       (pfVar8[2] - pfVar10[2]) * (pfVar8[2] - pfVar10[2]));
        fStack_1dc = (float)(fVar14 * (float10)param_2);
      }
      piVar2 = (int *)(puVar12 + 0x48);
      pfVar10 = (float *)(**(code **)(*(int *)(puVar12 + 0x48) + 0x20))();
      pfVar8 = (float *)(**(code **)(*piVar1 + 0x20))();
      fStack_1c8 = (pfVar8[2] - pfVar10[2]) * (pfVar8[2] - pfVar10[2]) +
                   (pfVar8[1] - pfVar10[1]) * (pfVar8[1] - pfVar10[1]) +
                   (*pfVar8 - *pfVar10) * (*pfVar8 - *pfVar10);
      fVar14 = (float10)(**(code **)(*piVar2 + 0x14))();
      fVar14 = fVar14 + (float10)fStack_1d8 + (float10)fStack_1dc;
      if ((float10)fStack_1c8 < fVar14 * fVar14) {
        if (bVar13) {
          uVar11 = (**(code **)(*piVar2 + 0xc))();
        }
        else {
          pfVar10 = (float *)(**(code **)(*piVar2 + 0x24))();
          fStack_1e4 = pfVar10[1];
          fStack_1f4 = *pfVar10 * param_2;
          fStack_1e0 = pfVar10[2];
          fStack_1f0 = fStack_1e4 * param_2;
          fStack_1ec = fStack_1e0 * param_2;
          pfVar10 = &fStack_1f4;
          uVar19 = 1;
          puVar17 = auStack_1ac;
          fStack_1b0 = fStack_1ec;
          uVar9 = (**(code **)(*piVar2 + 0x48))(puVar17,1,pfVar10);
          uVar18 = (**(code **)(*piVar2 + 0x20))(uVar9);
          uVar18 = (**(code **)(*(int *)(puVar12 + 0x50) + 0xa4))(uVar18);
          FUN_0048b5a0(uVar18,uVar9,puVar17,uVar19,pfVar10);
          cVar6 = FUN_0048c100(auStack_b0,auStack_160,auStack_160);
          if (cVar6 == '\0') goto LAB_0069a91f;
          uVar11 = (**(code **)(*piVar2 + 0xc))();
        }
        puVar3 = puStack_1d4 + (uVar11 >> 6) * 2;
        uVar15 = __allshl();
        *puVar3 = *puVar3 | (uint)uVar15;
        puVar3[1] = puVar3[1] | (uint)((ulonglong)uVar15 >> 0x20);
      }
    }
LAB_0069a91f:
    if (*(int *)(puVar12 + 0x70) == 0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      puVar12 = (undefined *)(*(int *)(puVar12 + 0x70) + -0x70);
    }
  } while( true );
}

