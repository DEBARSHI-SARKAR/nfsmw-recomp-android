/* speed.exe 0073d320 FUN_0073d320; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0073d320(void)

{
  float fVar1;
  
  fVar1 = (float)DAT_00925ae8 * _DAT_00890984;
  DAT_00904b50 = (fVar1 - _DAT_00904b54) * _DAT_00904b4c + DAT_00904b50;
  _DAT_00904b54 = fVar1;
  if (_DAT_00890960 <= DAT_00904b50) {
    DAT_00904b50 = DAT_00904b50 - _DAT_00890960;
  }
  _DAT_00904b64 = (fVar1 - _DAT_00904b68) * _DAT_00904b60 + _DAT_00904b64;
  _DAT_00904b68 = fVar1;
  if (_DAT_00890960 <= _DAT_00904b64) {
    _DAT_00904b64 = _DAT_00904b64 - _DAT_00890960;
  }
  return;
}

