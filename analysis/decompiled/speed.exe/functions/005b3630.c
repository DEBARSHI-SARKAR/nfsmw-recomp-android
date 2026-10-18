/* speed.exe 005b3630 FUN_005b3630; analysis pseudocode, not buildable source.
 */

void __thiscall
FUN_005b3630(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  if (param_2 < 3) {
    *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x54 + param_2 * 8) = param_3;
    *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x58 + param_2 * 8) = param_4;
    *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x6c + param_2 * 8) = param_5;
    *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x70 + param_2 * 8) = param_6;
  }
  return;
}

