/* speed.exe 005699f0 FUN_005699f0; analysis pseudocode, not buildable source.
 * calls 00569730 FUN_00569730
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_005699f0(float param_1,undefined4 param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00569730(param_2);
  fVar1 = (float10)param_1 / fVar1;
  if (fVar1 < (float10)_DAT_00890968) {
    return (float10)_DAT_00890968 * (float10)_DAT_008a0610 - (float10)_DAT_008a060c;
  }
  if ((float10)_DAT_0089096c < fVar1) {
    fVar1 = (float10)_DAT_0089096c;
  }
  return fVar1 * (float10)_DAT_008a0610 - (float10)_DAT_008a060c;
}

