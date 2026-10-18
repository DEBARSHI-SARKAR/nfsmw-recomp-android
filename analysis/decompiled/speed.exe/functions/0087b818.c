/* speed.exe 0087b818 Unwind@0087b818; analysis pseudocode, not buildable source.
 * calls 0067e800 FUN_0067e800
 */

void Unwind_0087b818(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x14) + 0x2c;
  }
  FUN_0067e800();
  return;
}

