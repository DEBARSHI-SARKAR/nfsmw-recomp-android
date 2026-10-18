/* speed.exe 008687ba Unwind@008687ba; analysis pseudocode, not buildable source.
 * calls 00405250 FUN_00405250
 */

void Unwind_008687ba(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x10) + 0x76c;
  }
  FUN_00405250();
  return;
}

