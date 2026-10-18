/* speed.exe 0087ddaf Unwind@0087ddaf; analysis pseudocode, not buildable source.
 * calls 006b5870 FUN_006b5870
 */

void Unwind_0087ddaf(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x10) + 0x54;
  }
  FUN_006b5870();
  return;
}

