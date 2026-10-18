/* speed.exe 0087ef3f Unwind@0087ef3f; analysis pseudocode, not buildable source.
 * calls 006b5870 FUN_006b5870
 */

void Unwind_0087ef3f(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x10) + 0x34;
  }
  FUN_006b5870();
  return;
}

