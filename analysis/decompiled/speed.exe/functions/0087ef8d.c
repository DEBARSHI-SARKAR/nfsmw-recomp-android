/* speed.exe 0087ef8d Unwind@0087ef8d; analysis pseudocode, not buildable source.
 * calls 006f7920 FUN_006f7920
 */

void Unwind_0087ef8d(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x10) + 0x48;
  }
  FUN_006f7920();
  return;
}

