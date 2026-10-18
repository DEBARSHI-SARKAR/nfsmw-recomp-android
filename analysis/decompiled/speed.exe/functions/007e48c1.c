/* speed.exe 007e48c1 FUN_007e48c1; analysis pseudocode, not buildable source.
 * calls 007e4760 __unlock_fhandle
 */

void FUN_007e48c1(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    __unlock_fhandle(*(int *)(unaff_EBP + -0x28));
  }
  return;
}

