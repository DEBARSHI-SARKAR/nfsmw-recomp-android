/* speed.exe 006300b0 FUN_006300b0; analysis pseudocode, not buildable source.
 * calls 006244c0 FUN_006244c0
 */

int __thiscall
FUN_006300b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined1 param_7,undefined1 param_8,undefined4 param_9)

{
  FUN_006244c0(param_1);
  *(undefined4 *)(param_1 + 4) = 0xa6b47fac;
  *(undefined4 *)(param_1 + 0x10) = param_5;
  *(undefined4 *)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 0x18) = param_4;
  *(undefined4 *)(param_1 + 0x20) = param_6;
  *(undefined1 *)(param_1 + 0x25) = param_8;
  *(int *)(param_1 + 8) = param_1;
  *(undefined1 *)(param_1 + 0x24) = param_7;
  *(undefined4 *)(param_1 + 0x28) = param_9;
  return param_1;
}

