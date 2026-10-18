/* speed.exe 007e411d FUN_007e411d; analysis pseudocode, not buildable source.
 * calls 007d0fd0 __lock
 * calls 007e41c3 FUN_007e41c3
 * calls 007e41ce FUN_007e41ce
 * calls 007c514a __local_unwind2
 * calls 007ddc30 ___crtInitCritSecAndSpinCount
 */

undefined4 FUN_007e411d(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 0x24;
  if (*(uint *)(unaff_EBP + -0x24) < (&DAT_009c5340)[*(int *)(unaff_EBP + -0x1c)] + 0x480) {
    if ((*(byte *)(*(int *)(unaff_EBP + -0x24) + 4) & 1) != 0) {
      uVar2 = FUN_007e411d();
      return uVar2;
    }
    if (*(int *)(*(int *)(unaff_EBP + -0x24) + 8) == 0) {
      __lock(10);
      *(undefined4 *)(unaff_EBP + -4) = 1;
      if (*(int *)(*(int *)(unaff_EBP + -0x24) + 8) == 0) {
        iVar1 = ___crtInitCritSecAndSpinCount(*(int *)(unaff_EBP + -0x24) + 0xc,4000);
        if (iVar1 == 0) {
          *(undefined4 *)(unaff_EBP + -0x28) = 0xffffffff;
          __local_unwind2(unaff_EBP + -0x10,0xffffffff);
          ExceptionList = *(void **)(unaff_EBP + -0x10);
          return *(undefined4 *)(unaff_EBP + -0x28);
        }
        *(int *)(*(int *)(unaff_EBP + -0x24) + 8) = *(int *)(*(int *)(unaff_EBP + -0x24) + 8) + 1;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_007e41c3();
      uVar2 = FUN_007e41ce();
      return uVar2;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(unaff_EBP + -0x24) + 0xc));
    if ((*(byte *)(*(int *)(unaff_EBP + -0x24) + 4) & 1) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(unaff_EBP + -0x24) + 0xc));
      uVar2 = FUN_007e411d();
      return uVar2;
    }
    **(undefined4 **)(unaff_EBP + -0x24) = 0xffffffff;
    *(int *)(unaff_EBP + -0x20) =
         *(int *)(unaff_EBP + -0x1c) * 0x20 +
         (*(int *)(unaff_EBP + -0x24) - (&DAT_009c5340)[*(int *)(unaff_EBP + -0x1c)]) / 0x24;
  }
  if (*(int *)(unaff_EBP + -0x20) != -1) {
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_007e42ef();
    uVar2 = FUN_007e42fa();
    return uVar2;
  }
  uVar2 = FUN_007e40ea();
  return uVar2;
}

