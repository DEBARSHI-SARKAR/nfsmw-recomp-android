/* speed.exe 006ed550 FUN_006ed550; analysis pseudocode, not buildable source.
 * calls 006ece90 FUN_006ece90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_006ed550(undefined4 param_1)

{
  float10 fVar1;
  
  if (DAT_009885e0 != 0) {
    fVar1 = (float10)FUN_006ece90(param_1);
    return fVar1;
  }
  return (float10)_DAT_00890968;
}

