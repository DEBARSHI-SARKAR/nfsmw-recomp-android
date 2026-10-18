/* speed.exe 007ca4a1 FUN_007ca4a1; analysis pseudocode, not buildable source.
 * calls 007ca4d0 ___crtExitProcess
 */

void FUN_007ca4a1(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0x10) == 0) {
    DAT_009baa60 = 1;
    ___crtExitProcess(*(int *)(unaff_EBP + 8));
  }
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return;
}

