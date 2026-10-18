/* speed.exe 0078e030 FUN_0078e030; analysis pseudocode, not buildable source.
 * calls 008428e0 FUN_008428e0
 * calls 0056c6e0 FUN_0056c6e0
 */

void __thiscall FUN_0078e030(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x73c) != 0) {
    FUN_0056c6e0(*(int *)(param_1 + 0x73c));
    *(undefined4 *)(param_1 + 0x73c) = 0;
  }
  if (*(int *)(param_1 + 4) != 0) {
    FUN_008428e0(*(int *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  (**(code **)(**(int **)(param_1 + 0x738) + 4))(0xb19ba115,0,param_2,0);
  return;
}

