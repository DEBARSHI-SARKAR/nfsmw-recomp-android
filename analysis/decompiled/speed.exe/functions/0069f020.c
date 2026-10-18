/* speed.exe 0069f020 FUN_0069f020; analysis pseudocode, not buildable source.
 * calls 00695870 FUN_00695870
 * calls 005cb5d0 FUN_005cb5d0
 * calls 00401ae0 FUN_00401ae0
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall
FUN_0069f020(int param_1,float param_2,float param_3,undefined4 param_4,float param_5,float param_6,
            float param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  float10 fVar10;
  float local_10;
  
  if ((*(float *)(param_1 + 0xd4) < _DAT_00890968 != (*(float *)(param_1 + 0xd4) == _DAT_00890968))
     && (*(char *)(param_1 + 0x10c) == '\0')) {
    *(float *)(param_1 + 0xd0) = param_3 / *(float *)(param_1 + 0xc4);
  }
  fVar1 = *(float *)(param_1 + 0xf4);
  *(float *)(param_1 + 0xf4) = param_3;
  *(float *)(param_1 + 0xec) = param_2;
  fVar1 = (param_3 - fVar1) / param_6;
  fVar2 = _DAT_00890968;
  if (_DAT_00890968 < param_5) {
    fVar2 = param_5;
  }
  *(float *)(param_1 + 0xd4) = fVar2;
  *(undefined4 *)(param_1 + 0x108) = 0x3f800000;
  if ((*(float *)(param_1 + 0xcc) <= _DAT_00890968) || (uVar9 = 1, *(int *)(param_1 + 0x104) != 1))
  {
    uVar9 = 0;
  }
  *(undefined1 *)(param_1 + 0x10c) = uVar9;
  if (*(float *)(param_1 + 0xcc) + *(float *)(param_1 + 200) <= _DAT_00890968) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
    fVar2 = param_3;
    if (param_3 < _DAT_00890968) {
      fVar2 = -param_3;
    }
    if (_DAT_0089096c <= fVar2) {
      iVar5 = *(int *)(*(int *)(param_1 + 0xfc) + 8);
      fVar2 = *(float *)(iVar5 + 0x10) * _DAT_008a938c * *(float *)(param_1 + 0xcc) * _DAT_008aac84
              + *(float *)(iVar5 + 8 + *(int *)(param_1 + 0x104) * 4) * _DAT_008a938c *
                *(float *)(param_1 + 200) * _DAT_008aac84;
      if (_DAT_00890968 < *(float *)(param_1 + 0xd0)) {
        fVar2 = -fVar2;
      }
    }
    else {
      fVar2 = _DAT_008aac20 / *(float *)(param_1 + 0xc4);
      fVar2 = fVar2 * *(float *)(param_1 + 200) * param_3 * param_5 +
              fVar2 * *(float *)(param_1 + 0xcc) * param_3 * param_5;
    }
    *(float *)(param_1 + 0xe0) = fVar2 + *(float *)(param_1 + 0xe0);
  }
  if (_DAT_00890968 <= param_3) {
    param_5 = param_3;
  }
  else {
    param_5 = -param_3;
  }
  fVar10 = (float10)FUN_005cb5d0(param_2,param_5);
  *(float *)(param_1 + 0x100) = (float)fVar10;
  if ((*(char *)(param_1 + 0x10c) == '\0') && (*(char *)(param_1 + 0x10d) == '\0')) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
  }
  else {
    *(float *)(param_1 + 0xe8) = *(float *)(param_1 + 0xd0) * *(float *)(param_1 + 0xc4) - param_3;
  }
  fVar2 = *(float *)(param_1 + 0xe8);
  bVar8 = false;
  local_10 = 1.0;
  if (fVar2 < _DAT_00890968) {
    fVar2 = -fVar2;
  }
  if ((*(char *)(param_1 + 0x10d) != '\0') && (*(float *)(param_1 + 0x118) < fVar2)) {
    bVar8 = true;
    local_10 = *(float *)(param_1 + 0x118) / fVar2;
    *(float *)(param_1 + 0x108) = local_10 * *(float *)(param_1 + 0x108);
  }
  fVar10 = (float10)FUN_005c5e80(param_2 * param_2 +
                                 *(float *)(param_1 + 0xe8) * *(float *)(param_1 + 0xe8));
  fVar2 = (float)fVar10;
  fVar3 = *(float *)(param_1 + 0x100);
  if (fVar3 < _DAT_00890968) {
    fVar3 = -fVar3;
  }
  iVar5 = *(int *)(param_1 + 0xf8);
  iVar6 = *(int *)(param_1 + 0x104);
  fVar10 = (float10)FUN_00401ae0(fVar3,0,0x3d088889);
  fVar10 = fVar10 * (float10)*(float *)(*(int *)(iVar5 + 8) + 0x18 + iVar6 * 4) *
           (float10)*(float *)(param_1 + 0x11c) * (float10)*(float *)(param_1 + 0xe4) *
           (float10)*(float *)(param_1 + 0xd4) * (float10)_DAT_008aada8;
  *(float *)(param_1 + 0xd8) = (float)fVar10;
  if (_DAT_00890968 < *(float *)(param_1 + 0x100)) {
    *(float *)(param_1 + 0xd8) = (float)-fVar10;
  }
  cVar4 = *(char *)(param_1 + 0x10c);
  if ((cVar4 == '\0') || (fVar2 <= _DAT_0089096c)) {
    fVar10 = (float10)*(float *)(param_1 + 0xe0) / (float10)*(float *)(param_1 + 0xc4);
    if (bVar8) {
      fVar10 = (float10)FUN_00401ae0(param_4,0x4156930c,0x41b2cfdf,(float)fVar10);
      fVar10 = (float10)FUN_00695870((float)((((fVar10 * (float10)_DAT_008ab230 +
                                               (float10)_DAT_008ab22c) *
                                               (float10)*(float *)(*(int *)(iVar5 + 8) + 0x20 +
                                                                  iVar6 * 4) *
                                              (float10)*(float *)(param_1 + 0xe4)) / (float10)fVar2)
                                             * (float10)*(float *)(param_1 + 0xd4) *
                                            (float10)*(float *)(param_1 + 0xe8)));
    }
    *(float *)(param_1 + 0xdc) = (float)fVar10;
  }
  else {
    fVar3 = *(float *)(*(int *)(iVar5 + 8) + 0x20 + iVar6 * 4);
    *(float *)(param_1 + 0xdc) =
         (fVar3 * *(float *)(param_1 + 0xe4) * *(float *)(param_1 + 0xe8) *
         *(float *)(param_1 + 0xd4)) / (fVar2 * _DAT_008aac78);
    *(float *)(param_1 + 0xd8) =
         (*(float *)(param_1 + 0xe4) / fVar2) * fVar3 * param_2 * *(float *)(param_1 + 0xd4) *
         _DAT_008ab69c;
  }
  if (((*(char *)(param_1 + 0x10d) != '\0') && (!bVar8)) && (cVar4 == '\0')) {
    *(float *)(param_1 + 0xdc) =
         ((*(float *)(param_1 + 0x114) * *(float *)(param_1 + 0xc4) - fVar1) /
         *(float *)(param_1 + 0xc4)) * _DAT_008aac84 + *(float *)(param_1 + 0xdc);
  }
  fVar2 = *(float *)(param_1 + 0xd8) * *(float *)(param_1 + 0xd8) +
          *(float *)(param_1 + 0xdc) * *(float *)(param_1 + 0xdc);
  fVar3 = (*(float *)(param_1 + 200) * _DAT_008aacec + _DAT_0089096c) *
          *(float *)(*(int *)(iVar5 + 8) + 0x38 + iVar6 * 4) * *(float *)(param_1 + 0xe4) *
          *(float *)(param_1 + 0xd4);
  if ((fVar3 * fVar3 < fVar2) && (_DAT_008aabe0 < fVar2)) {
    fVar10 = (float10)FUN_005c5e80(fVar2);
    fVar10 = (float10)fVar3 / fVar10;
    *(float *)(param_1 + 0x108) = (float)(fVar10 * (float10)*(float *)(param_1 + 0x108));
    *(float *)(param_1 + 0xd8) = (float)(fVar10 * (float10)*(float *)(param_1 + 0xd8));
    *(float *)(param_1 + 0xdc) = (float)(fVar10 * (float10)*(float *)(param_1 + 0xdc));
    local_10 = (float)(fVar10 * fVar10 * (float10)local_10);
  }
  if (param_3 < _DAT_00890968) {
    param_3 = -param_3;
  }
  if (param_3 <= _DAT_0089096c) {
    if (param_2 < _DAT_00890968) {
      param_2 = -param_2;
    }
    if (_DAT_0089096c <= param_2) {
      param_2 = _DAT_0089096c;
    }
    *(float *)(param_1 + 0xd8) = param_2 * *(float *)(param_1 + 0xd8);
  }
  else {
    fVar10 = (float10)fsin((float10)*(float *)(param_1 + 0x100) * (float10)_DAT_008aabd8);
    *(float *)(param_1 + 0xdc) =
         (float)((float10)*(float *)(param_1 + 0xdc) -
                (fVar10 / (float10)*(float *)(*(int *)(*(int *)(param_1 + 0xf8) + 8) + 0x18 +
                                             *(int *)(param_1 + 0x104) * 4)) *
                (float10)*(float *)(param_1 + 0xd8) * (float10)param_7);
  }
  if ((!bVar7) && (1 < *(uint *)(param_1 + 0xf0))) {
    *(float *)(param_1 + 0xdc) =
         *(float *)(*(int *)(param_1 + 0xa4) + 0xec) * *(float *)(param_1 + 0xdc);
    *(float *)(param_1 + 0xd8) =
         *(float *)(*(int *)(param_1 + 0xa4) + 0xf0) * *(float *)(param_1 + 0xd8);
  }
  if (*(char *)(param_1 + 0x10c) == '\0') {
    if ((*(char *)(param_1 + 0x10d) != '\0') && (local_10 < _DAT_0089096c)) {
      fVar2 = ((*(float *)(param_1 + 0xe0) - *(float *)(param_1 + 0xdc) * *(float *)(param_1 + 0xc4)
               ) + *(float *)(param_1 + 0x110)) * _DAT_008933d4;
      *(float *)(param_1 + 0x110) = fVar2;
      fVar2 = (fVar2 - *(float *)(*(int *)(param_1 + 0xa4) + 0xe4) * *(float *)(param_1 + 0xd0) *
                       _DAT_008aac78) * _DAT_00890cd4 -
              (local_10 * *(float *)(param_1 + 0xe8)) / (param_6 * *(float *)(param_1 + 0xc4));
      *(float *)(param_1 + 0x114) = fVar2;
      fVar2 = (fVar1 / *(float *)(param_1 + 0xc4) - fVar2) * local_10 + fVar2;
      *(float *)(param_1 + 0x114) = fVar2;
      *(float *)(param_1 + 0xd0) = fVar2 * param_6 + *(float *)(param_1 + 0xd0);
      return (float10)*(float *)(param_1 + 0xd8);
    }
    *(float *)(param_1 + 0xd0) = *(float *)(param_1 + 0xf4) / *(float *)(param_1 + 0xc4);
    return (float10)*(float *)(param_1 + 0xd8);
  }
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  return (float10)*(float *)(param_1 + 0xd8);
}

