/* speed.exe 0087adc8 Unwind@0087adc8; analysis pseudocode, not buildable source.
 * calls 00667cd0 FUN_00667cd0
 */

void Unwind_0087adc8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 0xe4;
  }
  FUN_00667cd0();
  return;
}

