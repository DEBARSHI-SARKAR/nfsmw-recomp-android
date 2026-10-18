/* speed.exe 005b6fb0 FUN_005b6fb0; analysis pseudocode, not buildable source.
 * calls 005b6f20 FUN_005b6f20
 */

void __thiscall FUN_005b6fb0(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 8) == *(int *)(param_1 + 4)) {
    FUN_005b6f20(*(int *)(param_1 + 4) + 1);
  }
  *(undefined4 *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 8) * 4) = param_2;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}

