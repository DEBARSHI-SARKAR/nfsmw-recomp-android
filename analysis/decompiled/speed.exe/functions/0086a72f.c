/* speed.exe 0086a72f Unwind@0086a72f; analysis pseudocode, not buildable source.
 * calls 00480fe0 FUN_00480fe0
 */

void Unwind_0086a72f(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x10) + 0x20;
  }
  FUN_00480fe0();
  return;
}

