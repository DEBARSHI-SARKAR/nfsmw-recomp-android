/* speed.exe 004086e0 FUN_004086e0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004086e0(int param_1,undefined4 param_2)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x88) == (int *)0x0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x48) = param_2;
  cVar1 = (**(code **)(**(int **)(param_1 + 0x88) + 0x14))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0040870e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x88) + 0xc))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0040871b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x88) + 0xc))();
  return;
}

