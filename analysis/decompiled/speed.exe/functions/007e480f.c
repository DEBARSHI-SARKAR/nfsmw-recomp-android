/* speed.exe 007e480f FUN_007e480f; analysis pseudocode, not buildable source.
 * calls 007e4760 __unlock_fhandle
 */

void FUN_007e480f(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    __unlock_fhandle(*(int *)(unaff_EBP + -0x28));
  }
  return;
}

