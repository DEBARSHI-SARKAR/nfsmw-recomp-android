/* speed.exe 004b6820 FUN_004b6820; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_004b6820(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x1c);
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x38))(param_1 + 0x30);
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x40))(param_1 + 0x50);
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x3c))(param_1 + 0x40);
  return;
}

