/* speed.exe 0087b993 Unwind@0087b993; analysis pseudocode, not buildable source.
 * calls 00668100 FUN_00668100
 */

void Unwind_0087b993(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x10) + 0xc0;
  }
  FUN_00668100();
  return;
}

