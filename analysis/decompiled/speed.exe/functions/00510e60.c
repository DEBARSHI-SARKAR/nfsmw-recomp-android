/* speed.exe 00510e60 FUN_00510e60; analysis pseudocode, not buildable source.
 * calls 00651550 FUN_00651550
 */

void __thiscall FUN_00510e60(int param_1,undefined4 param_2)

{
  FUN_00651550(param_2);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x80);
  *(undefined2 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0xac);
  *(undefined2 *)(param_1 + 200) = 0;
  return;
}

