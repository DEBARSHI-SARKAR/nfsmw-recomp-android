/* speed.exe 00874914 Unwind@00874914; analysis pseudocode, not buildable source.
 * calls 00401060 FUN_00401060
 */

void Unwind_00874914(void)

{
  int unaff_EBP;
  
  FUN_00401060(*(undefined4 *)(unaff_EBP + -0x10),
               *(int *)(unaff_EBP + -0x14) + 4 + *(int *)(unaff_EBP + 4) * 8);
  return;
}

