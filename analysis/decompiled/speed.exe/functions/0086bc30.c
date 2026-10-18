/* speed.exe 0086bc30 Unwind@0086bc30; analysis pseudocode, not buildable source.
 * calls 004badc0 FUN_004badc0
 */

void Unwind_0086bc30(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 4;
  }
  FUN_004badc0();
  return;
}

