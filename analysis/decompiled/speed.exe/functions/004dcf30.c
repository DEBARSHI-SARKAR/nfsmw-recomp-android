/* speed.exe 004dcf30 FUN_004dcf30; analysis pseudocode, not buildable source.
 * calls 0083179c FUN_0083179c
 */

void __fastcall FUN_004dcf30(int param_1)

{
  if (*(int *)(param_1 + 0x48) != 0) {
    *(undefined4 *)(param_1 + 0x40) = 0x41200000;
    *(undefined1 *)(param_1 + 0x44) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x18) = 1;
    if (**(int **)(param_1 + 0x48) != 0) {
      FUN_0083179c(*(int **)(param_1 + 0x48) + 1);
    }
  }
  return;
}

