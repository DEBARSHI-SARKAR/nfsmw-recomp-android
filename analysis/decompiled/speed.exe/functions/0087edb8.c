/* speed.exe 0087edb8 Unwind@0087edb8; analysis pseudocode, not buildable source.
 * calls 006f7750 FUN_006f7750
 */

void Unwind_0087edb8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 0x40;
  }
  FUN_006f7750();
  return;
}

