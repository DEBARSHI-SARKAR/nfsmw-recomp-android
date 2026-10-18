/* speed.exe 0087ca18 Unwind@0087ca18; analysis pseudocode, not buildable source.
 * calls 006940f0 FUN_006940f0
 */

void Unwind_0087ca18(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 0x4c;
  }
  FUN_006940f0();
  return;
}

