/* speed.exe 0087f6d8 Unwind@0087f6d8; analysis pseudocode, not buildable source.
 * calls 006edb70 FUN_006edb70
 */

void Unwind_0087f6d8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x30) == 0) {
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + -0x30) + 0x48;
  }
  FUN_006edb70();
  return;
}

