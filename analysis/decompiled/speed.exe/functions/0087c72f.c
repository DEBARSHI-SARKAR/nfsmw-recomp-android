/* speed.exe 0087c72f Unwind@0087c72f; analysis pseudocode, not buildable source.
 * calls 0068a980 FUN_0068a980
 */

void Unwind_0087c72f(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x10) + 0x54;
  }
  FUN_0068a980();
  return;
}

