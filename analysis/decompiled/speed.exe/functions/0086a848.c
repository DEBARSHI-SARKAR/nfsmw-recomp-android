/* speed.exe 0086a848 Unwind@0086a848; analysis pseudocode, not buildable source.
 * calls 00480c30 FUN_00480c30
 */

void Unwind_0086a848(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 0x18;
  }
  FUN_00480c30();
  return;
}

