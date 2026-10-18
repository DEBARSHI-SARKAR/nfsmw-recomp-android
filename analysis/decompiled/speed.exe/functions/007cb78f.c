/* speed.exe 007cb78f FUN_007cb78f; analysis pseudocode, not buildable source.
 * calls 007c9400 __unlock_file
 */

void FUN_007cb78f(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + 0x14));
  return;
}

