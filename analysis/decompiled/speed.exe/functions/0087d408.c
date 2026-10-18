/* speed.exe 0087d408 Unwind@0087d408; analysis pseudocode, not buildable source.
 * calls 0068a9f0 FUN_0068a9f0
 */

void Unwind_0087d408(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 0x1ac;
  }
  FUN_0068a9f0();
  return;
}

