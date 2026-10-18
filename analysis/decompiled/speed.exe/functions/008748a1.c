/* speed.exe 008748a1 Unwind@008748a1; analysis pseudocode, not buildable source.
 * calls 00401060 FUN_00401060
 */

void Unwind_008748a1(void)

{
  int unaff_EBP;
  
  FUN_00401060(*(undefined4 *)(unaff_EBP + -0x10),
               *(int *)(unaff_EBP + -0x14) + *(int *)(unaff_EBP + 4) * 4);
  return;
}

