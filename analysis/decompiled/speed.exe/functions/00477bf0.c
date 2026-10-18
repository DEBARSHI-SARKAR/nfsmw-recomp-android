/* speed.exe 00477bf0 FUN_00477bf0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00477bf0(int param_1,float param_2,float param_3,float param_4)

{
  *(float *)(param_1 + 0x8c) = param_2;
  if (param_2 != *(float *)(param_1 + 0x94)) {
    *(undefined2 *)(param_1 + 0xb0) = 2;
  }
  *(float *)(param_1 + 0xb8) = param_3;
  if (param_3 != *(float *)(param_1 + 0xc0)) {
    *(undefined2 *)(param_1 + 0xdc) = 2;
  }
  *(float *)(param_1 + 0xe4) = param_4;
  if (param_4 != *(float *)(param_1 + 0xec)) {
    *(undefined2 *)(param_1 + 0x108) = 2;
  }
  return;
}

