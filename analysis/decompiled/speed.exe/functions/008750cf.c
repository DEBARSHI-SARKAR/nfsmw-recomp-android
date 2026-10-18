/* speed.exe 008750cf Unwind@008750cf; analysis pseudocode, not buildable source.
 * calls 00468400 FUN_00468400
 */

void Unwind_008750cf(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x10) + 0x28;
  }
  FUN_00468400();
  return;
}

