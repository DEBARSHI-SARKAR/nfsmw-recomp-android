/* speed.exe 0087f05d Unwind@0087f05d; analysis pseudocode, not buildable source.
 * calls 006edc00 FUN_006edc00
 */

void Unwind_0087f05d(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x10) + 0x60;
  }
  FUN_006edc00();
  return;
}

