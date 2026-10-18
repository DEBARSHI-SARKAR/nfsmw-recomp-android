/* speed.exe 0066fce0 FUN_0066fce0; analysis pseudocode, not buildable source.
 * calls 00668650 FUN_00668650
 */

int __thiscall
FUN_0066fce0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined1 param_10,undefined4 param_11)

{
  FUN_00668650(param_1);
  *(undefined4 *)(param_1 + 4) = 0xa6b47fac;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_5;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x18) = param_4;
  *(undefined4 *)(param_1 + 0x28) = param_8;
  *(undefined4 *)(param_1 + 0x20) = param_6;
  *(undefined4 *)(param_1 + 0x24) = param_7;
  *(undefined4 *)(param_1 + 0x34) = param_11;
  *(int *)(param_1 + 8) = param_1;
  *(undefined1 *)(param_1 + 0x2c) = param_10;
  *(undefined4 *)(param_1 + 0x30) = param_9;
  return param_1;
}

