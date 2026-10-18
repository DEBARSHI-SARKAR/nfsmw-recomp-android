/* speed.exe 0065ba40 FUN_0065ba40; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0065ba40(int param_1,float param_2,float param_3,float param_4)

{
  *(float *)(param_1 + 8) = param_2;
  if (param_2 != *(float *)(param_1 + 0x10)) {
    *(undefined2 *)(param_1 + 0x2c) = 2;
  }
  *(float *)(param_1 + 0x34) = param_3;
  if (param_3 != *(float *)(param_1 + 0x3c)) {
    *(undefined2 *)(param_1 + 0x58) = 2;
  }
  *(float *)(param_1 + 0x60) = param_4;
  if (param_4 != *(float *)(param_1 + 0x68)) {
    *(undefined2 *)(param_1 + 0x84) = 2;
  }
  return;
}

