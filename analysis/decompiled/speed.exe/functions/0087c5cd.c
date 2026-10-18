/* speed.exe 0087c5cd Unwind@0087c5cd; analysis pseudocode, not buildable source.
 * calls 0068a8b0 FUN_0068a8b0
 */

void Unwind_0087c5cd(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x10) + 0x68;
  }
  FUN_0068a8b0();
  return;
}

