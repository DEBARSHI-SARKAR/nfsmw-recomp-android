/* speed.exe 0087f1f8 Unwind@0087f1f8; analysis pseudocode, not buildable source.
 * calls 006e8100 FUN_006e8100
 */

void Unwind_0087f1f8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 0x4c;
  }
  FUN_006e8100();
  return;
}

