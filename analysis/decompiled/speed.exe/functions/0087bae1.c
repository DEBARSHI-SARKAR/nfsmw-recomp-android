/* speed.exe 0087bae1 Unwind@0087bae1; analysis pseudocode, not buildable source.
 * calls 00668450 FUN_00668450
 */

void Unwind_0087bae1(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x14) + 0xb4;
  }
  FUN_00668450();
  return;
}

