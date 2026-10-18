/* speed.exe 004d7670 FUN_004d7670; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004d7670(int param_1,int param_2)

{
  if (param_2 < 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    return;
  }
  if (0xffff < param_2) {
    param_2 = 0xffff;
  }
  *(int *)(param_1 + 0x14) = param_2;
  return;
}

