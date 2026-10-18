/* speed.exe 0087bab8 Unwind@0087bab8; analysis pseudocode, not buildable source.
 * calls 0067e9b0 FUN_0067e9b0
 */

void Unwind_0087bab8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x14) + 0xac;
  }
  FUN_0067e9b0();
  return;
}

