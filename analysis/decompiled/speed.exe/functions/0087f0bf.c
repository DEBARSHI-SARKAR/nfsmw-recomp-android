/* speed.exe 0087f0bf Unwind@0087f0bf; analysis pseudocode, not buildable source.
 * calls 006e82f0 FUN_006e82f0
 */

void Unwind_0087f0bf(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x10) + 0x50;
  }
  FUN_006e82f0();
  return;
}

