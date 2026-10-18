/* speed.exe 00743390 FUN_00743390; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00743390(float *param_1)

{
  float fVar1;
  
  fVar1 = _DAT_009b0c74 * (param_1[1] - _DAT_009b0c64) +
          _DAT_009b0c78 * (param_1[2] - _DAT_009b0c68) + _DAT_009b0c70 * (*param_1 - _DAT_009b0c60);
  if (fVar1 < _DAT_00890968) {
    fVar1 = -fVar1;
  }
  if (fVar1 < _DAT_008b2c18) {
    return 1;
  }
  return 0;
}

