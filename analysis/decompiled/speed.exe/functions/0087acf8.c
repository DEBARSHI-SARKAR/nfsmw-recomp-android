/* speed.exe 0087acf8 Unwind@0087acf8; analysis pseudocode, not buildable source.
 * calls 006683a0 FUN_006683a0
 */

void Unwind_0087acf8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x10) + 0x94;
  }
  FUN_006683a0();
  return;
}

