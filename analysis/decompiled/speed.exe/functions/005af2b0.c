/* speed.exe 005af2b0 FUN_005af2b0; analysis pseudocode, not buildable source.
 * calls 005aef40 FUN_005aef40
 */

void __thiscall FUN_005af2b0(int param_1,int param_2)

{
  if (param_2 != 0) {
    if (param_2 == *(int *)(param_1 + 0x14)) {
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 4);
    }
    if (param_2 == *(int *)(param_1 + 0x18)) {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 8);
    }
    if (*(int *)(param_2 + 8) != 0) {
      *(undefined4 *)(*(int *)(param_2 + 8) + 4) = *(undefined4 *)(param_2 + 4);
    }
    if (*(int *)(param_2 + 4) != 0) {
      *(undefined4 *)(*(int *)(param_2 + 4) + 8) = *(undefined4 *)(param_2 + 8);
    }
    *(undefined4 *)(param_2 + 4) = 0xabadcafe;
    *(undefined4 *)(param_2 + 8) = 0xabadcafe;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    if (*(int *)(param_2 + 0x14) != 0) {
      FUN_005aef40(*(int *)(param_2 + 0x14));
      if (*(undefined4 **)(param_2 + 0x14) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_2 + 0x14))(1);
      }
      *(undefined4 *)(param_2 + 0x14) = 0;
    }
  }
  return;
}

