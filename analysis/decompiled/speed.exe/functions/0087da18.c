/* speed.exe 0087da18 Unwind@0087da18; analysis pseudocode, not buildable source.
 * calls 006b5780 FUN_006b5780
 */

void Unwind_0087da18(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x10) + 0x48;
  }
  FUN_006b5780();
  return;
}

