/* speed.exe 008683e8 Unwind@008683e8; analysis pseudocode, not buildable source.
 * calls 0040b0c0 FUN_0040b0c0
 */

void Unwind_008683e8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 0x48;
  }
  FUN_0040b0c0();
  return;
}

