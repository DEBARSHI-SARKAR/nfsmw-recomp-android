/* speed.exe 0046a420 FUN_0046a420; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0046a420(int param_1,float param_2,float param_3,float param_4)

{
  *(float *)(param_1 + 4) = param_2;
  if (param_2 != *(float *)(param_1 + 0xc)) {
    *(undefined2 *)(param_1 + 0x28) = 2;
  }
  *(float *)(param_1 + 0x30) = param_3;
  if (param_3 != *(float *)(param_1 + 0x38)) {
    *(undefined2 *)(param_1 + 0x54) = 2;
  }
  *(float *)(param_1 + 0x5c) = param_4;
  if (param_4 != *(float *)(param_1 + 100)) {
    *(undefined2 *)(param_1 + 0x80) = 2;
  }
  return;
}

