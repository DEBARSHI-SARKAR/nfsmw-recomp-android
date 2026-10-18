/* speed.exe 007fe183 FUN_007fe183; analysis pseudocode, not buildable source.
 * calls 007fc603 FUN_007fc603
 */

void FUN_007fe183(int param_1)

{
  if (*(int *)(param_1 + 0x248) != 0) {
    FUN_007fc603(*(int *)(param_1 + 0x248));
  }
  if (*(int *)(param_1 + 0x250) != 0) {
    FUN_007fc603(*(int *)(param_1 + 0x250));
  }
  if (*(int *)(param_1 + 600) != 0) {
    FUN_007fc603(*(int *)(param_1 + 600));
  }
  if (*(int *)(param_1 + 0x260) != 0) {
    FUN_007fc603(*(int *)(param_1 + 0x260));
  }
  *(undefined4 *)(param_1 + 0x248) = 0;
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 600) = 0;
  *(undefined4 *)(param_1 + 0x244) = 0;
  *(undefined4 *)(param_1 + 0x24c) = 0;
  *(undefined4 *)(param_1 + 0x254) = 0;
  *(undefined4 *)(param_1 + 0x260) = 0;
  return;
}

