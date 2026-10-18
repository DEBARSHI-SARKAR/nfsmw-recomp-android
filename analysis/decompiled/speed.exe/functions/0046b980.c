/* speed.exe 0046b980 FUN_0046b980; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0046b980(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = ABS(param_1 - (param_2 + _DAT_00890960));
  fVar2 = ABS(param_1 - (param_2 - _DAT_00890960));
  if ((fVar1 < ABS(param_1 - param_2)) && (fVar1 < fVar2)) {
    return (float10)(param_2 + _DAT_00890960);
  }
  if ((fVar2 < ABS(param_1 - param_2)) && (fVar2 < fVar1)) {
    return (float10)(param_2 - _DAT_00890960);
  }
  return (float10)param_2;
}

