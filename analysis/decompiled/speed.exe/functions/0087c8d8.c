/* speed.exe 0087c8d8 Unwind@0087c8d8; analysis pseudocode, not buildable source.
 * calls 00694090 FUN_00694090
 */

void Unwind_0087c8d8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 0x4c;
  }
  FUN_00694090();
  return;
}

