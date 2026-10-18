/* speed.exe 00477a10 FUN_00477a10; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00477a10(int param_1,float param_2,float param_3,float param_4)

{
  *(float *)(param_1 + 0x88) = param_2;
  if (param_2 != *(float *)(param_1 + 0x90)) {
    *(undefined2 *)(param_1 + 0xb0) = 2;
  }
  *(float *)(param_1 + 0xb4) = param_3;
  if (param_3 != *(float *)(param_1 + 0xbc)) {
    *(undefined2 *)(param_1 + 0xdc) = 2;
  }
  *(float *)(param_1 + 0xe0) = param_4;
  if (param_4 != *(float *)(param_1 + 0xe8)) {
    *(undefined2 *)(param_1 + 0x108) = 2;
  }
  return;
}

