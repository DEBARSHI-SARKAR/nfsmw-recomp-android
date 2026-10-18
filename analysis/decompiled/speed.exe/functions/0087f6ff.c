/* speed.exe 0087f6ff Unwind@0087f6ff; analysis pseudocode, not buildable source.
 * calls 00668450 FUN_00668450
 */

void Unwind_0087f6ff(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x30) == 0) {
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x40) = *(int *)(unaff_EBP + -0x30) + 0x50;
  }
  FUN_00668450();
  return;
}

