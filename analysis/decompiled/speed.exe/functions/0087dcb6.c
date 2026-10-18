/* speed.exe 0087dcb6 Unwind@0087dcb6; analysis pseudocode, not buildable source.
 * calls 00668450 FUN_00668450
 */

void Unwind_0087dcb6(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x10) + 0x60;
  }
  FUN_00668450();
  return;
}

