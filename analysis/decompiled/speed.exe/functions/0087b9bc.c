/* speed.exe 0087b9bc Unwind@0087b9bc; analysis pseudocode, not buildable source.
 * calls 00668450 FUN_00668450
 */

void Unwind_0087b9bc(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x10) + 200;
  }
  FUN_00668450();
  return;
}

