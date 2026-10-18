/* speed.exe 0086840f Unwind@0086840f; analysis pseudocode, not buildable source.
 * calls 00410770 FUN_00410770
 */

void Unwind_0086840f(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x10) + 0x54;
  }
  FUN_00410770();
  return;
}

