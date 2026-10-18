/* speed.exe 0085ec35 FUN_0085ec35; analysis pseudocode, not buildable source.
 * calls 007c9400 __unlock_file
 */

void FUN_0085ec35(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + -0x1c));
  return;
}

