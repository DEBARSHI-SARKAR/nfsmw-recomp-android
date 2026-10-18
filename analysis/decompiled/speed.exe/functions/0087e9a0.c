/* speed.exe 0087e9a0 Unwind@0087e9a0; analysis pseudocode, not buildable source.
 * calls 00466750 thunk_FUN_005d59e0
 */

void Unwind_0087e9a0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 0x10;
  }
  thunk_FUN_005d59e0();
  return;
}

