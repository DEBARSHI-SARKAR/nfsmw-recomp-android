/* speed.exe 004a8220 FUN_004a8220; analysis pseudocode, not buildable source.
 * calls 0049e7a0 FUN_0049e7a0
 */

void __thiscall FUN_004a8220(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 unaff_retaddr;
  
  if (*(char *)(param_1 + 0x19) != '\0') {
    (**(code **)(**(int **)(param_1 + 0xc) + 0xc))(param_2,param_3,*(undefined4 *)(param_1 + 0x14));
    FUN_0049e7a0(*(undefined4 *)(param_1 + 0x14),unaff_retaddr,*(undefined1 *)(param_1 + 0x18),0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004a825e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0xc) + 0xc))();
  return;
}

