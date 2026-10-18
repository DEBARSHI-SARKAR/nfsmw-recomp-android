/* speed.exe 00409ed0 FUN_00409ed0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_00409ed0(int param_1)

{
  int *piVar1;
  float10 fVar2;
  
  if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
    piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x1c) + 0x54))();
                    /* WARNING: Could not recover jumptable at 0x00409ee2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar2 = (float10)(**(code **)(*piVar1 + 0x30))();
    return fVar2;
  }
  return (float10)_DAT_00890968;
}

