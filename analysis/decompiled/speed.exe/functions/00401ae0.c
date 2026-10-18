/* speed.exe 00401ae0 FUN_00401ae0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00401ae0(float param_1,float param_2,float param_3)

{
  float fVar1;
  
  fVar1 = _DAT_00890968;
  if (_DAT_00890518 < param_3 - param_2) {
    fVar1 = (param_1 - param_2) / (param_3 - param_2);
    if (_DAT_0089096c <= fVar1) {
      return (float10)_DAT_0089096c;
    }
    if (fVar1 < _DAT_00890968) {
      return (float10)_DAT_00890968;
    }
  }
  return (float10)fVar1;
}

