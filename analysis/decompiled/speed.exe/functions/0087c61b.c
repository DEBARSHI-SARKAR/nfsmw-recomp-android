/* speed.exe 0087c61b Unwind@0087c61b; analysis pseudocode, not buildable source.
 * calls 0068c9c0 FUN_0068c9c0
 */

void Unwind_0087c61b(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x10) + 0x78;
  }
  FUN_0068c9c0();
  return;
}

