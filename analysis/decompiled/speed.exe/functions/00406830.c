/* speed.exe 00406830 FUN_00406830; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00406830(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x40) + 0x48))();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040684d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x40) + 0x50))();
    return;
  }
  return;
}

