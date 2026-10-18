/* speed.exe 00472460 FUN_00472460; analysis pseudocode, not buildable source.
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00472460(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  fVar3 = (float10)FUN_005c5e80(*(float *)(param_2 + 0x28) * *(float *)(param_2 + 0x28) +
                                *(float *)(param_2 + 0x24) * *(float *)(param_2 + 0x24) +
                                *(float *)(param_2 + 0x20) * *(float *)(param_2 + 0x20));
  fVar1 = (float)fVar3;
  iVar2 = (*(int *)(param_2 + 0x1c) << 0x1d) >> 0x1d;
  if (iVar2 == 1) {
    if (_DAT_00894b64 < fVar1) {
      fVar1 = (fVar1 - _DAT_00894b64) * _DAT_00890dc4;
      if (_DAT_0089096c <= fVar1) {
        fVar1 = _DAT_0089096c;
      }
      fVar1 = fVar1 * *(float *)(param_1 + 0x44);
      if (fVar1 <= *(float *)(param_1 + 0x40)) {
        fVar1 = *(float *)(param_1 + 0x40);
      }
      *(float *)(param_1 + 0x40) = fVar1;
    }
  }
  else if (iVar2 == 2) {
    if (_DAT_00894820 < fVar1) {
      fVar1 = (fVar1 - _DAT_00894820) * _DAT_008916cc;
      if (_DAT_0089096c <= fVar1) {
        fVar1 = _DAT_0089096c;
      }
      fVar1 = fVar1 * *(float *)(param_1 + 0x44);
      if (fVar1 <= *(float *)(param_1 + 0x38)) {
        fVar1 = *(float *)(param_1 + 0x38);
      }
      *(float *)(param_1 + 0x38) = fVar1;
      return;
    }
  }
  else if ((iVar2 == 3) && (_DAT_008945ec < fVar1)) {
    fVar1 = (fVar1 - _DAT_008945ec) * _DAT_00890ea8;
    if (_DAT_0089096c <= fVar1) {
      fVar1 = _DAT_0089096c;
    }
    fVar1 = fVar1 * *(float *)(param_1 + 0x44);
    if (fVar1 <= *(float *)(param_1 + 0x3c)) {
      fVar1 = *(float *)(param_1 + 0x3c);
    }
    *(float *)(param_1 + 0x3c) = fVar1;
    return;
  }
  return;
}

