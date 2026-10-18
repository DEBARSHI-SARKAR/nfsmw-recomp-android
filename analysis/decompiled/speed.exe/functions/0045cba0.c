/* speed.exe 0045cba0 FUN_0045cba0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0045cba0(short *param_1,int param_2,int param_3)

{
  *(undefined1 *)(param_1 + 1) = 2;
  *(undefined1 *)((int)param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x14);
  param_1[0xc] = (short)param_3;
  param_1[0xd] = *(short *)(param_2 + 0x1a);
  if (param_3 < 0) {
    *param_1 = 0x1c;
    return;
  }
  *param_1 = (short)param_3 + 0x1c;
  return;
}

