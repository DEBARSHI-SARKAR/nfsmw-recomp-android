/* speed.exe 008813c8 Unwind@008813c8; analysis pseudocode, not buildable source.
 * calls 00758a00 FUN_00758a00
 */

void Unwind_008813c8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 0x11;
  }
  FUN_00758a00();
  return;
}

