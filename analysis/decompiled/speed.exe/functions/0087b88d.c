/* speed.exe 0087b88d Unwind@0087b88d; analysis pseudocode, not buildable source.
 * calls 0067ff50 FUN_0067ff50
 */

void Unwind_0087b88d(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x14) + 0x48;
  }
  FUN_0067ff50();
  return;
}

