/* speed.exe 0087d078 Unwind@0087d078; analysis pseudocode, not buildable source.
 * calls 00667d40 FUN_00667d40
 */

void Unwind_0087d078(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 0x94;
  }
  FUN_00667d40();
  return;
}

