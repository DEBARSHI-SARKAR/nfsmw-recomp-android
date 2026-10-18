/* speed.exe 007d7482 FUN_007d7482; analysis pseudocode, not buildable source.
 * calls 007d74a0 FUN_007d74a0
 * calls 007d7495 FUN_007d7495
 */

void FUN_007d7482(void)

{
  int iVar1;
  int unaff_EBP;
  
  do {
    *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
    if (DAT_009c6460 <= *(int *)(unaff_EBP + -0x20)) {
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_007d7495();
      FUN_007d74a0();
      return;
    }
  } while ((*(int *)(DAT_009c5454 + *(int *)(unaff_EBP + -0x20) * 4) == 0) ||
          ((*(uint *)(*(int *)(DAT_009c5454 + *(int *)(unaff_EBP + -0x20) * 4) + 0xc) & 0x83) == 0))
  ;
  __lock_file2(*(int *)(unaff_EBP + -0x20),
               *(void **)(DAT_009c5454 + *(int *)(unaff_EBP + -0x20) * 4));
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if ((*(uint *)(*(int *)(DAT_009c5454 + *(int *)(unaff_EBP + -0x20) * 4) + 0xc) & 0x83) != 0) {
    if (*(int *)(unaff_EBP + 8) == 1) {
      iVar1 = __fflush_lk(*(undefined4 *)(DAT_009c5454 + *(int *)(unaff_EBP + -0x20) * 4));
      if (iVar1 != -1) {
        *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
      }
    }
    else if (((*(int *)(unaff_EBP + 8) == 0) &&
             ((*(uint *)(*(int *)(DAT_009c5454 + *(int *)(unaff_EBP + -0x20) * 4) + 0xc) & 2) != 0))
            && (iVar1 = __fflush_lk(*(undefined4 *)(DAT_009c5454 + *(int *)(unaff_EBP + -0x20) * 4))
               , iVar1 == -1)) {
      *(undefined4 *)(unaff_EBP + -0x24) = 0xffffffff;
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_007d7468();
  FUN_007d7482();
  return;
}

