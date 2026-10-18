/* speed.exe 00412310 FUN_00412310; analysis pseudocode, not buildable source.
 * calls 007854b0 FUN_007854b0
 * calls 004048c0 FUN_004048c0
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00412310(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  
  pfVar9 = (float *)(**(code **)(**(int **)(param_1 + 0x4c) + 0x24))();
  fVar2 = *pfVar9;
  fVar3 = pfVar9[1];
  fVar4 = pfVar9[2];
  fVar11 = (float10)FUN_005c5e80(fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4);
  fVar1 = (float)fVar11;
  pfVar9 = (float *)(**(code **)(**(int **)(param_1 + 0x4c) + 0x20))();
  fVar5 = *pfVar9;
  fVar6 = pfVar9[1];
  fVar7 = pfVar9[2];
  if (_DAT_00890d3c <= fVar1) {
    fVar8 = fVar1 + _DAT_00890bf8;
    if (_DAT_00891040 < fVar1 + _DAT_00890bf8) {
      fVar8 = _DAT_00891040;
    }
    fVar1 = _DAT_0089096c / fVar1;
    uStack_6c = 0x3f800000;
    fVar8 = fVar1 * fVar8;
    fStack_68 = fVar2 * fVar8 + fVar5;
    fStack_64 = fVar3 * fVar8 + fVar6;
    fStack_60 = fVar4 * fVar8 + fVar7;
    uStack_5c = 0x3f800000;
    fStack_78 = fVar5;
    fStack_74 = fVar6;
    fStack_70 = fVar7;
    FUN_004048c0();
    iVar10 = FUN_007854b0(&fStack_78,&fStack_58,2);
    if (iVar10 != 0) {
      fVar11 = (float10)FUN_005c5e80((fStack_58 - fVar5) * (fStack_58 - fVar5) +
                                     (fStack_54 - fVar6) * (fStack_54 - fVar6) +
                                     (fStack_50 - fVar7) * (fStack_50 - fVar7));
      fVar12 = ((float10)fStack_48 * (float10)fVar2 +
               (float10)fStack_44 * (float10)fVar3 + (float10)fStack_40 * (float10)fVar4) *
               (float10)fVar1;
      if (fVar12 < (float10)_DAT_00890968) {
        fVar11 = (fVar12 * fVar12 * (float10)_DAT_0089103c) /
                 (fVar11 * (float10)fVar1 * fVar11 * (float10)fVar1);
        *param_2 = (float)((float10)fStack_48 * fVar11);
        param_2[1] = (float)((float10)fStack_44 * fVar11);
        param_2[2] = (float)((float10)fStack_40 * fVar11);
        return;
      }
    }
  }
  return;
}

