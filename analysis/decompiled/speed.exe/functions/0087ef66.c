/* speed.exe 0087ef66 Unwind@0087ef66; analysis pseudocode, not buildable source.
 * calls 00668450 FUN_00668450
 */

void Unwind_0087ef66(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x10) + 0x40;
  }
  FUN_00668450();
  return;
}

