/* speed.exe 006678f0 FUN_006678f0; analysis pseudocode, not buildable source.
 * calls 005cb5d0 FUN_005cb5d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_006678f0(undefined4 param_1,undefined4 param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_005cb5d0(param_1,param_2);
  return fVar1 * (float10)_DAT_00890960;
}

