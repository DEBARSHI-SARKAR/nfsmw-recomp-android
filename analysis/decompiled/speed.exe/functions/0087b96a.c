/* speed.exe 0087b96a Unwind@0087b96a; analysis pseudocode, not buildable source.
 * calls 0067dd90 FUN_0067dd90
 */

void Unwind_0087b96a(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x10) + 0xd0;
  }
  FUN_0067dd90();
  return;
}

