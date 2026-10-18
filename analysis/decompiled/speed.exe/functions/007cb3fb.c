/* speed.exe 007cb3fb FUN_007cb3fb; analysis pseudocode, not buildable source.
 * calls 007c9400 __unlock_file
 */

void FUN_007cb3fb(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + 0xc));
  return;
}

