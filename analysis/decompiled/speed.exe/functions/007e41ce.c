/* speed.exe 007e41ce FUN_007e41ce; analysis pseudocode, not buildable source.
 * calls 007e42ef FUN_007e42ef
 * calls 007e4670 __lock_fhandle
 * calls 007e42fa FUN_007e42fa
 * calls 007e411d FUN_007e411d
 * calls EXTERNAL:00000056 EnterCriticalSection
 * calls 007e40ea FUN_007e40ea
 * calls EXTERNAL:00000057 LeaveCriticalSection
 * calls 007c6700 __malloc_dbg
 */

void FUN_007e41ce(void)

{
  int unaff_EBP;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(unaff_EBP + -0x24) + 0xc));
  if ((*(byte *)(*(int *)(unaff_EBP + -0x24) + 4) & 1) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(unaff_EBP + -0x24) + 0xc));
    FUN_007e411d();
    return;
  }
  **(undefined4 **)(unaff_EBP + -0x24) = 0xffffffff;
  *(int *)(unaff_EBP + -0x20) =
       *(int *)(unaff_EBP + -0x1c) * 0x20 +
       (*(int *)(unaff_EBP + -0x24) - (&DAT_009c5340)[*(int *)(unaff_EBP + -0x1c)]) / 0x24;
  if (*(int *)(unaff_EBP + -0x20) != -1) {
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_007e42ef();
    FUN_007e42fa();
    return;
  }
  FUN_007e40ea();
  return;
}

