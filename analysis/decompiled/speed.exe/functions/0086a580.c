/* speed.exe 0086a580 Unwind@0086a580; analysis pseudocode, not buildable source.
 * calls 00480ae0 FUN_00480ae0
 */

void Unwind_0086a580(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 8;
  }
  FUN_00480ae0();
  return;
}

