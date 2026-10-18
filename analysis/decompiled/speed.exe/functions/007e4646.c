/* speed.exe 007e4646 FUN_007e4646; analysis pseudocode, not buildable source.
 * calls 007e4760 __unlock_fhandle
 */

void FUN_007e4646(void)

{
  int unaff_EBP;
  
  __unlock_fhandle(*(int *)(unaff_EBP + -0x24));
  return;
}

