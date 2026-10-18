/* speed.exe 004da0e0 FUN_004da0e0; analysis pseudocode, not buildable source.
 * calls 004ae8b0 FUN_004ae8b0
 * calls 0083179c FUN_0083179c
 */

void __fastcall FUN_004da0e0(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_004ae8b0();
  if (cVar1 != '\0') {
    if (*(int *)(param_1 + 0x30) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x10) = 0;
      if (**(int **)(param_1 + 0x30) != 0) {
        FUN_0083179c(*(int **)(param_1 + 0x30) + 1);
      }
    }
    if (*(int *)(param_1 + 0x34) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x10) = 0;
      if (**(int **)(param_1 + 0x34) != 0) {
        FUN_0083179c(*(int **)(param_1 + 0x34) + 1);
      }
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x28) + 8) = 0;
      if (**(int **)(param_1 + 0x28) != 0) {
        FUN_0083179c(*(int **)(param_1 + 0x28) + 1);
      }
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x2c) + 8) = 0;
      if (**(int **)(param_1 + 0x2c) != 0) {
        FUN_0083179c(*(int **)(param_1 + 0x2c) + 1);
      }
    }
    if (*(int *)(param_1 + 0x38) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x10) = 0;
      if (**(int **)(param_1 + 0x38) != 0) {
        FUN_0083179c(*(int **)(param_1 + 0x38) + 1);
      }
    }
    if (*(int *)(param_1 + 0x3c) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x10) = 0;
      if (**(int **)(param_1 + 0x3c) != 0) {
        FUN_0083179c(*(int **)(param_1 + 0x3c) + 1);
      }
    }
    if (*(int *)(param_1 + 0x40) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x40) + 0xc) = 0;
      if (**(int **)(param_1 + 0x40) != 0) {
        FUN_0083179c(*(int **)(param_1 + 0x40) + 1);
      }
    }
  }
  return;
}

