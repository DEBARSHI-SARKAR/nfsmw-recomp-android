/* speed.exe 0087d808 Unwind@0087d808; analysis pseudocode, not buildable source.
 * calls 006b5780 FUN_006b5780
 */

void Unwind_0087d808(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 0x48;
  }
  FUN_006b5780();
  return;
}

