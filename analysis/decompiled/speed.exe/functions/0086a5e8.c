/* speed.exe 0086a5e8 Unwind@0086a5e8; analysis pseudocode, not buildable source.
 * calls 00468400 FUN_00468400
 */

void Unwind_0086a5e8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 0x18;
  }
  FUN_00468400();
  return;
}

