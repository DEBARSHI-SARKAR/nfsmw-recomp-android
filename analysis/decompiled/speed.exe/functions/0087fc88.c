/* speed.exe 0087fc88 Unwind@0087fc88; analysis pseudocode, not buildable source.
 * calls 007034e0 FUN_007034e0
 */

void Unwind_0087fc88(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 0x4c;
  }
  FUN_007034e0();
  return;
}

