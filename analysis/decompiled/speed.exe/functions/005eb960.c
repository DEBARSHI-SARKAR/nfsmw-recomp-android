/* speed.exe 005eb960 FUN_005eb960; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 * calls 005e6020 FUN_005e6020
 */

void __fastcall FUN_005eb960(int param_1)

{
  FUN_005e6020(*(undefined4 *)(*(int *)(param_1 + 0x130) + 4));
  *(int *)(*(int *)(param_1 + 0x130) + 4) = *(int *)(param_1 + 0x130);
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x130);
  *(int *)(*(int *)(param_1 + 0x130) + 8) = *(int *)(param_1 + 0x130);
  FUN_005e6020(*(undefined4 *)(*(int *)(param_1 + 0x13c) + 4));
  *(int *)(*(int *)(param_1 + 0x13c) + 4) = *(int *)(param_1 + 0x13c);
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x13c);
  *(int *)(*(int *)(param_1 + 0x13c) + 8) = *(int *)(param_1 + 0x13c);
  if (*(int *)(param_1 + 0x120) != 0) {
    FUN_004655f0(*(int *)(param_1 + 0x120));
  }
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  return;
}

