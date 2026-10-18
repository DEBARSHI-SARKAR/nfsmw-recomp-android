/* speed.exe 0068e180 FUN_0068e180; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0068e180(int param_1,float param_2)

{
  float fVar1;
  
  if (((*(char *)(param_1 + 0x134) == '\0') && (_DAT_00890968 <= *(float *)(param_1 + 0xd0))) &&
     (1 < *(int *)(param_1 + 0xf8))) {
    fVar1 = (param_2 - _DAT_008ab238) * _DAT_008ab234;
    if (fVar1 < _DAT_0089096c) {
      if (fVar1 < _DAT_00890968) {
        fVar1 = _DAT_00890968;
      }
      return (float10)fVar1 * (float10)_DAT_008ab230 + (float10)_DAT_008ab22c;
    }
    return (float10)_DAT_0089096c * (float10)_DAT_008ab230 + (float10)_DAT_008ab22c;
  }
  return (float10)_DAT_0089096c;
}

