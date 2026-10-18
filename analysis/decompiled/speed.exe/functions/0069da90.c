/* speed.exe 0069da90 FUN_0069da90; analysis pseudocode, not buildable source.
 * calls 0068e2e0 FUN_0068e2e0
 * calls 005cb5d0 FUN_005cb5d0
 * calls 0068e180 FUN_0068e180
 * calls 0068e090 FUN_0068e090
 * calls 0068e220 FUN_0068e220
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall
FUN_0069da90(int param_1,float param_2,float param_3,float param_4,float param_5,float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float10 fVar11;
  float10 fVar12;
  float local_24;
  float local_1c;
  
  iVar4 = *(int *)(param_1 + 0x10c);
  iVar5 = *(int *)(*(int *)(param_1 + 0x104) + 8);
  fVar9 = *(float *)(iVar5 + 8 + iVar4 * 4) * _DAT_008a938c * _DAT_008f8a90;
  iVar6 = *(int *)(*(int *)(param_1 + 0x100) + 8);
  fVar8 = *(float *)(iVar5 + 0x10) * _DAT_008a938c * _DAT_008f8a94;
  fVar1 = *(float *)(iVar6 + 0x20 + iVar4 * 4);
  fVar2 = *(float *)(iVar6 + 0x38 + iVar4 * 4);
  if ((*(float *)(param_1 + 0xd4) < _DAT_00890968 != (*(float *)(param_1 + 0xd4) == _DAT_00890968))
     && (*(char *)(param_1 + 0x134) == '\0')) {
    *(float *)(param_1 + 0xd0) = param_3 / *(float *)(param_1 + 0xc4);
  }
  fVar3 = *(float *)(param_1 + 0xfc);
  *(float *)(param_1 + 0xfc) = param_3;
  fVar3 = (param_3 - fVar3) / param_6;
  fVar10 = _DAT_00890968;
  if (_DAT_00890968 < param_5) {
    fVar10 = param_5;
  }
  *(float *)(param_1 + 0xd4) = fVar10;
  *(float *)(param_1 + 0x130) = param_2;
  fVar9 = fVar9 * *(float *)(param_1 + 200);
  fVar8 = fVar8 * *(float *)(param_1 + 0xcc);
  fVar10 = param_3;
  if (param_3 < _DAT_00890968) {
    fVar10 = -param_3;
  }
  if (_DAT_0089096c <= fVar10) {
    if (_DAT_00890968 < *(float *)(param_1 + 0xd0)) {
      fVar9 = -fVar9;
    }
    if (*(char *)(param_1 + 0x134) == '\0') {
      *(float *)(param_1 + 0xe4) = fVar9 + *(float *)(param_1 + 0xe4);
    }
    if (_DAT_00890968 < *(float *)(param_1 + 0xd0)) {
      fVar8 = -fVar8;
    }
    if (*(char *)(param_1 + 0x134) == '\0') {
      *(float *)(param_1 + 0xe4) = fVar8 + *(float *)(param_1 + 0xe4);
    }
  }
  else {
    fVar8 = _DAT_0089096c / *(float *)(param_1 + 0xc4);
    if (*(char *)(param_1 + 0x134) == '\0') {
      *(float *)(param_1 + 0xe0) =
           -(*(float *)(param_1 + 0xcc) * *(float *)(param_1 + 0xe0)) + *(float *)(param_1 + 0xe0);
      *(float *)(param_1 + 0xe4) =
           -(fVar8 * *(float *)(param_1 + 200) * param_3 * param_5) + *(float *)(param_1 + 0xe4);
      *(float *)(param_1 + 0xe4) =
           -(fVar8 * *(float *)(param_1 + 0xcc) * param_3 * param_5) + *(float *)(param_1 + 0xe4);
    }
  }
  fVar11 = (float10)FUN_005cb5d0(param_2,fVar10);
  *(float *)(param_1 + 0x118) = (float)fVar11;
  local_1c = 0.0;
  local_24 = 1.0;
  fVar8 = *(float *)(param_1 + 0xd0) * *(float *)(param_1 + 0xc4) - param_3;
  *(float *)(param_1 + 0xf0) = fVar8;
  fVar11 = (float10)FUN_005c5e80(fVar8 * fVar8 + param_2 * param_2);
  fVar12 = (float10)FUN_0068e180(param_4);
  if ((_DAT_008aabe0 < (float)fVar11) && ((param_2 != _DAT_00890968 || (param_3 != _DAT_00890968))))
  {
    local_24 = fVar1 * *(float *)(param_1 + 0xec) * (float)fVar12;
    local_1c = (local_24 / (float)fVar11) * *(float *)(param_1 + 0xd4);
    fVar11 = (float10)FUN_005c5e80(param_3 * param_3 + param_2 * param_2);
    FUN_0068e220((float)(((float10)*(float *)(param_1 + 0xd4) / fVar11) * (float10)local_24 *
                        (float10)fVar10));
  }
  if ((*(float *)(param_1 + 0x110) < _DAT_0089096c) || (*(char *)(param_1 + 0x134) != '\0')) {
    *(float *)(param_1 + 0xdc) = fVar8 * local_1c;
    bVar7 = param_4 < _DAT_00938298;
    *(float *)(param_1 + 0xd8) = -(local_1c * param_2);
    if ((bVar7) && (_DAT_00890cd4 < local_24)) {
      local_24 = _DAT_0089096c / local_24;
      *(float *)(param_1 + 0xd8) = -(local_1c * param_2) * local_24;
      *(float *)(param_1 + 0xdc) = local_24 * fVar8 * local_1c;
    }
    fVar9 = (*(float *)(param_1 + 0xe4) + *(float *)(param_1 + 0xe0)) / *(float *)(param_1 + 0xc4);
    fVar1 = *(float *)(param_1 + 0xdc);
    if (_DAT_00890968 < fVar9 * fVar1) {
      if (fVar1 <= _DAT_00890968) {
        if (fVar1 <= fVar9) {
          fVar1 = fVar9;
        }
      }
      else if (fVar9 <= fVar1) {
        *(float *)(param_1 + 0xdc) = fVar9;
        goto LAB_0069ded8;
      }
    }
    *(float *)(param_1 + 0xdc) = fVar1;
  }
  else {
    *(undefined1 *)(param_1 + 0x134) = 0;
    *(float *)(param_1 + 0xdc) =
         (*(float *)(param_1 + 0xe4) + *(float *)(param_1 + 0xe0)) / *(float *)(param_1 + 0xc4);
    fVar1 = *(float *)(param_1 + 0x118);
    if (fVar1 < _DAT_00890968) {
      fVar1 = -fVar1;
    }
    fVar11 = (float10)FUN_0068e090(*(undefined4 *)(param_1 + 0xd4),fVar1);
    *(float *)(param_1 + 0xd8) = (float)fVar11;
    if (_DAT_00890968 < param_2) {
      *(float *)(param_1 + 0xd8) = (float)-fVar11;
    }
  }
LAB_0069ded8:
  fVar1 = *(float *)(param_1 + 0xe8) * *(float *)(param_1 + 0xd8);
  *(float *)(param_1 + 0xd8) = fVar1;
  if ((_DAT_0089096c <= *(float *)(param_1 + 0x110)) && (*(char *)(param_1 + 0x134) == '\0')) {
    *(float *)(param_1 + 0xdc) =
         ((*(float *)(param_1 + 0x108) * *(float *)(param_1 + 0xc4) - fVar3) /
         *(float *)(param_1 + 0xc4)) * _DAT_008f8ab0 + *(float *)(param_1 + 0xdc);
  }
  bVar7 = false;
  if ((_DAT_00890968 < (*(float *)(param_1 + 0xe4) + *(float *)(param_1 + 0xe0)) * param_3) &&
     (*(char *)(param_1 + 0x134) == '\0')) {
    bVar7 = true;
    *(float *)(param_1 + 0xdc) = *(float *)(param_1 + 0xdc) * _DAT_008aac78;
  }
  fVar1 = fVar1 * *(float *)(param_1 + 0x11c);
  *(float *)(param_1 + 0xd8) = fVar1;
  fVar9 = *(float *)(param_1 + 0x120) * *(float *)(param_1 + 0xdc);
  *(float *)(param_1 + 0xdc) = fVar9;
  fVar11 = (float10)FUN_005c5e80(fVar1 * fVar1 + fVar9 * fVar9);
  fVar1 = (float)fVar11;
  *(undefined4 *)(param_1 + 0x110) = 0x3f800000;
  fVar9 = *(float *)(param_1 + 300) * *(float *)(param_1 + 0xec) * fVar2 *
          *(float *)(param_1 + 0xd4) * (float)fVar12;
  fVar2 = *(float *)(param_1 + 0x124);
  if ((fVar1 <= fVar9) || (fVar1 <= _DAT_00890d60)) {
    if (bVar7) {
      *(float *)(param_1 + 0xdc) = *(float *)(param_1 + 0xdc) * _DAT_00896d64;
    }
  }
  else {
    fVar9 = fVar9 / fVar1;
    *(float *)(param_1 + 0x110) = fVar9;
    *(float *)(param_1 + 0xd8) = fVar9 * *(float *)(param_1 + 0xd8);
    *(float *)(param_1 + 0xdc) = fVar9 * *(float *)(param_1 + 0xdc);
    fVar2 = fVar9 * fVar9 * fVar2;
  }
  fVar1 = fVar8;
  if (fVar8 < _DAT_00890968) {
    fVar1 = -fVar8;
  }
  if (fVar2 < fVar1) {
    if (fVar8 < _DAT_00890968) {
      fVar8 = -fVar8;
    }
    *(float *)(param_1 + 0x110) = (*(float *)(param_1 + 0x110) / fVar8) * fVar2;
  }
  iVar4 = *(int *)(param_1 + 0xa4);
  *(float *)(param_1 + 0xd8) = *(float *)(iVar4 + 0xf0) * *(float *)(param_1 + 0xd8);
  fVar11 = (float10)*(float *)(iVar4 + 0xec) * (float10)*(float *)(param_1 + 0xdc);
  *(float *)(param_1 + 0xdc) = (float)fVar11;
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
    fVar12 = (float10)fsin((float10)*(float *)(param_1 + 0x118) * (float10)_DAT_008aabd8);
    *(float *)(param_1 + 0xdc) =
         (float)(fVar11 - ((float10)*(float *)(param_1 + 0x13c) /
                          (float10)*(float *)(*(int *)(*(int *)(param_1 + 0x100) + 8) + 0x18 +
                                             *(int *)(param_1 + 0x10c) * 4)) * fVar12 *
                          (float10)*(float *)(param_1 + 0xd8));
  }
  if (*(char *)(param_1 + 0x134) == '\0') {
    if (*(float *)(param_1 + 0x110) < _DAT_0089096c) {
      fVar1 = (((*(float *)(param_1 + 0xe4) + *(float *)(param_1 + 0xe0)) -
               *(float *)(param_1 + 0xdc) * *(float *)(param_1 + 0xc4)) + *(float *)(param_1 + 0xf4)
              ) * _DAT_008933d4;
      *(float *)(param_1 + 0xf4) = fVar1;
      *(float *)(param_1 + 0x108) =
           (fVar1 - _DAT_008f8aac * *(float *)(iVar4 + 0xe4) * *(float *)(param_1 + 0xd0)) /
           _DAT_008f8ab0 -
           (*(float *)(param_1 + 0x110) * *(float *)(param_1 + 0xf0)) /
           (param_6 * *(float *)(param_1 + 0xc4));
    }
    *(float *)(param_1 + 0x108) =
         (fVar3 / *(float *)(param_1 + 0xc4) - *(float *)(param_1 + 0x108)) *
         *(float *)(param_1 + 0x110) + *(float *)(param_1 + 0x108);
  }
  else {
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  *(float *)(param_1 + 0xd0) = param_6 * *(float *)(param_1 + 0x108) + *(float *)(param_1 + 0xd0);
  FUN_0068e2e0();
  return (float10)*(float *)(param_1 + 0xd8);
}

