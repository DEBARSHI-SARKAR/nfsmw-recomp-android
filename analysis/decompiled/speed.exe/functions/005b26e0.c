/* speed.exe 005b26e0 FUN_005b26e0; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_005b26e0(int param_1,int param_2)

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
    return param_2;
  }
  return 0;
}

