/* speed.exe 007cb35e FUN_007cb35e; analysis pseudocode, not buildable source.
 * calls 007c9400 __unlock_file
 */

void FUN_007cb35e(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + -0x20));
  return;
}

