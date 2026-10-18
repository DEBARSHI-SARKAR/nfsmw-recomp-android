/* speed.exe 00477840 FUN_00477840; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00477840(int param_1,float param_2,float param_3,float param_4)

{
  *(float *)(param_1 + 0xc) = param_2;
  if (param_2 != *(float *)(param_1 + 4)) {
    *(undefined2 *)(param_1 + 0x2c) = 2;
  }
  param_3 = param_3 * _DAT_00894b48;
  *(float *)(param_1 + 0x38) = param_3;
  if (param_3 != *(float *)(param_1 + 0x30)) {
    *(undefined2 *)(param_1 + 0x58) = 2;
  }
  *(float *)(param_1 + 100) = param_4;
  if (param_4 != *(float *)(param_1 + 0x5c)) {
    *(undefined2 *)(param_1 + 0x84) = 2;
  }
  return;
}

