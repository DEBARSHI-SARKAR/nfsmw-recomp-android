/* speed.exe 0046ec90 FUN_0046ec90; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0046ec90(int param_1)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  fVar3 = (float10)_DAT_00890968;
  fVar1 = *(float *)(param_1 + 0x70);
  fVar2 = _DAT_00894b68;
  if ((_DAT_00894b68 < fVar1) && (fVar2 = fVar1, _DAT_00894b64 < fVar1)) {
    fVar2 = _DAT_00894b64;
  }
  if (fVar1 == fVar2) {
    fVar2 = *(float *)(param_1 + 0x80) * _DAT_00890cd4 - _DAT_0089096c;
    if (fVar2 <= _DAT_00890968) {
      fVar3 = (float10)_DAT_00890968;
    }
    else {
      fVar3 = (float10)fVar2;
      if (_DAT_0089096c < fVar2) {
        fVar3 = (float10)_DAT_0089096c;
      }
    }
    fVar2 = _DAT_00890da8;
    if ((_DAT_00890da8 < fVar1) && (fVar2 = fVar1, _DAT_0089096c < fVar1)) {
      fVar2 = _DAT_0089096c;
    }
    if ((fVar1 == fVar2) && (_DAT_00894b60 < *(float *)(param_1 + 0x78))) {
      fVar3 = (float10)(float)fVar3 + (float10)_DAT_00894b5c;
    }
  }
  return fVar3;
}

