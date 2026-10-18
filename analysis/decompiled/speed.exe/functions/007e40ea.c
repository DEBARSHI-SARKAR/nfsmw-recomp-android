/* speed.exe 007e40ea FUN_007e40ea; analysis pseudocode, not buildable source.
 */

undefined4 FUN_007e40ea(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
  if (*(int *)(unaff_EBP + -0x1c) < 0x40) {
    if ((&DAT_009c5340)[*(int *)(unaff_EBP + -0x1c)] == 0) {
      uVar2 = __malloc_dbg(0x480,2,"osfinfo.c",0x85);
      *(undefined4 *)(unaff_EBP + -0x24) = uVar2;
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        (&DAT_009c5340)[*(int *)(unaff_EBP + -0x1c)] = *(undefined4 *)(unaff_EBP + -0x24);
        DAT_009c5320 = DAT_009c5320 + 0x20;
        while (*(uint *)(unaff_EBP + -0x24) < (&DAT_009c5340)[*(int *)(unaff_EBP + -0x1c)] + 0x480)
        {
          *(undefined1 *)(*(int *)(unaff_EBP + -0x24) + 4) = 0;
          **(undefined4 **)(unaff_EBP + -0x24) = 0xffffffff;
          *(undefined1 *)(*(int *)(unaff_EBP + -0x24) + 5) = 10;
          *(undefined4 *)(*(int *)(unaff_EBP + -0x24) + 8) = 0;
          *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 0x24;
        }
        *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x1c) << 5;
        iVar1 = __lock_fhandle(*(int *)(unaff_EBP + -0x20));
        if (iVar1 == 0) {
          *(undefined4 *)(unaff_EBP + -0x20) = 0xffffffff;
        }
      }
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x24) = (&DAT_009c5340)[*(int *)(unaff_EBP + -0x1c)];
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
            *(int *)(*(int *)(unaff_EBP + -0x24) + 8) =
                 *(int *)(*(int *)(unaff_EBP + -0x24) + 8) + 1;
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
      if (*(int *)(unaff_EBP + -0x20) == -1) {
        uVar2 = FUN_007e40ea();
        return uVar2;
      }
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_007e42ef();
  uVar2 = FUN_007e42fa();
  return uVar2;
}

