/* speed.exe 007dbca3 FUN_007dbca3; analysis pseudocode, not buildable source.
 * calls 007e4760 __unlock_fhandle
 */

void FUN_007dbca3(void)

{
  int unaff_EBP;
  
  __unlock_fhandle(*(int *)(unaff_EBP + 8));
  return;
}

