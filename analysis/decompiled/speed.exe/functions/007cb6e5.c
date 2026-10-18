/* speed.exe 007cb6e5 FUN_007cb6e5; analysis pseudocode, not buildable source.
 * calls 007c9400 __unlock_file
 */

void FUN_007cb6e5(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + 8));
  return;
}

