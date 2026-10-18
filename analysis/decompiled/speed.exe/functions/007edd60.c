/* speed.exe 007edd60 FUN_007edd60; analysis pseudocode, not buildable source.
 * calls 007edca5 FUN_007edca5
 */

void FUN_007edd60(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_007edca5(param_1);
                    /* WARNING: Could not recover jumptable at 0x007edd75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(iVar1 + 0x80) + 0x2c))();
  return;
}

