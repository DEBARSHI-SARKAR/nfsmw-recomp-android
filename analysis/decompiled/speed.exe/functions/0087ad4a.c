/* speed.exe 0087ad4a Unwind@0087ad4a; analysis pseudocode, not buildable source.
 * calls 00407d20 thunk_FUN_0045a430
 */

void Unwind_0087ad4a(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x10) + 0xa4;
  }
  thunk_FUN_0045a430();
  return;
}

