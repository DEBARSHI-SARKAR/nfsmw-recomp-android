/* speed.exe 005b7600 FUN_005b7600; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_005b7600(int param_1,int param_2)

{
  if (param_2 != 0) {
    if (param_2 == *(int *)(param_1 + 0x100)) {
      *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 4);
    }
    if (param_2 == *(int *)(param_1 + 0x104)) {
      *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_2 + 8);
    }
    if (*(int *)(param_2 + 8) != 0) {
      *(undefined4 *)(*(int *)(param_2 + 8) + 4) = *(undefined4 *)(param_2 + 4);
    }
    if (*(int *)(param_2 + 4) != 0) {
      *(undefined4 *)(*(int *)(param_2 + 4) + 8) = *(undefined4 *)(param_2 + 8);
    }
    *(undefined4 *)(param_2 + 4) = 0xabadcafe;
    *(undefined4 *)(param_2 + 8) = 0xabadcafe;
    *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + -1;
  }
  return;
}

