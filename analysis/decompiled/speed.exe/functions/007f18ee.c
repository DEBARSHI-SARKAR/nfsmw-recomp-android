/* speed.exe 007f18ee FUN_007f18ee; analysis pseudocode, not buildable source.
 * calls 007f18d7 FUN_007f18d7
 */

void FUN_007f18ee(int *param_1)

{
  FUN_007f18d7();
  DAT_009bb414 = param_1;
                    /* WARNING: Could not recover jumptable at 0x007f1902. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}

