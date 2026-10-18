/* speed.exe 00420400 FUN_00420400; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 * calls 0076e2d0 FUN_0076e2d0
 * calls 007749a0 FUN_007749a0
 * calls 005d59f0 FUN_005d59f0
 * calls 004100a0 FUN_004100a0
 * calls 006269b0 FUN_006269b0
 * calls 00410220 FUN_00410220
 * calls 0077bba0 FUN_0077bba0
 * calls 00410180 FUN_00410180
 * calls 00778250 FUN_00778250
 * calls 00774230 FUN_00774230
 * calls 0041d130 FUN_0041d130
 * calls 005c5e80 FUN_005c5e80
 * calls 00776600 FUN_00776600
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00420400(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  undefined1 uVar5;
  float *pfVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  float10 fVar13;
  float10 fVar14;
  float *unaff_retaddr;
  float fVar15;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  char cStack_49;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined1 auStack_c [12];
  
  pfVar6 = (float *)(**(code **)(**(int **)(param_1 + 0x4c) + 0x20))();
  fStack_34 = *pfVar6;
  fStack_30 = pfVar6[1];
  fStack_2c = pfVar6[2];
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x34))(auStack_c);
  iVar7 = (**(code **)(**(int **)(param_1 + 0x48) + 100))();
  fVar15 = *(float *)(iVar7 + 0x10);
  fVar1 = *(float *)(iVar7 + 0x14);
  fVar2 = *(float *)(iVar7 + 0x18);
  if (*(int **)(iVar7 + 0x1c) == (int *)0x0) {
    pfVar6 = (float *)&DAT_008a2fb4;
  }
  else {
    piVar8 = (int *)(**(code **)(**(int **)(iVar7 + 0x1c) + 0x54))();
    pfVar6 = (float *)(**(code **)(*piVar8 + 0x24))();
  }
  fStack_64 = *pfVar6;
  fStack_60 = pfVar6[1];
  fStack_5c = pfVar6[2];
  fStack_58 = *pfVar6;
  fStack_54 = pfVar6[1];
  fStack_50 = pfVar6[2];
  if (*(int **)(iVar7 + 0x1c) != (int *)0x0) {
    piVar8 = (int *)(**(code **)(**(int **)(iVar7 + 0x1c) + 0x54))();
    fVar13 = (float10)(**(code **)(*piVar8 + 0x30))();
    if ((float10)_DAT_0089096c <= fVar13) {
      FUN_00410220(&fStack_58);
      goto LAB_004204e7;
    }
  }
  fStack_58 = *(float *)(iVar7 + 0x20);
  fStack_54 = *(float *)(iVar7 + 0x24);
  fStack_50 = *(float *)(iVar7 + 0x28);
LAB_004204e7:
  if (*(int *)(iVar7 + 0x1c) == 0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = (int *)FUN_005d59f0(&LAB_004037e0);
  }
  if (*(int *)(iVar7 + 0x1c) == 0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = (int *)FUN_005d59f0(&LAB_00403700);
  }
  iVar7 = (**(code **)(*piVar9 + 0xb4))();
  iVar10 = (**(code **)(*piVar9 + 0xb8))();
  if ((*(char *)(iVar7 + 0x50) == '\0') || (*(char *)(iVar10 + 0x50) == '\0')) {
    fStack_84 = fVar15 + fStack_64;
    fStack_80 = fStack_60 + fVar1;
    fStack_7c = fStack_5c + fVar2;
    fStack_20 = fStack_50;
    fStack_28 = fStack_58;
    fStack_24 = fStack_54;
    fStack_78 = fVar15;
    fStack_74 = fVar1;
    fStack_70 = fVar2;
  }
  else {
    fStack_84 = *(float *)(iVar10 + 0x98);
    fStack_80 = *(float *)(iVar10 + 0x9c);
    fStack_44 = fStack_84 - *(float *)(iVar7 + 0x98);
    fStack_7c = *(float *)(iVar10 + 0xa0);
    fStack_40 = fStack_80 - *(float *)(iVar7 + 0x9c);
    fStack_3c = fStack_7c - *(float *)(iVar7 + 0xa0);
    fStack_20 = fStack_3c;
    fStack_28 = fStack_44;
    fStack_24 = fStack_40;
    fStack_78 = *(float *)(iVar7 + 0x98);
    fStack_74 = *(float *)(iVar7 + 0x9c);
    fStack_70 = *(float *)(iVar7 + 0xa0);
    fStack_14 = fStack_3c;
  }
  pfVar6 = (float *)(**(code **)(**(int **)(param_1 + 0x54) + 0x44))();
  fVar15 = *pfVar6;
  fStack_50 = -fStack_28;
  fVar1 = pfVar6[2];
  fStack_44 = fStack_20;
  fStack_58 = fStack_20;
  fStack_54 = 0.0;
  fStack_40 = 0.0;
  fStack_3c = fStack_50;
  FUN_00410220(&fStack_44);
  FUN_00410220(&fStack_28);
  fStack_68 = fStack_24 * fVar1;
  fStack_6c = fVar1 * fStack_20;
  fStack_2c = fStack_44 * fVar15;
  fStack_58 = fStack_78 + fVar1 * fStack_28 + fStack_2c;
  fStack_48 = fStack_40 * fVar15;
  fStack_54 = fStack_74 + fStack_68 + fStack_48;
  fVar15 = fStack_3c * fVar15;
  fStack_50 = fStack_70 + fStack_6c + fVar15;
  fStack_7c = fStack_7c + fStack_6c;
  fStack_84 = fStack_84 + fVar1 * fStack_28 + fStack_2c;
  fStack_80 = fStack_80 + fStack_68 + fStack_48;
  (**(code **)(*piVar8 + 0x10))();
  puVar11 = (undefined4 *)FUN_00454810(0xf575b64,0);
  if (puVar11 == (undefined4 *)0x0) {
    puVar11 = (undefined4 *)FUN_006269b0(4);
  }
  fVar13 = (float10)FUN_0041d130(*puVar11);
  fStack_68 = (float)fVar13;
  fStack_84 = fStack_84 - fStack_58;
  fStack_80 = fStack_80 - fStack_54;
  fStack_7c = (fStack_7c + fVar15) - fStack_50;
  fVar13 = (float10)FUN_005c5e80(fStack_80 * fStack_80 +
                                 fStack_7c * fStack_7c + fStack_84 * fStack_84);
  fVar2 = fStack_5c;
  fVar1 = fStack_60;
  fVar15 = fStack_64;
  fStack_6c = (float)fVar13;
  if ((float10)_DAT_008910cc < fVar13) {
    fVar3 = fStack_68 / fStack_6c;
    fStack_6c = fStack_68;
    fStack_84 = fStack_84 * fVar3;
    fStack_80 = fStack_80 * fVar3;
    fStack_7c = fStack_7c * fVar3;
  }
  fStack_8c = fStack_60;
  fStack_88 = fStack_5c;
  fVar13 = (float10)FUN_005c5e80(fStack_60 * fStack_60 +
                                 fStack_5c * fStack_5c + fStack_64 * fStack_64);
  if ((float10)_DAT_008910cc < fVar13) {
    fVar13 = (float10)fStack_68 / fVar13;
    fVar15 = (float)((float10)fVar15 * fVar13);
    fStack_8c = (float)((float10)fVar1 * fVar13);
    fStack_88 = (float)((float10)fVar2 * fVar13);
  }
  fStack_78 = fStack_58 - fStack_38;
  fStack_74 = fStack_54 - fStack_34;
  fStack_70 = fStack_50 - fStack_30;
  fVar13 = (float10)FUN_005c5e80(fStack_74 * fStack_74 +
                                 fStack_70 * fStack_70 + fStack_78 * fStack_78);
  if ((float10)_DAT_008910cc < fVar13) {
    fStack_48 = (float)(((float10)fStack_78 * (float10)fStack_28 +
                        (float10)fStack_74 * (float10)fStack_24 +
                        (float10)fStack_70 * (float10)fStack_20) * ((float10)_DAT_0089096c / fVar13)
                       );
    fVar14 = (float10)fStack_68 * (float10)_DAT_00890864;
    if (fVar14 < (float10)_DAT_00891334) {
      fVar14 = (float10)_DAT_00891334;
    }
    fVar14 = fVar14 * ((float10)_DAT_0089096c / fVar13);
    if ((float10)_DAT_0089096c < fVar14) {
      fVar14 = (float10)_DAT_0089096c;
    }
    fStack_68 = fStack_48 * _DAT_00890bf8;
    if (fStack_68 <= _DAT_00890da8) {
      fVar13 = (float10)_DAT_00890da8;
    }
    else {
      fVar13 = (float10)fStack_68;
      if (_DAT_0089096c < fStack_68) {
        fVar13 = (float10)_DAT_0089096c;
      }
    }
    fVar13 = (fVar13 + (float10)_DAT_0089096c) * (float10)_DAT_00890634;
    fVar13 = fVar13 * (float10)_DAT_00891074 + ((float10)_DAT_0089096c - fVar13) * fVar14;
    if (_DAT_008910cc <= fStack_6c) {
      fVar14 = ((float10)fStack_74 * (float10)fStack_80 +
               (float10)fStack_70 * (float10)fStack_7c + (float10)fStack_78 * (float10)fStack_84) /
               ((float10)fStack_6c * (float10)fStack_6c);
      fStack_58 = (float)((float10)fStack_84 * fVar14);
      fStack_54 = (float)((float10)fStack_80 * fVar14);
      fStack_64 = fStack_78 - fStack_58;
      fStack_60 = fStack_74 - fStack_54;
      fStack_5c = (float)((float10)fStack_70 - fVar14 * (float10)fStack_7c);
      fStack_78 = (float)((float10)fStack_58 * fVar13 + (float10)fStack_64);
      fStack_74 = (float)((float10)fStack_54 * fVar13 + (float10)fStack_60);
      fStack_70 = (float)(fVar14 * (float10)fStack_7c * fVar13 + (float10)fStack_5c);
      fStack_44 = fStack_64;
      fStack_40 = fStack_60;
      fStack_3c = fStack_5c;
      fStack_14 = fStack_5c;
    }
  }
  iVar7 = (**(code **)(**(int **)(param_1 + 0x48) + 0x94))();
  fVar1 = **(float **)(iVar7 + 8) * _DAT_00890dc4;
  cStack_49 = '\x01';
  fStack_64 = (fVar15 - fStack_84) * fVar1 + fStack_84 + fStack_78 + fStack_38;
  fStack_60 = (fStack_8c - fStack_80) * fVar1 + fStack_80 + fStack_74 + fStack_34;
  fStack_5c = (fStack_88 - fStack_7c) * fVar1 + fStack_7c + fStack_70 + fStack_30;
  iVar7 = (**(code **)(**(int **)(param_1 + 0x48) + 0x48))();
  cVar4 = (**(code **)(*piVar8 + 0x24))();
  if ((cVar4 == '\0') || (DAT_009b3829 == '\0')) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  *(undefined1 *)(iVar7 + 0x51) = uVar5;
  if (*(char *)(iVar7 + 0x50) != '\0') {
    fVar13 = (float10)(**(code **)(*piVar8 + 4))();
    uVar12 = 4;
    if (fVar13 < (float10)_DAT_00890604) {
      uVar12 = 3;
    }
    *(undefined4 *)(iVar7 + 0x80) = uVar12;
    pfVar6 = (float *)(iVar7 + 0x98);
    fStack_84 = *pfVar6;
    fStack_80 = *(float *)(iVar7 + 0x9c);
    fStack_7c = *(float *)(iVar7 + 0xa0);
    fStack_78 = *(float *)(iVar7 + 0xbc);
    fStack_74 = *(float *)(iVar7 + 0xc0);
    fStack_70 = *(float *)(iVar7 + 0xc4);
    FUN_00410220(&fStack_78);
    fStack_84 = fStack_64 - fStack_84;
    fStack_80 = fStack_60 - fStack_80;
    fStack_7c = fStack_5c - fStack_7c;
    fStack_6c = fStack_74 * fStack_80 + fStack_84 * fStack_78 + fStack_7c * fStack_70;
    if (_DAT_00890db8 <= fStack_6c) {
      fStack_1c = fStack_28;
      fStack_18 = fStack_24;
      fStack_14 = fStack_20;
      FUN_00410220(&fStack_1c);
      if (_DAT_00890da4 < fStack_6c) {
        do {
          FUN_0077bba0(0x40a00000,&fStack_1c,0);
          fStack_84 = *pfVar6;
          fStack_80 = *(float *)(iVar7 + 0x9c);
          fStack_7c = *(float *)(iVar7 + 0xa0);
          fStack_78 = *(float *)(iVar7 + 0xbc);
          fStack_74 = *(float *)(iVar7 + 0xc0);
          fStack_70 = *(float *)(iVar7 + 0xc4);
          FUN_00410220(&fStack_78);
          fStack_84 = fStack_64 - fStack_84;
          fStack_80 = fStack_60 - fStack_80;
          fStack_7c = fStack_5c - fStack_7c;
          fStack_6c = fStack_74 * fStack_80 + fStack_84 * fStack_78 + fStack_7c * fStack_70;
        } while (_DAT_00890da4 < fStack_6c);
      }
      if (_DAT_00890cd4 <= fStack_6c) {
        fStack_68 = fStack_6c;
      }
      else {
        fStack_68 = 0.1;
      }
      fStack_50 = -fStack_78;
      fStack_44 = fStack_70;
      fStack_58 = fStack_70;
      fStack_54 = 0.0;
      fStack_40 = 0.0;
      fStack_3c = fStack_50;
      FUN_00410220(&fStack_44);
      fStack_48 = fStack_44 * fStack_84 + fStack_40 * fStack_80 + fStack_3c * fStack_7c +
                  *(float *)(iVar7 + 0x2c4);
      fVar13 = (float10)FUN_007749a0(fStack_48);
      fStack_2c = (float)fVar13;
      if (ABS(fVar13 - (float10)fStack_48) < (float10)_DAT_00890e98) {
        cStack_49 = '\0';
        FUN_00778250(fStack_2c,0);
        FUN_0077bba0(fStack_68,&fStack_1c,0);
        FUN_00776600(1);
        if ((*(char *)(iVar7 + 0x55) != '\0') &&
           ((*(int *)(iVar7 + 0x58) != 0 || (*(int *)(iVar7 + 0x5c) != 0)))) {
          pfVar6 = (float *)(iVar7 + 0x164);
        }
        fStack_44 = *pfVar6;
        fStack_40 = pfVar6[1];
        fStack_3c = pfVar6[2];
        fVar15 = fStack_44 - fStack_38;
        fStack_8c = fStack_40 - fStack_34;
        fVar1 = fStack_3c - fStack_30;
        fVar13 = (float10)FUN_00410180(&stack0xffffff70);
        fStack_48 = (float)fVar13;
        if (fVar13 <= (float10)_DAT_008910cc) {
          fVar13 = (float10)fVar1;
        }
        else {
          fVar13 = (float10)FUN_004100a0(&fStack_64,&fStack_38);
          fVar13 = fVar13 / (float10)fStack_48;
          fVar15 = (float)((float10)fVar15 * fVar13);
          fStack_8c = (float)((float10)fStack_8c * fVar13);
          fVar13 = fVar13 * (float10)fVar1;
        }
        fStack_64 = fVar15 + fStack_38;
        fStack_60 = fStack_8c + fStack_34;
        fStack_5c = (float)(fVar13 + (float10)fStack_30);
      }
    }
  }
  *unaff_retaddr = fStack_64 - fStack_38;
  unaff_retaddr[1] = fStack_60 - fStack_34;
  unaff_retaddr[2] = fStack_5c - fStack_30;
  if (cStack_49 != '\0') {
    *(undefined4 *)(iVar7 + 0x78) = 2;
    *(undefined4 *)(iVar7 + 0x80) = 3;
    FUN_0076e2d0(1);
    FUN_00774230();
    (**(code **)(**(int **)(param_1 + 0x48) + 0x50))(2);
  }
  return;
}

