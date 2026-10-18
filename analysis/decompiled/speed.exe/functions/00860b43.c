/* speed.exe 00860b43 FUN_00860b43; analysis pseudocode, not buildable source.
 * calls 007c9400 __unlock_file
 */

void FUN_00860b43(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + -0x1c));
  return;
}

