/* speed.exe 007cd3f0 FUN_007cd3f0; analysis pseudocode, not buildable source.
 * calls 007c7290 __free_dbg
 */

void FUN_007cd3f0(void)

{
  int unaff_EBP;
  
  __free_dbg(*(undefined4 *)(unaff_EBP + -0x24),2);
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return;
}

