/* speed.exe 008294a0 FUN_008294a0; analysis pseudocode, not buildable source.
 */

void FUN_008294a0(void)

{
  if (DAT_009c298c != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008294ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_009c298c)();
    return;
  }
  return;
}

