/* speed.exe 0087bb0a Unwind@0087bb0a; analysis pseudocode, not buildable source.
 * calls 00668100 FUN_00668100
 */

void Unwind_0087bb0a(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x14) + 0xbc;
  }
  FUN_00668100();
  return;
}

