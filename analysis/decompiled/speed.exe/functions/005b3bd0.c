/* speed.exe 005b3bd0 FUN_005b3bd0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_005b3bd0(int param_1,int param_2)

{
  if (param_2 != 0) {
    if (param_2 == *(int *)(param_1 + 8)) {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 4);
    }
    if (param_2 == *(int *)(param_1 + 0xc)) {
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 8);
    }
    if (*(int *)(param_2 + 8) != 0) {
      *(undefined4 *)(*(int *)(param_2 + 8) + 4) = *(undefined4 *)(param_2 + 4);
    }
    if (*(int *)(param_2 + 4) != 0) {
      *(undefined4 *)(*(int *)(param_2 + 4) + 8) = *(undefined4 *)(param_2 + 8);
    }
    *(undefined4 *)(param_2 + 4) = 0xabadcafe;
    *(undefined4 *)(param_2 + 8) = 0xabadcafe;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  }
  return;
}

