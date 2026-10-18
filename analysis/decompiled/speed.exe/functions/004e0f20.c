/* speed.exe 004e0f20 FUN_004e0f20; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_004e0f20(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x3c) = 1;
  }
  (**(code **)(**(int **)(param_1 + 0x30) + 0x38))(param_1 + 0x40);
  (**(code **)(**(int **)(param_1 + 0x30) + 0x40))(param_1 + 0x50);
  return;
}

