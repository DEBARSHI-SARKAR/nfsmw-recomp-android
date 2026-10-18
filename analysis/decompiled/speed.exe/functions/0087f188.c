/* speed.exe 0087f188 Unwind@0087f188; analysis pseudocode, not buildable source.
 * calls 006f7c80 FUN_006f7c80
 */

void Unwind_0087f188(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x14) + 0x4c;
  }
  FUN_006f7c80();
  return;
}

