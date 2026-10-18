/* speed.exe 007f9abe FUN_007f9abe; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_007f9abe(int param_1)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    return (float10)_DAT_00890968;
  }
                    /* WARNING: Could not recover jumptable at 0x007f9ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float10)(**(code **)(**(int **)(param_1 + 0x18) + 0x10))();
  return fVar1;
}

