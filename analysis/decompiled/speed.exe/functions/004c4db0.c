/* speed.exe 004c4db0 FUN_004c4db0; analysis pseudocode, not buildable source.
 * calls 004ab8c0 FUN_004ab8c0
 * calls 004bbb60 FUN_004bbb60
 * calls 004b0320 FUN_004b0320
 * calls 004bc150 FUN_004bc150
 * calls 004b3900 FUN_004b3900
 * calls 004ad320 FUN_004ad320
 * calls 004ad260 FUN_004ad260
 * calls 004ad280 FUN_004ad280
 * calls 00653790 FUN_00653790
 * calls 004b02b0 FUN_004b02b0
 * calls 004b3860 FUN_004b3860
 * calls 00402060 FUN_00402060
 * calls 007c4b80 FUN_007c4b80
 * calls 004bbae0 FUN_004bbae0
 * calls 004bc0c0 FUN_004bc0c0
 * calls 004ad2e0 FUN_004ad2e0
 * calls 004ad300 FUN_004ad300
 * calls 004ad190 FUN_004ad190
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004c4db0(int param_1,float param_2)

{
  int *piVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  short *psVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  byte bVar9;
  float10 fVar10;
  float10 fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  
  if ((*(float *)(param_1 + 0x60) < DAT_009142dc) && (*(char *)(param_1 + 0x58) != '\0')) {
    *(undefined1 *)(param_1 + 0x2c) = 1;
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  *(bool *)(param_1 + 0x31) = *(int *)(*(int *)(*(int *)(param_1 + 0x28) + 0x30) + 0x8c) == 0;
  iVar2 = DAT_00925ae8;
  iVar6 = *(int *)(*(int *)(param_1 + 0x18) + 0x34);
  if (*(int *)(iVar6 + 0x228) == 0) {
    if ((_DAT_00913c44 & 1) == 0) {
      _DAT_00913c40 = *(float *)(iVar6 + 0x80);
      _DAT_00913c44 = _DAT_00913c44 | 1;
    }
    if ((((*(float *)(iVar6 + 0x80) < _DAT_0089096c) || (*(char *)(param_1 + 0x32) != '\0')) ||
        ((float)(DAT_00925ae8 - *(int *)(param_1 + 0x108)) * _DAT_00890984 <= _DAT_0089096c)) ||
       ((_DAT_00913c40 != _DAT_00890968 ||
        (fVar10 = (float10)FUN_004ab8c0(), fVar10 <= (float10)_DAT_00890da4)))) {
      fVar12 = _DAT_00890968;
      if ((*(char *)(param_1 + 0x32) != '\0') &&
         (*(int *)(param_1 + 0x108) = iVar2, *(float *)(iVar6 + 0x80) == fVar12)) {
        *(undefined1 *)(param_1 + 0x32) = 0;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x32) = 1;
    }
    _DAT_00913c40 = *(float *)(iVar6 + 0x80);
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (*(int *)(param_1 + 0x38) == 0) {
    return;
  }
  FUN_004bbb60(param_2);
  FUN_004bbae0(param_2);
  FUN_004b0320(param_2);
  FUN_004bc0c0(param_2);
  fVar12 = param_2 * _DAT_00896480;
  fVar14 = fVar12 + *(float *)(param_1 + 0x100);
  *(float *)(param_1 + 0x100) = fVar14;
  switch(*(undefined4 *)(param_1 + 0x38)) {
  case 1:
    if (fVar14 <= *(float *)(param_1 + 0xf8)) {
      uVar8 = 0x461c4000;
      uVar13 = 0x447a0000;
      fVar10 = (float10)FUN_00653790(fVar14);
      fVar10 = fVar10 + (float10)*(ushort *)(param_1 + 0x106);
    }
    else {
      bVar9 = *(char *)(param_1 + 0x104) + 1;
      *(byte *)(param_1 + 0x104) = bVar9;
      uVar4 = FUN_004ad280();
      if (uVar4 <= bVar9) {
        *(undefined4 *)(param_1 + 0x38) = 2;
        *(undefined4 *)(param_1 + 0x3c) = 2;
        uVar13 = FUN_004ad320();
        psVar5 = (short *)FUN_004ad300();
        iVar6 = FUN_004ad300((float)(int)*psVar5);
        FUN_004b3860(uVar13,param_1 + 200,7,(float)(int)*(short *)(iVar6 + 2));
        *(undefined4 *)(param_1 + 0x100) = 0;
        uVar3 = FUN_007c4b80();
        uVar8 = 0x461c4000;
        uVar13 = 0x447a0000;
        *(undefined2 *)(param_1 + 0x106) = uVar3;
        fVar10 = (float10)FUN_00653790(0);
        fVar10 = (float10)FUN_00402060((float)(fVar10 + (float10)*(ushort *)(param_1 + 0x106)),
                                       uVar13,uVar8);
        FUN_004b02b0((float)fVar10,(float)fVar10,0,0);
        iVar6 = *(int *)(*(int *)(param_1 + 0x18) + 0x6c) + -2;
        if (iVar6 < 1) {
          iVar6 = 0;
        }
        else if (3 < iVar6) {
          iVar6 = 3;
        }
        uVar13 = (&DAT_00896418)[iVar6];
        piVar1 = *(int **)(*(int *)(param_1 + 0x28) + 0x30);
        uVar8 = 0;
        fVar10 = (float10)(**(code **)(**(int **)(*(int *)(param_1 + 0x28) + 0x30) + 0x34))
                                    (uVar13,0);
        fVar12 = (float)fVar10;
        fVar10 = (float10)(**(code **)(*piVar1 + 0x34))(fVar12);
        FUN_004b02b0((float)(fVar10 * (float10)*(float *)(&UNK_00896408 + iVar6 * 4)),fVar12,uVar13,
                     uVar8);
        iVar6 = *(int *)(*(int *)(param_1 + 0x34) + 8);
        FUN_004b02b0(*(undefined4 *)(iVar6 + 0x14),0,*(undefined4 *)(iVar6 + 0x24),0);
        FUN_004bc150();
        FUN_004bc0c0(param_2);
        *(undefined1 *)(param_1 + 0x2e) = 1;
        return;
      }
      uVar13 = FUN_004ad2e0((uint)bVar9);
      psVar5 = (short *)FUN_004ad260(*(undefined1 *)(param_1 + 0x104));
      fVar14 = (float)(int)*psVar5;
      iVar6 = FUN_004ad260(*(undefined1 *)(param_1 + 0x104));
      FUN_004b3860(uVar13,param_1 + 200,7,(float)(int)*(short *)(iVar6 + 2),fVar14);
      *(float *)(param_1 + 0x100) = fVar12;
      uVar3 = FUN_007c4b80();
      uVar8 = 0x461c4000;
      uVar13 = 0x447a0000;
      *(undefined2 *)(param_1 + 0x106) = uVar3;
      fVar10 = (float10)FUN_00653790(fVar12);
      fVar10 = fVar10 + (float10)*(ushort *)(param_1 + 0x106);
    }
    goto LAB_004c5012;
  case 2:
    if (*(float *)(param_1 + 0xf8) < fVar14) {
      *(undefined4 *)(param_1 + 0x38) = 3;
      *(undefined4 *)(param_1 + 0x3c) = 3;
      return;
    }
    uVar3 = FUN_007c4b80();
    uVar8 = 0x461c4000;
    uVar13 = 0x447a0000;
    *(undefined2 *)(param_1 + 0x106) = uVar3;
    fVar10 = (float10)FUN_00653790(fVar14);
    fVar10 = fVar10 + (float10)*(ushort *)(param_1 + 0x106);
LAB_004c5012:
    fVar10 = (float10)FUN_00402060((float)fVar10,uVar13,uVar8);
    FUN_004b02b0((float)fVar10,(float)fVar10,0,0);
    return;
  case 3:
    if ((*(char *)(param_1 + 0x128) == '\0') || (*(char *)(param_1 + 0x144) == '\0')) {
      if (*(int *)(param_1 + 0x148) != 0) {
        return;
      }
      FUN_004b3900();
      return;
    }
    goto LAB_004c54d9;
  case 4:
    if (*(char *)(param_1 + 0xa0) != '\0') {
      piVar1 = *(int **)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x38) = 5;
      *(undefined4 *)(param_1 + 0x3c) = 5;
      uVar13 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x34) + 8) + 0x20);
      if (*(int *)(piVar1[0xc] + 0x8c) < 3) {
        uVar13 = FUN_007c4b80();
      }
      param_2 = 1.0;
      fVar10 = (float10)(**(code **)(*piVar1 + 0x44))();
      if (fVar10 < (float10)_DAT_00896548) {
        param_2 = 0.0;
      }
      iVar6 = *(int *)(*(int *)(param_1 + 0x34) + 8);
      fVar12 = (float)*(int *)(iVar6 + 0x4c);
      piVar1 = *(int **)(param_1 + 0x28);
      if (*(int *)(iVar6 + 0x4c) < 0) {
        fVar12 = fVar12 + _DAT_00891214;
      }
      fVar10 = (float10)FUN_00402060(fVar12 * param_2 + *(float *)(piVar1[0xc] + 0x2c),0x447a0000,
                                     0x461c4000);
      fVar12 = (float)fVar10;
      uVar8 = 5;
      fVar10 = (float10)(**(code **)(*piVar1 + 0x44))(fVar12,uVar13,5);
      FUN_004b02b0((float)fVar10,fVar12,uVar13,uVar8);
      param_2 = _DAT_008ee6c0 * param_2;
      uVar8 = 0;
      uVar13 = DAT_008ee6c4;
      fVar10 = (float10)(**(code **)(**(int **)(param_1 + 0x28) + 0x4c))(param_2,DAT_008ee6c4,0);
      FUN_004b02b0((float)fVar10,param_2,uVar13,uVar8);
      return;
    }
    break;
  case 5:
    if (*(char *)(param_1 + 0xa0) != '\0') {
      piVar1 = *(int **)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x38) = 6;
      *(undefined4 *)(param_1 + 0x3c) = 6;
      uVar13 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x34) + 8) + 0x30);
      if ((*(int *)(piVar1[0xc] + 0x8c) < 3) && (*(int *)(param_1 + 0x24) < 2)) {
        uVar13 = FUN_007c4b80();
      }
      param_2 = 1.0;
      fVar10 = (float10)(**(code **)(*piVar1 + 0x44))();
      if (fVar10 < (float10)_DAT_00896548) {
        param_2 = 0.0;
      }
      piVar7 = (int *)FUN_004ad190();
      piVar1 = *(int **)(param_1 + 0x28);
      uVar8 = 0;
      fVar10 = (float10)(**(code **)(*piVar1 + 0x44))(uVar13,0);
      fVar11 = (float10)*piVar7;
      if (*piVar7 < 0) {
        fVar11 = fVar11 + (float10)_DAT_00891214;
      }
      fVar12 = (float)(fVar10 - fVar11 * (float10)param_2);
      fVar10 = (float10)(**(code **)(*piVar1 + 0x44))(fVar12);
      FUN_004b02b0((float)fVar10,fVar12,uVar13,uVar8);
      FUN_004b02b0(_DAT_008ee6c0 * param_2,0,DAT_008ee6c4,0);
      return;
    }
    break;
  case 6:
    if (*(char *)(param_1 + 0xa0) != '\0') {
      *(undefined4 *)(param_1 + 0x38) = 7;
      *(undefined4 *)(param_1 + 0x3c) = 7;
      fVar12 = *(float *)((*(int **)(param_1 + 0x28))[0xc] + 0x2c);
      iVar6 = *(int *)(*(int *)(param_1 + 0x34) + 8);
      fVar10 = (float10)(**(code **)(**(int **)(param_1 + 0x28) + 0x44))();
      uVar15 = 5;
      piVar1 = *(int **)(param_1 + 0x28);
      uVar13 = *(undefined4 *)(piVar1[0xc] + 0x2c);
      FUN_00402060((float)ABS((fVar10 - (float10)fVar12) * (float10)*(float *)(iVar6 + 0x2c)),0,
                   0x44480000,5);
      uVar8 = FUN_007c4b80();
      fVar10 = (float10)(**(code **)(*piVar1 + 0x44))(uVar13,uVar8);
      FUN_004b02b0((float)fVar10,uVar13,uVar8,uVar15);
      uVar8 = 0;
      uVar13 = 0x3c;
      fVar10 = (float10)(**(code **)(**(int **)(*(int *)(param_1 + 0x28) + 0x30) + 0x34))(0x3c,0);
      FUN_004b02b0(0,(float)fVar10,uVar13,uVar8);
      return;
    }
    break;
  case 7:
    if (*(char *)(param_1 + 0xa0) == '\0') {
      return;
    }
LAB_004c54d9:
    FUN_004b3900();
  }
  return;
}

