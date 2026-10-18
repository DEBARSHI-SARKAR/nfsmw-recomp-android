/* speed.exe 004105e0 FUN_004105e0; analysis pseudocode, not buildable source.
 * calls 004040f0 FUN_004040f0
 */

int __thiscall
FUN_004105e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  FUN_004040f0(param_1);
  *(undefined4 *)(param_1 + 4) = 0xa6b47fac;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 0x1c) = param_6;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  *(undefined4 *)(param_1 + 0x20) = param_8;
  *(undefined4 *)(param_1 + 0x28) = param_9;
  *(int *)(param_1 + 8) = param_1;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  *(undefined4 *)(param_1 + 0x2c) = param_7;
  return param_1;
}

