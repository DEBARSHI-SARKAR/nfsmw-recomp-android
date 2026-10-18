/* speed.exe 0087f726 Unwind@0087f726; analysis pseudocode, not buildable source.
 * calls 0042e310 FUN_0042e310
 */

void Unwind_0087f726(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x30) == 0) {
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x44) = *(int *)(unaff_EBP + -0x30) + 0x58;
  }
  FUN_0042e310();
  return;
}

