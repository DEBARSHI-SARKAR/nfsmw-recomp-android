/* speed.exe 0087f00f Unwind@0087f00f; analysis pseudocode, not buildable source.
 * calls 006e82f0 FUN_006e82f0
 */

void Unwind_0087f00f(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x10) + 0x50;
  }
  FUN_006e82f0();
  return;
}

