/* speed.exe 007fb8f9 FUN_007fb8f9; analysis pseudocode, not buildable source.
 * calls 007fc603 FUN_007fc603
 */

void FUN_007fb8f9(int param_1)

{
  if (*(int *)(param_1 + 0x278) != 0) {
    FUN_007fc603(*(int *)(param_1 + 0x278));
  }
  if (*(int *)(param_1 + 0x290) != 0) {
    FUN_007fc603(*(int *)(param_1 + 0x290));
  }
  if (*(int *)(param_1 + 0x28c) != 0) {
    FUN_007fc603(*(int *)(param_1 + 0x28c));
  }
  if (*(int *)(param_1 + 0x284) != 0) {
    FUN_007fc603(*(int *)(param_1 + 0x284));
  }
  if (*(int *)(param_1 + 0x268) != 0) {
    FUN_007fc603(*(int *)(param_1 + 0x268));
  }
  *(undefined4 *)(param_1 + 0x278) = 0;
  *(undefined4 *)(param_1 + 0x290) = 0;
  *(undefined4 *)(param_1 + 0x28c) = 0;
  *(undefined4 *)(param_1 + 0x284) = 0;
  *(undefined4 *)(param_1 + 0x268) = 0;
  *(undefined4 *)(param_1 + 0x274) = 0;
  *(undefined4 *)(param_1 + 0x294) = 0;
  *(undefined4 *)(param_1 + 0x288) = 0;
  *(undefined4 *)(param_1 + 0x280) = 0;
  *(undefined4 *)(param_1 + 0x264) = 0;
  return;
}

