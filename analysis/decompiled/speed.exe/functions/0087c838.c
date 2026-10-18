/* speed.exe 0087c838 Unwind@0087c838; analysis pseudocode, not buildable source.
 * calls 0068a7d0 FUN_0068a7d0
 */

void Unwind_0087c838(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 0x4c;
  }
  FUN_0068a7d0();
  return;
}

