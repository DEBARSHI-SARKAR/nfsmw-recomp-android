/* speed.exe 00874f70 Unwind@00874f70; analysis pseudocode, not buildable source.
 * calls 005d94d0 FUN_005d94d0
 */

void Unwind_00874f70(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 4;
  }
  FUN_005d94d0();
  return;
}

