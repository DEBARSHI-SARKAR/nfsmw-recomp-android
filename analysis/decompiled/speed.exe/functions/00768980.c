/* speed.exe 00768980 FUN_00768980; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00768980(float param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = ((param_1 * param_2[3] + param_2[2]) * param_1 + param_2[1]) * param_1 + *param_2;
  if (fVar1 < _DAT_0089096c) {
    if (fVar1 < _DAT_00890968) {
      fVar1 = _DAT_00890968;
    }
    return (float10)fVar1;
  }
  return (float10)_DAT_0089096c;
}

