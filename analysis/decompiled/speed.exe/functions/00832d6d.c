/* speed.exe 00832d6d FUN_00832d6d; analysis pseudocode, not buildable source.
 */

void FUN_00832d6d(void)

{
  if (DAT_009c2bfc != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00832d76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_009c2bfc)();
    return;
  }
  return;
}

