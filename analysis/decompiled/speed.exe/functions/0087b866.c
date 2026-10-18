/* speed.exe 0087b866 Unwind@0087b866; analysis pseudocode, not buildable source.
 * calls 00468400 FUN_00468400
 */

void Unwind_0087b866(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x14) + 0x40;
  }
  FUN_00468400();
  return;
}

