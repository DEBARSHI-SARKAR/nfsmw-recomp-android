/* speed.exe 00605a60 FUN_00605a60; analysis pseudocode, not buildable source.
 */

void FUN_00605a60(int param_1,int param_2)

{
  if (param_2 < 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_2 * 8 + 8;
    return;
  }
  param_2 = param_2 * 8;
  if (*(uint *)(param_1 + 8) < (uint)(*(int *)(param_1 + 0xc) + param_2)) {
    do {
      **(undefined4 **)(param_1 + 8) = 0;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 8;
    } while (*(uint *)(param_1 + 8) < (uint)(*(int *)(param_1 + 0xc) + param_2));
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 0xc) + param_2;
  return;
}

