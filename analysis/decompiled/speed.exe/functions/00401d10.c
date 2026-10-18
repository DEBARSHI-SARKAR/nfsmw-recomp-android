/* speed.exe 00401d10 FUN_00401d10; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00401d10(float param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)param_1;
  if (param_1 < _DAT_00890968) {
    fVar1 = -fVar1;
  }
  return fVar1;
}

