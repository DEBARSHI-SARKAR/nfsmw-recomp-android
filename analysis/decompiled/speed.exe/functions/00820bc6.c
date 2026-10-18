/* speed.exe 00820bc6 FUN_00820bc6; analysis pseudocode, not buildable source.
 * calls 00820907 FUN_00820907
 * calls 0081bcc1 thunk_FUN_00821a7b
 */

void FUN_00820bc6(void)

{
  (*DAT_0090bce8)();
  FUN_00820907();
                    /* WARNING: Could not recover jumptable at 0x00820bd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_0090bcec)();
  return;
}

