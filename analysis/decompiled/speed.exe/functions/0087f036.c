/* speed.exe 0087f036 Unwind@0087f036; analysis pseudocode, not buildable source.
 * calls 0042e310 FUN_0042e310
 */

void Unwind_0087f036(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x10) + 0x58;
  }
  FUN_0042e310();
  return;
}

