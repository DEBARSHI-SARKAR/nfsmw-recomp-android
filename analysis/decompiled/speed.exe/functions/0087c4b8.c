/* speed.exe 0087c4b8 Unwind@0087c4b8; analysis pseudocode, not buildable source.
 * calls 0068aab0 FUN_0068aab0
 */

void Unwind_0087c4b8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 0x4c;
  }
  FUN_0068aab0();
  return;
}

