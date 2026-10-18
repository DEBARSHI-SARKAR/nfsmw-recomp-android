/* speed.exe 0087eeb6 Unwind@0087eeb6; analysis pseudocode, not buildable source.
 * calls 00468400 FUN_00468400
 */

void Unwind_0087eeb6(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x10) + 0x38;
  }
  FUN_00468400();
  return;
}

