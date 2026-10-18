/* speed.exe 0087da8d Unwind@0087da8d; analysis pseudocode, not buildable source.
 * calls 0068b270 FUN_0068b270
 */

void Unwind_0087da8d(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x10) + 0x68;
  }
  FUN_0068b270();
  return;
}

