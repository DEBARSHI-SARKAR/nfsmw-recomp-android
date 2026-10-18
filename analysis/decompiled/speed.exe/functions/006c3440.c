/* speed.exe 006c3440 FUN_006c3440; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_006c3440(float param_1,float param_2)

{
  float fVar1;
  
  if (param_1 < _DAT_00890968 != (param_1 == _DAT_00890968)) {
    return (float10)_DAT_00890968;
  }
  if (_DAT_0089096c < param_1) {
    return (float10)_DAT_0089096c;
  }
  if (DAT_008f9b0c < _DAT_00890cd4) {
    DAT_008f9b0c = 0.1;
  }
  fVar1 = (_DAT_0089096c / param_2 - _DAT_00890d3c) *
          (_DAT_0089096c - (_DAT_0089096c / DAT_008f9b0c) * param_1);
  if (param_1 < DAT_008f9b0c) {
    return (float10)param_1 / ((float10)fVar1 + (float10)_DAT_0089096c);
  }
  return ((float10)fVar1 - (float10)param_1) / ((float10)fVar1 - (float10)_DAT_0089096c);
}

