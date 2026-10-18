/* speed.exe 004e4040 FUN_004e4040; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_004e4040(int param_1)

{
  if (*(char *)(param_1 + 0x34) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x004e404c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x28) + 8))();
    return;
  }
  return;
}

