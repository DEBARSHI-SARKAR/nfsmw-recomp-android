/* speed.exe 0087eddf Unwind@0087eddf; analysis pseudocode, not buildable source.
 * calls 006f6bc0 FUN_006f6bc0
 */

void Unwind_0087eddf(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x10) + 0x2c;
  }
  FUN_006f6bc0();
  return;
}

