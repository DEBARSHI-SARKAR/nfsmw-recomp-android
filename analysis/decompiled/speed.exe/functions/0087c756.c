/* speed.exe 0087c756 Unwind@0087c756; analysis pseudocode, not buildable source.
 * calls 0068ce60 FUN_0068ce60
 */

void Unwind_0087c756(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x10) + 0x60;
  }
  FUN_0068ce60();
  return;
}

