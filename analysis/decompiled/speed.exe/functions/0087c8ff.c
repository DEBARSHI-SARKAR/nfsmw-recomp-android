/* speed.exe 0087c8ff Unwind@0087c8ff; analysis pseudocode, not buildable source.
 * calls 006940f0 FUN_006940f0
 */

void Unwind_0087c8ff(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x10) + 0x54;
  }
  FUN_006940f0();
  return;
}

