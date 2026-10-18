/* speed.exe 007d71f5 FUN_007d71f5; analysis pseudocode, not buildable source.
 * calls 007c9400 __unlock_file
 */

void FUN_007d71f5(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + 8));
  return;
}

