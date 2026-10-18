/* speed.exe 0086853f Unwind@0086853f; analysis pseudocode, not buildable source.
 * calls 00431990 FUN_00431990
 */

void Unwind_0086853f(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x10) + 0x54;
  }
  FUN_00431990();
  return;
}

