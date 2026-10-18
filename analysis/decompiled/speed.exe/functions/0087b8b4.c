/* speed.exe 0087b8b4 Unwind@0087b8b4; analysis pseudocode, not buildable source.
 * calls 00682760 FUN_00682760
 */

void Unwind_0087b8b4(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x14) + 0x4c;
  }
  FUN_00682760();
  return;
}

