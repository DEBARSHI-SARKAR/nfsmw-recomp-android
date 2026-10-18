/* speed.exe 0087c5f4 Unwind@0087c5f4; analysis pseudocode, not buildable source.
 * calls 0068aa50 FUN_0068aa50
 */

void Unwind_0087c5f4(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x10) + 0x70;
  }
  FUN_0068aa50();
  return;
}

