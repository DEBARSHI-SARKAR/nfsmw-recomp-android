/* speed.exe 0087da66 Unwind@0087da66; analysis pseudocode, not buildable source.
 * calls 0068b480 FUN_0068b480
 */

void Unwind_0087da66(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x10) + 0x58;
  }
  FUN_0068b480();
  return;
}

