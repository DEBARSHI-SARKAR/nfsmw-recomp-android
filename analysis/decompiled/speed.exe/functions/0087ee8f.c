/* speed.exe 0087ee8f Unwind@0087ee8f; analysis pseudocode, not buildable source.
 * calls 006f7d10 FUN_006f7d10
 */

void Unwind_0087ee8f(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x10) + 0x2c;
  }
  FUN_006f7d10();
  return;
}

