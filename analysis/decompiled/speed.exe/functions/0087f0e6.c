/* speed.exe 0087f0e6 Unwind@0087f0e6; analysis pseudocode, not buildable source.
 * calls 0042e310 FUN_0042e310
 */

void Unwind_0087f0e6(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x10) + 0x58;
  }
  FUN_0042e310();
  return;
}

