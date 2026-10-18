/* speed.exe 0087d008 Unwind@0087d008; analysis pseudocode, not buildable source.
 * calls 0068ce00 FUN_0068ce00
 */

void Unwind_0087d008(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x10) + 0x90;
  }
  FUN_0068ce00();
  return;
}

