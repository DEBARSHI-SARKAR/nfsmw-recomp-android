/* speed.exe 007c9208 FUN_007c9208; analysis pseudocode, not buildable source.
 * calls 007c9400 __unlock_file
 */

void FUN_007c9208(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + -0x1c));
  return;
}

