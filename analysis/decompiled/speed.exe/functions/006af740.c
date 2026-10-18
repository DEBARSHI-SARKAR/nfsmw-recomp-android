/* speed.exe 006af740 FUN_006af740; analysis pseudocode, not buildable source.
 * calls 0066bb00 FUN_0066bb00
 * calls 00401da0 FUN_00401da0
 * calls 00691af0 FUN_00691af0
 * calls 006919c0 FUN_006919c0
 * calls 00691c30 FUN_00691c30
 * calls 00692380 FUN_00692380
 * calls 00478d00 FUN_00478d00
 * calls 00401ae0 FUN_00401ae0
 * calls 00401d10 FUN_00401d10
 * calls 006927a0 FUN_006927a0
 * calls 00692140 FUN_00692140
 * calls 00691a10 FUN_00691a10
 * calls 006922c0 FUN_006922c0
 * calls 00692690 FUN_00692690
 * calls 006a0910 FUN_006a0910
 * calls 00691c10 FUN_00691c10
 * calls 006e8de0 FUN_006e8de0
 * calls 00401d70 FUN_00401d70
 * calls 00402060 FUN_00402060
 * calls 00691ac0 FUN_00691ac0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006af740(int *param_1,float param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  uint3 uVar13;
  float unaff_ESI;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_18;
  
  piVar2 = (int *)param_1[0x44];
  if (piVar2 == (int *)0x0) {
    return;
  }
  if ((int *)param_1[0x45] == (int *)0x0) {
    return;
  }
  iVar9 = (**(code **)(*(int *)param_1[0x45] + 8))();
  if (iVar9 != 4) {
    return;
  }
  uVar10 = (**(code **)(*(int *)param_1[0x12] + 0xcc))();
  (**(code **)(*(int *)param_1[0x12] + 0x20))();
  fVar14 = (float10)(**(code **)(*param_1 + 0x3c))();
  param_1[0x23] = (int)(float)fVar14;
  iVar9 = *param_1;
  iVar11 = (**(code **)(*piVar2 + 8))();
  uVar12 = uVar10;
  fVar18 = param_2;
  fVar14 = (float10)(**(code **)(iVar9 + 0x44))(uVar10,param_2,*(undefined1 *)(iVar11 + 0x21));
  cVar8 = (char)((uint)uVar12 >> 0x18);
  param_1[0x3f] = (int)(float)fVar14;
  (**(code **)(*param_1 + 0x38))();
  (**(code **)(*param_1 + 0x40))(uVar10,param_2);
  (**(code **)(*param_1 + 0x48))(param_2);
  (**(code **)(*param_1 + 0x34))();
  fVar4 = *(float *)(param_1[0x53] + 0x5c) * _DAT_008a9398;
  fVar14 = (float10)FUN_0066bb00(param_1 + 0x51,
                                 CONCAT31((int3)((uint)param_1[0x21] >> 8),param_1[0x21] != 1));
  fVar15 = (float10)FUN_00692140(0);
  fVar20 = (float)fVar15;
  FUN_00692140(1);
  iVar9 = (**(code **)(*(int *)param_1[0x45] + 0x4c))();
  fStack_38 = (float)iVar9 * _DAT_008910f0;
  if (fStack_38 < _DAT_008910f0) {
    fStack_38 = 0.25;
  }
  piVar2 = param_1 + 0x66;
  fVar15 = (float10)FUN_00691a10(param_2);
  fStack_34 = -1.0;
  if (param_1[0x21] != 0) {
    fStack_34 = 1.0;
  }
  FUN_00691ac0(param_1[0x21]);
  fVar22 = *(float *)(param_1[0x58] + 0x80);
  fVar16 = (float10)FUN_00691ac0(param_1[0x21]);
  fVar22 = (float)(fVar16 * (float10)fVar22 * (float10)fStack_34);
  fVar1 = (float)param_1[0x3b] * _DAT_008a9394;
  fStack_3c = *(float *)(param_1[0x58] + 0x6c);
  if (_DAT_00890968 < fStack_3c) {
    fVar16 = (float10)FUN_00401ae0(fVar1,*(undefined4 *)(param_1[0x53] + 0x5c),param_1[100]);
    fStack_3c = (float)(((float10)_DAT_0089096c - fVar16) * (float10)fStack_3c *
                       (float10)(float)param_1[0x23]);
    cVar7 = (**(code **)(param_1[0x13] + 0x10))();
    fVar24 = fStack_3c;
    if (cVar7 != '\0') {
      fVar24 = fStack_3c * (float)fVar15;
    }
    fVar22 = (fVar24 + _DAT_0089096c) * fVar22;
  }
  if ((fVar22 == _DAT_00890968) && (param_1[0x21] != 1)) {
    return;
  }
  iVar11 = param_1[0x21];
  if ((iVar11 == 0) || (iVar11 == 2)) {
    fVar24 = _DAT_008aae24;
    if (iVar11 == 0) {
      fVar24 = _DAT_008abe70;
    }
    fVar24 = fVar24 * _DAT_008a9398 + fVar4;
    if (((fVar24 < (float)param_1[0x3b]) || (fVar24 < (float)param_1[0x3d])) ||
       (_DAT_00890cd4 <= (float)param_1[0x23])) {
      uVar12 = 0x3d4ccccd;
      goto LAB_006af9f7;
    }
LAB_006af98f:
    if (*piVar2 == 0) {
      *piVar2 = 2;
    }
  }
  else {
    if (iVar11 == 1) goto LAB_006af98f;
    uVar12 = 0x3e800000;
LAB_006af9f7:
    FUN_006919c0(uVar12);
  }
  fVar16 = (float10)(**(code **)(*param_1 + 0x50))(fVar1);
  fVar24 = (float)fVar16;
  fVar16 = (float10)FUN_006a0910(fVar24,fVar1);
  if (cVar8 == '\0') {
    fVar17 = (float10)(**(code **)(*(int *)param_1[0x12] + 0x28))();
    if ((fVar17 <= (float10)_DAT_00890968) || ((float)param_1[0x23] <= _DAT_00890968)) {
      fVar16 = (float10)(float)fVar16;
    }
    else {
      param_1[0x23] = 0x3f800000;
      fVar24 = (float)param_1[99] * (float)param_1[0x3f];
      fVar16 = (float10)_DAT_00890968;
    }
  }
  fVar1 = (float)param_1[0x3d];
  iVar11 = param_1[0x21];
  fVar22 = ((unaff_ESI - fStack_34) / unaff_ESI) * fVar20 * fVar22 + fStack_34;
  param_1[0x3d] = (int)fVar22;
  if (((iVar11 != 1) && (*piVar2 == 0)) &&
     ((float10)_DAT_00890968 < (float10)fStack_38 * fVar16 * (float10)fVar18)) {
    fVar16 = fVar16 * (float10)_DAT_008aac20;
  }
  fVar23 = 0.0;
  fVar19 = 0.0;
  fVar18 = (float)((float10)fVar24 * (float10)(float)param_1[0x23] +
                  ((float10)_DAT_0089096c - (float10)(float)param_1[0x23]) * fVar16);
  *(bool *)(param_1 + 0x42) = fVar18 < _DAT_00890968;
  if (iVar11 == 1) goto LAB_006afe47;
  iVar3 = *piVar2;
  if (iVar3 == 0) {
    param_1[0x41] = 0;
    fVar23 = fVar18;
LAB_006afc2a:
    fVar19 = -(fVar23 * fStack_3c);
  }
  else {
    if (iVar3 == 1) {
      fVar24 = (float)param_1[0x3b] - fVar22;
      fVar19 = _DAT_008f8dc8;
      if ((fVar24 <= _DAT_008f8dc8) && (fVar19 = fVar24, fVar24 < -_DAT_008f8dc8)) {
        fVar19 = -_DAT_008f8dc8;
      }
      fVar23 = (fVar22 - (float)param_1[0x3b]) * _DAT_008a9394;
      fVar24 = _DAT_008f8d9c;
      if (((((float)param_1[0x41] != _DAT_00890968) &&
           (fVar23 * (float)param_1[0x41] < _DAT_00890968)) && (_DAT_008aac54 < ABS(fVar23))) &&
         (_DAT_008aac54 < ABS((float)param_1[0x41]))) {
        fVar24 = _DAT_008f8d9c * _DAT_008933d4;
      }
      param_1[0x41] = (int)fVar23;
      fVar23 = fVar24 * fVar19 * (float)fVar14;
      goto LAB_006afc2a;
    }
    if (iVar3 == 2) {
      param_1[0x41] = 0;
    }
  }
  if (iVar11 != 1) {
    if (*piVar2 == 0) {
      fVar24 = _DAT_0089096c / fVar4;
      fVar5 = (fVar19 + fVar18) * fVar24;
      fVar6 = _DAT_0089096c - *(float *)(param_1[0x58] + 0x70);
      cVar8 = FUN_00691c30();
      fVar21 = fVar20;
      if (cVar8 != '\0') {
        fVar14 = (float10)FUN_00401d10(fVar20);
        fVar24 = (float)(((float10)_DAT_0089096c - (float10)fVar6) * fVar14 * fVar14 *
                         (float10)_DAT_00890ea8 + (float10)fVar24);
      }
      cVar8 = FUN_00691c10();
      if (cVar8 == '\0') {
        fVar14 = (float10)fVar24;
        fVar20 = fVar21;
      }
      else {
        fVar14 = (float10)FUN_00401d10(fVar20);
        fVar14 = fVar14 * fVar14 * (float10)fVar6 * (float10)_DAT_00890ea8 + (float10)fVar24;
        fVar20 = fVar21;
      }
      fVar22 = (float)((float10)(fVar5 - (fVar22 - fVar1) / fStack_18) / fVar14);
      fVar14 = (float10)FUN_00401da0(fVar22,0);
      fVar23 = (float)(fVar14 + (float10)fVar23);
      fVar19 = fVar19 - fVar22 * fStack_3c;
    }
    if (iVar11 != 1) {
      if ((*piVar2 == 0) && (0 < (int)(float)fVar15)) {
        fVar14 = (float10)FUN_006922c0();
        if ((((float)param_1[0x23] <= _DAT_00895074) ||
            (((float10)fStack_38 * fVar14 <= (float10)_DAT_00890cd4 || (2 < param_1[0x21])))) ||
           (_DAT_00890968 <= (float)param_1[0x3d] - (float)param_1[0x3b])) {
          fVar14 = (float10)FUN_00402060(((float)param_1[0x3d] - (float)param_1[0x3b]) *
                                         _DAT_008f8d9c,-ABS(fVar18),ABS(fVar18));
          fVar19 = (float)(fVar14 + (float10)fVar19);
        }
        else {
          param_1[0x3d] = param_1[0x3b];
          FUN_00692380((float)param_1[0x3b] / fVar20);
        }
      }
      if ((((param_1[0x21] == 2) || (param_1[0x21] == 0)) &&
          (fVar22 = fVar19 + fVar18, fVar19 < fVar18)) && (fVar22 < _DAT_00890968)) {
        fVar14 = (float10)FUN_00478d00(fVar22 * _DAT_00894200);
        fVar19 = (float)(fVar14 * (float10)*(float *)(param_1[0x58] + 0x74) * (float10)fVar22 +
                        (float10)fVar19);
      }
    }
  }
LAB_006afe47:
  if (_DAT_00890968 < (float)param_1[0x6a]) {
    fVar14 = (float10)FUN_006e8de0();
    fVar14 = (float10)(float)param_1[0x6a] - fVar14;
    if (fVar14 < (float10)_DAT_00890968 == (fVar14 == (float10)_DAT_00890968)) {
      fVar14 = (float10)fsin(fVar14 * (float10)_DAT_008abe6c);
      param_1[0x3b] =
           (int)(float)((fVar14 * (float10)_DAT_008933d4 + (float10)_DAT_0089096c) *
                       (float10)(float)param_1[0x3b]);
    }
    else {
      param_1[0x6a] = 0;
      (**(code **)(param_1[0x1e] + 8))();
    }
  }
  if (((param_1[0x21] != 1) && (_DAT_00890968 < (float)param_1[0x23])) &&
     ((param_1[0x21] < 3 && ((*piVar2 == 0 && (fVar19 * fVar18 < _DAT_00890968)))))) {
    fVar14 = (float10)FUN_00401ae0(iVar9,*(undefined4 *)(param_1[0x53] + 0x5c),param_1[100]);
    fVar14 = (float10)_DAT_0089096c -
             (float10)*(float *)(param_1[0x58] + 0x74) * (float10)(float)param_1[0x23] *
             ((float10)_DAT_0089096c - fVar14 * (float10)(float)param_1[0x23]);
    fVar19 = (float)(fVar14 * fVar14 * (float10)fVar19);
  }
  fVar18 = (fVar19 + fVar18) / fVar4;
  param_1[0x3c] = (int)fVar18;
  fVar14 = (float10)FUN_00401d70(fVar18 * fStack_18 + (float)param_1[0x3b],fStack_34,unaff_ESI);
  param_1[0x3b] = (int)(float)fVar14;
  if (fVar20 != _DAT_00890968) {
    FUN_00692690(unaff_ESI / fVar20);
  }
  if ((unaff_ESI < (float)param_1[0x3d]) && (fVar20 != _DAT_00890968)) {
    if (_DAT_00890968 < fVar23 * fVar20) {
      fVar23 = 0.0;
    }
    param_1[0x3d] = (int)unaff_ESI;
    FUN_00692380(unaff_ESI / fVar20);
  }
  if ((_DAT_00890968 < fVar23) && ((int *)param_1[0x46] != (int *)0x0)) {
    fVar14 = (float10)(**(code **)(*(int *)param_1[0x46] + 4))();
    fVar23 = (float)((fVar14 * (float10)_DAT_008933d4 + (float10)_DAT_0089096c) * (float10)fVar23);
  }
  fVar14 = (float10)FUN_00691af0(param_1[0x21]);
  param_1[0x20] = (int)(float)(fVar14 * (float10)fVar23 * (float10)fVar20);
  cVar8 = (**(code **)(*param_1 + 0x2c))();
  uVar13 = (uint3)((uint)iVar11 >> 8);
  if ((cVar8 == '\0') && (*piVar2 != 2)) {
    iVar9 = (uint)uVar13 << 8;
  }
  else {
    iVar9 = CONCAT31(uVar13,1);
  }
  uVar12 = (**(code **)(param_1[0x13] + 4))
                     (fStack_18,param_1[0x60],(float)param_1[0x3b] * _DAT_008a9394,fVar4);
  fVar14 = (float10)FUN_006927a0(iVar9,uVar12);
  param_1[0x60] = (int)(float)fVar14;
  if ((*piVar2 == 0) && (cVar8 = (**(code **)(*(int *)param_1[0x12] + 0x20))(), cVar8 == '\0')) {
    iVar9 = (**(code **)(*param_1 + 0x4c))(param_1[0x21],(float)param_1[0x3d] * _DAT_008a9394);
    param_1[0x62] = iVar9;
    return;
  }
  param_1[0x62] = 0;
  return;
}

