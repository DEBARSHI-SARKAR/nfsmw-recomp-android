/* speed.exe 007d10d6 FUN_007d10d6; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000070 HeapFree
 */

void FUN_007d10d6(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    HeapFree(DAT_009c5318,0,*(LPVOID *)(unaff_EBP + 8));
  }
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return;
}

