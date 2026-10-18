/* speed.exe 007caf4f FUN_007caf4f; analysis pseudocode, not buildable source.
 * calls 007c9400 __unlock_file
 */

void FUN_007caf4f(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + 0x14));
  return;
}

