/* speed.exe 00514fb0 FUN_00514fb0; analysis pseudocode, not buildable source.
 */

void FUN_00514fb0(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x8c) = param_2;
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x400000;
  }
  return;
}

