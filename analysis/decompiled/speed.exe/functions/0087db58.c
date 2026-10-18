/* speed.exe 0087db58 Unwind@0087db58; analysis pseudocode, not buildable source.
 * calls 0068b210 FUN_0068b210
 */

void Unwind_0087db58(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 0x130;
  }
  FUN_0068b210();
  return;
}

