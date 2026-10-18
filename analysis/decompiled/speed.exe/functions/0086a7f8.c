/* speed.exe 0086a7f8 Unwind@0086a7f8; analysis pseudocode, not buildable source.
 * calls 00480fe0 FUN_00480fe0
 */

void Unwind_0086a7f8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 0x1c;
  }
  FUN_00480fe0();
  return;
}

