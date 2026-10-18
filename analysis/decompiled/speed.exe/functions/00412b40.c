/* speed.exe 00412b40 FUN_00412b40; analysis pseudocode, not buildable source.
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00412b40(int param_1)

{
  float *pfVar1;
  float10 fVar2;
  float fVar3;
  float fVar4;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined1 auStack_24 [24];
  float fStack_c;
  
  pfVar1 = (float *)(**(code **)(**(int **)(param_1 + 0x54) + 0x20))();
  fStack_3c = *pfVar1;
  fStack_38 = pfVar1[1];
  fStack_34 = pfVar1[2];
  fStack_60 = fStack_3c - *(float *)(param_1 + 0x84);
  fStack_5c = fStack_38 - *(float *)(param_1 + 0x88);
  fStack_58 = fStack_34 - *(float *)(param_1 + 0x8c);
  (**(code **)(**(int **)(param_1 + 0x80) + 0x34))(auStack_24);
  pfVar1 = (float *)(**(code **)(**(int **)(param_1 + 0x80) + 0x24))();
  fStack_58 = *pfVar1;
  fStack_54 = pfVar1[1];
  fStack_50 = pfVar1[2];
  (**(code **)(**(int **)(param_1 + 0x80) + 0x38))(&fStack_34);
  fVar3 = fStack_34 * fStack_64 + fStack_38 * fStack_68 + fStack_30 * fStack_60;
  if (*(int *)(param_1 + 0xa4) == 2) {
    fVar4 = _DAT_00891048;
    if (fVar3 < _DAT_00890968) {
      fVar4 = _DAT_00891078;
    }
    *(float *)(param_1 + 0x90) = fStack_38 * fVar4;
    *(float *)(param_1 + 0x94) = fStack_34 * fVar4;
    *(float *)(param_1 + 0x98) = fStack_30 * fVar4;
    fStack_c = fStack_54 * _DAT_0089064c + *(float *)(param_1 + 0x98);
    fStack_4c = fStack_58 * _DAT_0089064c + *(float *)(param_1 + 0x94) + _DAT_00891074;
    if (fStack_64 < _DAT_00890d3c) {
      fStack_4c = fStack_4c + _DAT_00890604;
    }
    fStack_50 = fStack_5c * _DAT_0089064c + *(float *)(param_1 + 0x90) + *(float *)(param_1 + 0x84);
    fStack_4c = fStack_4c + *(float *)(param_1 + 0x88);
    fStack_48 = fStack_c + *(float *)(param_1 + 0x8c);
    fVar2 = (float10)FUN_005c5e80((fStack_3c - fStack_48) * (fStack_3c - fStack_48) +
                                  (fStack_44 - fStack_50) * (fStack_44 - fStack_50));
    if (fVar2 < (float10)_DAT_00890e98) {
      if (fVar3 < _DAT_00890968) {
        fVar3 = -fVar3;
      }
      if (_DAT_00891070 < fVar3) {
        *(undefined4 *)(param_1 + 0xa4) = 3;
        if (*(float *)(param_1 + 100) < _DAT_00890d3c) {
          *(undefined4 *)(param_1 + 100) = 0x40000000;
        }
        if ((DAT_00993cc8 != 0) && (*(int **)(DAT_00993cc8 + 0xe0) != (int *)0x0)) {
          (**(code **)(**(int **)(DAT_00993cc8 + 0xe0) + 0xf8))();
        }
      }
    }
  }
  else {
    fStack_50 = *(float *)(param_1 + 0x90) * _DAT_00891068 + fStack_5c * _DAT_0089106c +
                *(float *)(param_1 + 0x84);
    fStack_4c = *(float *)(param_1 + 0x94) * _DAT_00891068 + fStack_58 * _DAT_0089106c +
                _DAT_00891054 + *(float *)(param_1 + 0x88);
    fStack_48 = *(float *)(param_1 + 0x98) * _DAT_00891068 + fStack_54 * _DAT_0089106c +
                *(float *)(param_1 + 0x8c);
  }
  fVar3 = fStack_5c + *(float *)(param_1 + 0x84);
  fStack_64 = fStack_58 + *(float *)(param_1 + 0x88);
  fVar4 = fStack_54 + *(float *)(param_1 + 0x8c);
  fStack_60 = fVar4;
  (**(code **)(**(int **)(param_1 + 0x58) + 0xc))(fVar3,fStack_64);
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x38))(0x42c80000);
  pfVar1 = (float *)(**(code **)(**(int **)(param_1 + 0x80) + 0x24))();
  fStack_30 = *pfVar1;
  fStack_2c = pfVar1[1];
  fStack_28 = pfVar1[2];
  (**(code **)(**(int **)(param_1 + 0x58) + 0x14))(&fStack_30);
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x3c))(&fStack_64);
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x2c))(7);
  if (fVar4 <= _DAT_00890968) {
    if (fVar3 <= _DAT_00891060) goto LAB_00412f0c;
  }
  else {
    if (_DAT_00891064 < fVar3) {
      *(undefined4 *)(param_1 + 100) = 0;
    }
    if (*(float *)(param_1 + 0x88) <= fStack_5c) goto LAB_00412f0c;
  }
  *(undefined4 *)(param_1 + 100) = 0;
LAB_00412f0c:
  if (*(float *)(param_1 + 100) < _DAT_00890968 != (*(float *)(param_1 + 100) == _DAT_00890968)) {
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  return;
}

