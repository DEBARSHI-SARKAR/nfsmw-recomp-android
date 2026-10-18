/* speed.exe 0087dc8f Unwind@0087dc8f; analysis pseudocode, not buildable source.
 * calls 0068b750 FUN_0068b750
 */

void Unwind_0087dc8f(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x10) + 0x58;
  }
  FUN_0068b750();
  return;
}

