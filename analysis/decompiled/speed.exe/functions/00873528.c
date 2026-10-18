/* speed.exe 00873528 Unwind@00873528; analysis pseudocode, not buildable source.
 * calls 005651a0 FUN_005651a0
 */

void Unwind_00873528(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 0x30;
  }
  FUN_005651a0();
  return;
}

