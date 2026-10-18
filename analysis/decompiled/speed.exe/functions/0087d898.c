/* speed.exe 0087d898 Unwind@0087d898; analysis pseudocode, not buildable source.
 * calls 006b5570 FUN_006b5570
 */

void Unwind_0087d898(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 0x74;
  }
  FUN_006b5570();
  return;
}

