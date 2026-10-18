/* speed.exe 004ae8f0 FUN_004ae8f0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004ae8f0(int param_1,int param_2)

{
  if (DAT_008f86f8 != 0) {
    if (param_2 < 0x17) {
      if (*(int **)(param_1 + 0x5c) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004ae911. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(int **)(param_1 + 0x5c) + 0xc))();
        return;
      }
    }
    else if ((param_2 < 0xa0) && (*(int **)(param_1 + 0x58) != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x004ae92d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(param_1 + 0x58) + 0xc))();
      return;
    }
  }
  return;
}

