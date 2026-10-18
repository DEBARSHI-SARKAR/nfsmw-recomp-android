/* speed.exe 00726700 FUN_00726700; analysis pseudocode, not buildable source.
 * calls 00460cd0 FUN_00460cd0
 */

int __thiscall FUN_00726700(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  FUN_00460cd0((undefined4 *)(param_1 + 8),param_2,0x28);
  return param_1;
}

