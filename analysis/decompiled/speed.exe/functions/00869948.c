/* speed.exe 00869948 Unwind@00869948; analysis pseudocode, not buildable source.
 * calls 00445680 FUN_00445680
 */

void Unwind_00869948(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 0x48;
  }
  FUN_00445680();
  return;
}

