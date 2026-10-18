/* speed.exe 006c83d0 FUN_006c83d0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006c83d0(void)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(DAT_009b392c + 0x188) - _DAT_009018f0;
  fVar2 = _DAT_009018ec - _DAT_009018f0;
  if (fVar1 < _DAT_00890968) {
    fVar1 = _DAT_00890968;
  }
  if (fVar2 < fVar1) {
    fVar1 = fVar2;
  }
  _DAT_008fae64 = (_DAT_0089096c - *(float *)(DAT_009196b8 + 0x290)) * (fVar1 / fVar2);
  _DAT_008fae68 = (_DAT_009018e8 - _DAT_009018e4) * _DAT_008fae64 + _DAT_009018e4;
  return;
}

