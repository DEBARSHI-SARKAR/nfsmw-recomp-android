/* speed.exe 007e4729 FUN_007e4729; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000056 EnterCriticalSection
 */

undefined4 FUN_007e4729(void)

{
  int unaff_EBP;
  
  EnterCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_009c5340)[*(int *)(unaff_EBP + 8) >> 5] + 0xc +
             (*(uint *)(unaff_EBP + 8) & 0x1f) * 0x24));
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return 1;
}

