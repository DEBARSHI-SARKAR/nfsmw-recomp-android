/* speed.exe 00411a70 FUN_00411a70; analysis pseudocode, not buildable source.
 * calls 006f1220 FUN_006f1220
 * calls 0040fe20 FUN_0040fe20
 * calls 00410220 FUN_00410220
 * calls 0077bba0 FUN_0077bba0
 * calls 00776600 FUN_00776600
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00411a70(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  bool bVar14;
  float10 fVar15;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [64];
  
  iVar9 = (**(code **)(**(int **)(param_1 + 0x40) + 0x48))();
  bVar14 = *(int *)(param_1 + 0xb4) != 0;
  if (!bVar14) {
    if (*(char *)(iVar9 + 0x2c0) == '\0') {
      fVar1 = *(float *)(iVar9 + 0x98);
      fVar2 = *(float *)(iVar9 + 0x9c);
      fVar3 = *(float *)(iVar9 + 0xa0);
      pfVar10 = (float *)(**(code **)(**(int **)(param_1 + 0x5c) + 0x20))();
      fVar4 = *pfVar10;
      fVar5 = pfVar10[1];
      fVar6 = pfVar10[2];
      fStack_64 = *(float *)(iVar9 + 0xbc);
      fStack_60 = *(float *)(iVar9 + 0xc0);
      fStack_5c = *(float *)(iVar9 + 0xc4);
      FUN_0040fe20(&fStack_64,&fStack_64);
      fStack_58 = fVar1 - fVar4;
      fStack_54 = fVar2 - fVar5;
      fStack_50 = fVar3 - fVar6;
      fVar15 = (float10)FUN_00410220(&fStack_58);
      fStack_68 = DAT_008a2fbc;
      fStack_70 = DAT_008a2fb4;
      fStack_6c = DAT_008a2fb8;
      fVar1 = (float)(((float10)fStack_58 * (float10)fStack_64 +
                      (float10)fStack_60 * (float10)fStack_54 +
                      (float10)fStack_5c * (float10)fStack_50) * fVar15);
      iVar11 = (**(code **)(**(int **)(param_1 + 0x40) + 100))();
      if ((iVar11 != 0) && (*(char *)(iVar11 + 0x2c) != '\0')) {
        fStack_70 = *(float *)(iVar11 + 0x10) - fVar4;
        fStack_6c = *(float *)(iVar11 + 0x14) - fVar5;
        fStack_68 = *(float *)(iVar11 + 0x18) - fVar6;
        FUN_00410220(&fStack_70);
      }
      if (fVar1 < param_2) {
        FUN_0077bba0(param_2 - fVar1,&fStack_70,param_2);
      }
    }
    FUN_00776600(1);
  }
  puVar12 = &DAT_008a3028;
  puVar13 = (undefined4 *)(param_1 + 0x6c);
  for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar13 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar13 = puVar13 + 1;
  }
  uStack_4c = *(undefined4 *)(iVar9 + 0xbc);
  uStack_48 = *(undefined4 *)(iVar9 + 0xc0);
  uStack_44 = *(undefined4 *)(iVar9 + 0xc4);
  fVar15 = (float10)FUN_00410220(&uStack_4c);
  if ((float10)_DAT_00890518 < fVar15) {
    puVar12 = (undefined4 *)FUN_006f1220(auStack_40,&uStack_4c,0);
    puVar13 = (undefined4 *)(param_1 + 0x6c);
    for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar13 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar13 = puVar13 + 1;
    }
    if (((bVar14) || (*(char *)(iVar9 + 0x55) == '\0')) ||
       ((*(int *)(iVar9 + 0x58) == 0 && (*(int *)(iVar9 + 0x5c) == 0)))) {
      puVar12 = (undefined4 *)(iVar9 + 0x98);
    }
    else {
      puVar12 = (undefined4 *)(iVar9 + 0x164);
    }
    uVar7 = puVar12[1];
    uVar8 = puVar12[2];
    *(undefined4 *)(param_1 + 0x9c) = *puVar12;
    *(undefined4 *)(param_1 + 0xa0) = uVar7;
    *(undefined4 *)(param_1 + 0xa4) = uVar8;
    *(undefined4 *)(param_1 + 0xa8) = 0x3f800000;
  }
  return;
}

