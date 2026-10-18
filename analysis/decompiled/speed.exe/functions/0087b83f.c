/* speed.exe 0087b83f Unwind@0087b83f; analysis pseudocode, not buildable source.
 * calls 006683a0 FUN_006683a0
 */

void Unwind_0087b83f(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x14) + 0x38;
  }
  FUN_006683a0();
  return;
}

