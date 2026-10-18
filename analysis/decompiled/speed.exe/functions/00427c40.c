/* speed.exe 00427c40 FUN_00427c40; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 * calls 005d59f0 FUN_005d59f0
 * calls 006269b0 FUN_006269b0
 * calls 00413ab0 FUN_00413ab0
 * calls 0040a5e0 FUN_0040a5e0
 * calls 004135f0 FUN_004135f0
 * calls 005cc240 FUN_005cc240
 * calls 005c5e80 FUN_005c5e80
 * calls 00423990 FUN_00423990
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00427c40(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  float *pfVar7;
  undefined4 uVar8;
  int *piVar9;
  float *extraout_ECX;
  bool bVar10;
  float10 fVar11;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
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
  undefined4 uStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar5 = FUN_005cc240("AIGoalPullOver");
  piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0x48) + 0xc0))();
  bVar10 = *piVar6 == iVar5;
  FUN_004135f0(&fStack_c,bVar10);
  FUN_00413ab0(&fStack_24,&fStack_c,bVar10);
  fStack_3c = fStack_24;
  fStack_38 = fStack_20;
  fStack_34 = fStack_1c;
  uStack_18 = 0;
  fStack_14 = 0.0;
  fStack_10 = 0.0;
  fStack_50 = 0.0;
  fStack_30 = 0.0;
  fStack_2c = 0.0;
  fStack_28 = 0.0;
  if (bVar10) {
    iVar5 = (**(code **)(**(int **)(param_1 + 0x48) + 100))();
    if ((*(int *)(iVar5 + 0x1c) != 0) &&
       (piVar6 = (int *)FUN_005d59f0(&LAB_004037e0), piVar6 != (int *)0x0)) {
      (**(code **)(*piVar6 + 0x10))();
      pfVar7 = (float *)FUN_00454810(0x594e1492,0);
      if (pfVar7 == (float *)0x0) {
        pfVar7 = (float *)FUN_006269b0(4);
      }
      fStack_50 = *pfVar7;
    }
    iVar5 = (**(code **)(**(int **)(param_1 + 0x48) + 0xa0))();
    if (iVar5 != 0) {
      piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0x48) + 0xa0))();
      cVar4 = (**(code **)(*piVar6 + 0x124))();
      if (cVar4 != '\0') {
        fStack_50 = 1.0;
      }
    }
    fVar2 = (_DAT_0089096c - fStack_50) * _DAT_00890e98;
    uVar8 = (**(code **)(**(int **)(param_1 + 0x48) + 0x6c))(fVar2,fVar2 + _DAT_00890d44);
    FUN_00423990(&fStack_30,*(undefined4 *)(param_1 + 0x50),uVar8);
    fVar2 = fStack_30 * fStack_3c + fStack_38 * fStack_2c + fStack_28 * fStack_34;
    fVar11 = (float10)FUN_005c5e80(fStack_3c * fStack_3c +
                                   fStack_38 * fStack_38 + fStack_34 * fStack_34);
    fVar11 = -((float10)fVar2 / fVar11);
    if ((float10)_DAT_00891218 < fVar11) {
      fVar1 = (float)(((float10)_DAT_00891624 - fVar11) * (float10)_DAT_00891620);
      fVar3 = _DAT_00890968;
      if ((_DAT_00890968 < fVar1) && (fVar3 = fVar1, _DAT_0089096c < fVar1)) {
        fVar3 = _DAT_0089096c;
      }
      fVar2 = fVar2 / (fStack_30 * fStack_30 + fStack_2c * fStack_2c + fStack_28 * fStack_28);
      fStack_14 = fStack_2c * fVar2;
      fStack_10 = fStack_28 * fVar2;
      fStack_c = fStack_3c - fStack_30 * fVar2;
      fStack_8 = fStack_38 - fStack_14;
      fStack_4 = fStack_34 - fStack_10;
      fStack_3c = fStack_c + fStack_30 * fVar2 * fVar3;
      fStack_38 = fStack_8 + fStack_14 * fVar3;
      fStack_34 = fStack_4 + fStack_10 * fVar3;
    }
    fStack_3c = fStack_30 + fStack_3c;
    fStack_38 = fStack_38 + fStack_2c;
    fStack_34 = fStack_28 + fStack_34;
  }
  fVar11 = (float10)FUN_005c5e80(fStack_3c * fStack_3c +
                                 fStack_38 * fStack_38 + fStack_34 * fStack_34);
  fStack_44 = (float)fVar11;
  piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0x48) + 0xa0))();
  iVar5 = (**(code **)(*piVar6 + 8))();
  if ((*(int *)(iVar5 + 0x1c) != 0) &&
     (piVar6 = (int *)FUN_005d59f0(&LAB_00403700), piVar6 != (int *)0x0)) {
    fVar11 = (float10)(**(code **)(**(int **)(param_1 + 0x50) + 0x90))();
    fStack_40 = (float)fVar11;
    (**(code **)(**(int **)(param_1 + 0x48) + 0x94))();
    pfVar7 = (float *)FUN_00454810(0xec57e16b,0);
    if (pfVar7 == (float *)0x0) {
      pfVar7 = (float *)FUN_006269b0(4);
    }
    fStack_4c = *pfVar7;
    (**(code **)(**(int **)(param_1 + 0x48) + 0x94))();
    pfVar7 = (float *)FUN_00454810(0xcc320329,0);
    if (pfVar7 == (float *)0x0) {
      pfVar7 = (float *)FUN_006269b0(4);
    }
    fStack_48 = *pfVar7;
    iVar5 = (**(code **)(**(int **)(param_1 + 0x48) + 0x94))();
    fStack_54 = *(float *)(*(int *)(iVar5 + 8) + 8) * _DAT_0089098c;
    piVar9 = (int *)(**(code **)(**(int **)(param_1 + 0x48) + 0xa0))();
    cVar4 = (**(code **)(*piVar9 + 0x124))();
    if (cVar4 != '\0') {
      fStack_4c = fStack_4c * _DAT_00890e04;
      fStack_48 = fStack_48 * _DAT_00890d44;
      fStack_54 = fStack_54 * _DAT_008910c4;
    }
    fVar11 = (float10)(**(code **)(*piVar6 + 0x74))();
    fVar2 = fStack_40;
    if (fVar11 * (float10)fStack_4c <= (float10)fStack_54) {
      fStack_54 = (float)(fVar11 * (float10)fStack_4c);
    }
    fVar11 = (float10)(**(code **)(*piVar6 + 0x78))(fStack_40);
    fStack_40 = (float)(fVar11 * (float10)fStack_48);
    FUN_0040a5e0(fVar2,fStack_54,fStack_40,param_2);
    if (*extraout_ECX <= fStack_44) {
      fStack_44 = *extraout_ECX;
    }
  }
  if ((bVar10) &&
     (fVar11 = (float10)FUN_005c5e80(fStack_24 * fStack_24 +
                                     fStack_20 * fStack_20 + fStack_1c * fStack_1c),
     fVar11 < ((float10)_DAT_0089096c - (float10)fStack_50) * (float10)_DAT_0089161c +
              (float10)_DAT_008910c0)) {
    (**(code **)(**(int **)(param_1 + 0x5c) + 0x18))(0);
    (**(code **)(**(int **)(param_1 + 0x5c) + 0x1c))(0x3f800000);
    (**(code **)(**(int **)(param_1 + 0x5c) + 0x14))(0);
    (**(code **)(**(int **)(param_1 + 0x5c) + 0x2c))(0);
    (**(code **)(**(int **)(param_1 + 0x5c) + 0x24))(0x3f800000);
    (**(code **)(**(int **)(param_1 + 0x5c) + 0x20))(0);
    return;
  }
  (**(code **)(**(int **)(param_1 + 0x48) + 0x38))(fStack_44);
  pfVar7 = (float *)(**(code **)(**(int **)(param_1 + 0x4c) + 0x20))();
  fStack_40 = fStack_40 + *pfVar7;
  fStack_3c = fStack_3c + pfVar7[1];
  fStack_38 = fStack_38 + pfVar7[2];
  (**(code **)(**(int **)(param_1 + 0x48) + 0x3c))(&fStack_40);
  (**(code **)(**(int **)(param_1 + 0x48) + 0x2c))(7);
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x20))(0);
  return;
}

