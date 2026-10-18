/* speed.exe 0087da3f Unwind@0087da3f; analysis pseudocode, not buildable source.
 * calls 006b5620 FUN_006b5620
 */

void Unwind_0087da3f(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x10) + 0x50;
  }
  FUN_006b5620();
  return;
}

