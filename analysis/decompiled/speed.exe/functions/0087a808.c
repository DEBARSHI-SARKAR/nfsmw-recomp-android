/* speed.exe 0087a808 Unwind@0087a808; analysis pseudocode, not buildable source.
 * calls 0066edc0 FUN_0066edc0
 */

void Unwind_0087a808(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 0x48;
  }
  FUN_0066edc0();
  return;
}

