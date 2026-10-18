/* speed.exe 00409c40 FUN_00409c40; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00409c40(int param_1,float param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x80);
  if (ABS(param_2) < _DAT_00890de8 == (ABS(param_2) == _DAT_00890de8)) {
    param_2 = fVar1 / param_2;
    if (param_2 <= _DAT_00890de4) {
      return (float10)_DAT_00890de4;
    }
    if (_DAT_00890884 < param_2) {
      return (float10)_DAT_00890884;
    }
  }
  else {
    if (ABS(fVar1) < _DAT_00890d60 != (ABS(fVar1) == _DAT_00890d60)) {
      return (float10)_DAT_00890968;
    }
    param_2 = _DAT_00890da8;
    if (_DAT_00890968 < fVar1) {
      return (float10)_DAT_0089096c;
    }
  }
  return (float10)param_2;
}

