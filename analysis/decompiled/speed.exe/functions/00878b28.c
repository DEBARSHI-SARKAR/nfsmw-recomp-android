/* speed.exe 00878b28 Unwind@00878b28; analysis pseudocode, not buildable source.
 * calls 00621e20 FUN_00621e20
 */

void Unwind_00878b28(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 0x2c;
  }
  FUN_00621e20();
  return;
}

