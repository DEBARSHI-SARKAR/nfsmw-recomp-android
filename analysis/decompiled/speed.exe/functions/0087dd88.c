/* speed.exe 0087dd88 Unwind@0087dd88; analysis pseudocode, not buildable source.
 * calls 00667da0 FUN_00667da0
 */

void Unwind_0087dd88(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 0x4c;
  }
  FUN_00667da0();
  return;
}

