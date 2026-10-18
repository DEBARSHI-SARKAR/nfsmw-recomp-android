/* speed.exe 007cd2f3 FUN_007cd2f3; analysis pseudocode, not buildable source.
 * calls 007d0fd0 __lock
 * calls 007cd3f0 FUN_007cd3f0
 * calls 007d2e00 ___freetlocinfo
 * calls 007cd3e5 FUN_007cd3e5
 */

void FUN_007cd2f3(void)

{
  int unaff_EBP;
  
  __lock(0xc);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(*(int *)(unaff_EBP + -0x24) + 100);
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    **(int **)(unaff_EBP + -0x1c) = **(int **)(unaff_EBP + -0x1c) + -1;
    if (*(int *)(*(int *)(unaff_EBP + -0x1c) + 0x2c) != 0) {
      **(int **)(*(int *)(unaff_EBP + -0x1c) + 0x2c) =
           **(int **)(*(int *)(unaff_EBP + -0x1c) + 0x2c) + -1;
    }
    if (*(int *)(*(int *)(unaff_EBP + -0x1c) + 0x34) != 0) {
      **(int **)(*(int *)(unaff_EBP + -0x1c) + 0x34) =
           **(int **)(*(int *)(unaff_EBP + -0x1c) + 0x34) + -1;
    }
    if (*(int *)(*(int *)(unaff_EBP + -0x1c) + 0x30) != 0) {
      **(int **)(*(int *)(unaff_EBP + -0x1c) + 0x30) =
           **(int **)(*(int *)(unaff_EBP + -0x1c) + 0x30) + -1;
    }
    if (*(int *)(*(int *)(unaff_EBP + -0x1c) + 0x40) != 0) {
      **(int **)(*(int *)(unaff_EBP + -0x1c) + 0x40) =
           **(int **)(*(int *)(unaff_EBP + -0x1c) + 0x40) + -1;
    }
    *(int *)(*(int *)(*(int *)(unaff_EBP + -0x1c) + 0x4c) + 0xb4) =
         *(int *)(*(int *)(*(int *)(unaff_EBP + -0x1c) + 0x4c) + 0xb4) + -1;
    if (((*(undefined **)(unaff_EBP + -0x1c) != PTR_DAT_00906b3c) &&
        (*(undefined4 **)(unaff_EBP + -0x1c) != &DAT_00906ae8)) &&
       (**(int **)(unaff_EBP + -0x1c) == 0)) {
      ___freetlocinfo(*(undefined4 *)(unaff_EBP + -0x1c));
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_007cd3e5();
  FUN_007cd3f0();
  return;
}

