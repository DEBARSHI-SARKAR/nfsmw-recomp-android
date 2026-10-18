/* speed.exe 00417a20 FUN_00417a20; analysis pseudocode, not buildable source.
 * calls 0040fe20 FUN_0040fe20
 * calls 00417490 FUN_00417490
 * calls 00417790 FUN_00417790
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00417a20(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  float *pfVar5;
  float *pfVar6;
  float unaff_EBX;
  float10 fVar7;
  float10 fVar8;
  float fStack_64;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined4 uStack_40;
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
  float fStack_10;
  float fStack_c;
  
  piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x34) + 0x54))();
  pfVar5 = (float *)(**(code **)(*piVar4 + 0x24))();
  pfVar6 = (float *)(**(code **)(*piVar4 + 0x20))();
  fStack_24 = *(float *)(param_1 + 0x7ac);
  fStack_30 = *pfVar5 * _DAT_00890840 + *pfVar6;
  fStack_20 = *(float *)(param_1 + 0x7b0);
  fStack_1c = *(float *)(param_1 + 0x7b4);
  fStack_38 = *(float *)(param_1 + 0x8c);
  fStack_2c = pfVar5[1] * _DAT_00890840 + pfVar6[1];
  fStack_28 = pfVar5[2] * _DAT_00890840 + pfVar6[2];
  fStack_18 = *pfVar5 * _DAT_008910e4 + *pfVar6;
  fStack_14 = pfVar5[1] * _DAT_008910e4 + pfVar6[1];
  fStack_10 = pfVar5[2] * _DAT_008910e4 + pfVar6[2];
  fStack_3c = fStack_24 * _DAT_00890840 + *(float *)(param_1 + 0x88);
  fStack_34 = fStack_1c * _DAT_00890840 + *(float *)(param_1 + 0x90);
  FUN_00417790(&fStack_3c);
  fStack_48 = DAT_008a2fb4;
  fStack_44 = DAT_008a2fb8;
  uStack_40 = DAT_008a2fbc;
  FUN_00417490(pfVar6,&fStack_18,&fStack_30,&fStack_3c,&fStack_48);
  fStack_54 = fStack_3c - fStack_30;
  fStack_50 = fStack_38 - fStack_2c;
  fStack_4c = fStack_34 - fStack_28;
  fVar7 = (float10)FUN_005c5e80(fStack_50 * fStack_50 +
                                fStack_54 * fStack_54 + fStack_4c * fStack_4c);
  fVar8 = (float10)(**(code **)(*piVar4 + 0x2c))();
  fStack_58 = fStack_50;
  fStack_50 = 0.0;
  fStack_18 = *pfVar5 - fStack_24;
  fStack_14 = pfVar5[1];
  fStack_10 = pfVar5[2] - fStack_1c;
  FUN_0040fe20(&fStack_54,&fStack_24);
  fVar1 = fStack_18 * fStack_24 + fStack_20 * fStack_14 + fStack_1c * fStack_10;
  fVar2 = fStack_20 * pfVar5[1] + fStack_1c * pfVar5[2] + fStack_24 * *pfVar5;
  (**(code **)(**(int **)(param_1 + 0x8b0) + 0xc))(0);
  if (unaff_EBX <= _DAT_00890604) {
    if (((float)fVar8 < _DAT_00890da8) && (fVar1 < _DAT_00890dac)) {
      (**(code **)(**(int **)(param_1 + 0x8b0) + 0xc))(1);
    }
  }
  else {
    fStack_64 = (float)fVar7 * _DAT_00890864 + _DAT_008f8dd0;
    if (DAT_008f8dcc < fStack_64) {
      fStack_64 = DAT_008f8dcc;
    }
    fVar3 = _DAT_008f8dd4 * unaff_EBX;
    if (fStack_64 < _DAT_008f8dd4 * unaff_EBX) {
      fVar3 = fStack_64;
    }
    if (fVar1 <= (unaff_EBX * unaff_EBX) / (fVar3 * _DAT_008910fc)) {
      *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x84) * _DAT_00891054;
      (**(code **)(**(int **)(param_1 + 0x8b0) + 0xc))(1);
    }
  }
  if (DAT_0090d621 != '\0') {
    (**(code **)(**(int **)(param_1 + 0x8b0) + 0xc))(1);
  }
  if (_DAT_00890d3c < fVar1) {
    fVar1 = *(float *)(param_1 + 0x84) / fVar1;
    fStack_58 = fStack_58 * fVar1;
    fStack_50 = fStack_50 * fVar1;
  }
  if ((fVar2 < _DAT_00890968) || (_DAT_00890858 <= fVar2)) {
    fStack_54 = fVar2;
    if ((fVar2 < _DAT_00890968) &&
       ((_DAT_00890db8 < fVar2 &&
        (fStack_54 = fVar2 * _DAT_00890604, *(float *)(param_1 + 0x7b0) < _DAT_00890968)))) {
      fStack_54 = fStack_54 + *(float *)(param_1 + 0x7b0);
    }
  }
  else {
    fStack_54 = fVar2 * _DAT_00890da4;
    if (_DAT_00890968 < *(float *)(param_1 + 0x7b0)) {
      fStack_54 = *(float *)(param_1 + 0x7b0) + *(float *)(param_1 + 0x7b0) + fVar2 * _DAT_00890da4;
    }
  }
  fVar7 = (float10)FUN_005c5e80(fStack_4c * fStack_4c +
                                fStack_48 * fStack_48 + fStack_44 * fStack_44);
  if ((float10)_DAT_00890cd4 < fVar7) {
    fVar7 = ((float10)*(float *)(param_1 + 0x84) / fVar7) * (float10)_DAT_008906a0;
    fStack_48 = (float)((float10)fStack_48 * fVar7);
    fStack_44 = (float)((float10)fStack_44 * fVar7);
    fStack_58 = (float)((float10)fStack_58 * (float10)_DAT_0089107c + (float10)fStack_4c * fVar7);
    fStack_54 = fStack_54 * _DAT_0089107c + fStack_48;
    fStack_50 = fStack_50 * _DAT_0089107c + fStack_44;
  }
  (**(code **)(**(int **)(param_1 + 0x8b0) + 4))(&fStack_58);
  pfVar5 = (float *)(**(code **)(*piVar4 + 0x20))();
  fStack_14 = *(float *)(param_1 + 0x7b8) - *pfVar5;
  fStack_10 = *(float *)(param_1 + 0x7bc) - pfVar5[1];
  fStack_c = *(float *)(param_1 + 0x7c0) - pfVar5[2];
  (**(code **)(**(int **)(param_1 + 0x8b0) + 0x10))(&fStack_14);
  return;
}

