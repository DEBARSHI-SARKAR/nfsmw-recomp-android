/* speed.exe 0085e68b FUN_0085e68b; analysis pseudocode, not buildable source.
 * calls 007e4760 __unlock_fhandle
 */

void FUN_0085e68b(void)

{
  int unaff_EBP;
  
  __unlock_fhandle(*(int *)(unaff_EBP + 8));
  return;
}

