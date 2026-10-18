/* speed.exe 00407940 FUN_00407940; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00407940(float param_1,float param_2,float param_3,float param_4)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)param_3 * (float10)_DAT_00890d58;
  param_1 = ABS(param_1);
  fVar1 = SQRT((float10)param_1 * (float10)param_2 * (float10)_DAT_00890d5c + fVar1 * fVar1) + fVar1
  ;
  if (param_4 < _DAT_00890cd4) {
    param_4 = _DAT_00890cd4;
  }
  fVar2 = fVar1 / (float10)param_4;
  if (fVar2 <= (float10)(param_1 + param_1)) {
    fVar2 = (float10)(param_1 + param_1);
  }
  return fVar1 / fVar2;
}

