/* speed.exe 004dcc60 FUN_004dcc60; analysis pseudocode, not buildable source.
 * calls 0083179c FUN_0083179c
 */

void __fastcall FUN_004dcc60(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 4) = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x10) = 1;
    if (**(int **)(param_1 + 0x28) != 0) {
      FUN_0083179c(*(int **)(param_1 + 0x28) + 1);
    }
  }
  return;
}

