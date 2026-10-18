/* speed.exe 0086c488 Unwind@0086c488; analysis pseudocode, not buildable source.
 * calls 004c9750 FUN_004c9750
 */

void Unwind_0086c488(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x14) + 0x11;
  }
  FUN_004c9750();
  return;
}

