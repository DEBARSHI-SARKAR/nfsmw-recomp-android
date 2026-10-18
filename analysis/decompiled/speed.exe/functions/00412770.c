/* speed.exe 00412770 FUN_00412770; analysis pseudocode, not buildable source.
 * calls 0040fe20 FUN_0040fe20
 * calls 0045da30 FUN_0045da30
 * calls 00410220 FUN_00410220
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00412770(int param_1)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  float *pfVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  float10 fVar11;
  float fStack_3c;
  float fStack_38;
  float afStack_34 [3];
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  undefined1 auStack_c [4];
  float fStack_8;
  
  pfVar7 = (float *)(**(code **)(**(int **)(param_1 + 0x54) + 0x20))();
  fStack_24 = *pfVar7;
  fStack_20 = pfVar7[1];
  fStack_1c = pfVar7[2];
  pfVar7 = (float *)(**(code **)(**(int **)(param_1 + 0x80) + 0x24))();
  fStack_18 = *pfVar7;
  fStack_14 = pfVar7[1];
  fStack_10 = pfVar7[2];
  FUN_0040fe20(&fStack_18,&fStack_18);
  fStack_3c = fStack_24 - *(float *)(param_1 + 0x84);
  fStack_38 = fStack_20 - *(float *)(param_1 + 0x88);
  afStack_34[0] = fStack_1c - *(float *)(param_1 + 0x8c);
  piVar8 = (int *)(**(code **)(**(int **)(param_1 + 0x4c) + 0xa0))();
  cVar6 = (**(code **)(*piVar8 + 0x11c))();
  if ((cVar6 == '\0') || (_DAT_00890db8 <= *(float *)(param_1 + 100))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  fVar11 = (float10)FUN_005c5e80(fStack_38 * fStack_38 +
                                 fStack_3c * fStack_3c + afStack_34[0] * afStack_34[0]);
  if (((((fVar11 < (float10)_DAT_0089105c) && (_DAT_00890da4 < (float)fVar11)) &&
       (_DAT_00891058 < (fStack_18 * fStack_3c + fStack_10 * afStack_34[0]) / (float)fVar11)) &&
      ((*(int *)(param_1 + 0x4c) != 0 && (bVar3)))) && (fStack_38 < _DAT_00890648)) {
    *(undefined4 *)(param_1 + 100) = 0x41000000;
    *(undefined4 *)(param_1 + 0xa4) = 2;
    *(undefined4 *)(param_1 + 0x90) = DAT_008a2fb4;
    *(undefined4 *)(param_1 + 0x94) = DAT_008a2fb8;
    *(undefined4 *)(param_1 + 0x98) = DAT_008a2fbc;
    iVar2 = DAT_00993cc8;
    if ((DAT_00993cc8 != 0) && (*(int *)(DAT_00993cc8 + 0xe0) != 0)) {
      iVar9 = FUN_0045da30(2);
      (**(code **)(**(int **)(iVar2 + 0xe0) + 0x90))((-(uint)(iVar9 != 0) & 0xfffffffe) + 4);
    }
  }
  (**(code **)(**(int **)(param_1 + 0x80) + 0x34))(auStack_c);
  FUN_0040fe20(&fStack_10,&fStack_10);
  fVar1 = *(float *)(param_1 + 0xa0) * _DAT_00891054 + _DAT_00890614;
  if (_DAT_00890658 < fVar1) {
    fVar1 = _DAT_00890658;
  }
  if (bVar3) {
    fVar1 = fVar1 * _DAT_00891050;
  }
  afStack_34[0] = fStack_10 * fVar1 + *(float *)(param_1 + 0x84);
  afStack_34[2] = fStack_8 * fVar1 + *(float *)(param_1 + 0x8c);
  fStack_1c = afStack_34[0] - fStack_28;
  afStack_34[1] = 0.0;
  fStack_18 = 0.0;
  fStack_14 = afStack_34[2] - fStack_20;
  fVar11 = (float10)FUN_00410220(&fStack_1c);
  fVar1 = (float)fVar11;
  pfVar7 = (float *)(**(code **)(**(int **)(param_1 + 0x80) + 0x24))();
  fVar4 = fStack_1c * *pfVar7 + fStack_18 * pfVar7[1] + fStack_14 * pfVar7[2];
  if (fVar4 < _DAT_00890968) {
    fVar4 = fVar4 * _DAT_00890634;
  }
  pfVar7 = afStack_34;
  if (fVar1 <= _DAT_00890dac) {
    fVar5 = fVar1;
    if (_DAT_00890604 < fVar1) {
      fVar5 = _DAT_00890560;
    }
    if ((fVar1 < _DAT_00890da4) && (*(float *)(param_1 + 0xa0) < _DAT_00890dac)) {
      pfVar7 = (float *)(param_1 + 0x84);
    }
  }
  else {
    fVar5 = _DAT_00890614;
    if (_DAT_00890544 < fVar1) {
      fVar5 = _DAT_00890dd0;
    }
  }
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x38))(fVar5 + fVar4);
  iVar2 = **(int **)(param_1 + 0x58);
  uVar10 = (**(code **)(**(int **)(param_1 + 0x80) + 0x24))();
  (**(code **)(iVar2 + 0x14))(uVar10);
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x3c))(&fStack_3c);
  (**(code **)(**(int **)(param_1 + 0x58) + 0xc))(*pfVar7,pfVar7[1],pfVar7[2]);
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x2c))(7);
  return;
}

