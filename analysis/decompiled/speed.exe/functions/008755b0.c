/* speed.exe 008755b0 Unwind@008755b0; analysis pseudocode, not buildable source.
 * calls 00466750 thunk_FUN_005d59e0
 */

void Unwind_008755b0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 8;
  }
  thunk_FUN_005d59e0();
  return;
}

