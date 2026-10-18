/* speed.exe 0087dbd1 Unwind@0087dbd1; analysis pseudocode, not buildable source.
 * calls 0042e310 FUN_0042e310
 */

void Unwind_0087dbd1(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x10) + 0x19c;
  }
  FUN_0042e310();
  return;
}

