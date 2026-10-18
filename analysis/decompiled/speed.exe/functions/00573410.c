/* speed.exe 00573410 FUN_00573410; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00573410(float param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  param_3 = param_3 * _DAT_008933d4;
  fVar2 = param_3 + param_2;
  fVar1 = param_2 - param_3;
  if ((param_1 < fVar1) || (fVar2 < param_1)) {
    return (float10)_DAT_00890968;
  }
  if ((fVar1 <= param_1) && (param_1 < param_2 - _DAT_0089f250)) {
    return ((float10)param_1 - (float10)fVar1) / (float10)param_3;
  }
  if ((param_1 < fVar2 != (param_1 == fVar2)) && (param_2 + _DAT_0089f250 < param_1)) {
    return ((float10)fVar2 - (float10)param_1) / (float10)param_3;
  }
  return (float10)_DAT_0089096c;
}

