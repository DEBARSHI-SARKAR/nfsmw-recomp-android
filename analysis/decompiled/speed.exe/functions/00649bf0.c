/* speed.exe 00649bf0 FUN_00649bf0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00649bf0(float *param_1,float param_2,float param_3,float param_4)

{
  *param_1 = param_2;
  if (param_2 != param_1[2]) {
    *(undefined2 *)(param_1 + 10) = 2;
  }
  param_1[0xb] = param_3;
  if (param_3 != param_1[0xd]) {
    *(undefined2 *)(param_1 + 0x15) = 2;
  }
  param_1[0x16] = param_4;
  if (param_4 != param_1[0x18]) {
    *(undefined2 *)(param_1 + 0x20) = 2;
  }
  return;
}

