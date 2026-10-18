/* speed.exe 0087b941 Unwind@0087b941; analysis pseudocode, not buildable source.
 * calls 00667da0 FUN_00667da0
 */

void Unwind_0087b941(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x10) + 0xb4;
  }
  FUN_00667da0();
  return;
}

