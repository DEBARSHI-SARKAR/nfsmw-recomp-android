/* speed.exe 0086a86f Unwind@0086a86f; analysis pseudocode, not buildable source.
 * calls 00480fe0 FUN_00480fe0
 */

void Unwind_0086a86f(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x10) + 0x24;
  }
  FUN_00480fe0();
  return;
}

