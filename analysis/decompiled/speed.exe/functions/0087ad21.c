/* speed.exe 0087ad21 Unwind@0087ad21; analysis pseudocode, not buildable source.
 * calls 00667d40 FUN_00667d40
 */

void Unwind_0087ad21(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x10) + 0x9c;
  }
  FUN_00667d40();
  return;
}

