/* speed.exe 007f6310 FUN_007f6310; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_007f6310(int param_1)

{
  if (*(int *)(param_1 + 0x108) == 0x40) {
                    /* WARNING: Could not recover jumptable at 0x007f631e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 4) + 0x24))();
    return;
  }
  return;
}

