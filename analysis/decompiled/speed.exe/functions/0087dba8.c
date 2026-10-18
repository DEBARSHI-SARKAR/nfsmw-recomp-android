/* speed.exe 0087dba8 Unwind@0087dba8; analysis pseudocode, not buildable source.
 * calls 0068abd0 FUN_0068abd0
 */

void Unwind_0087dba8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 0x194;
  }
  FUN_0068abd0();
  return;
}

