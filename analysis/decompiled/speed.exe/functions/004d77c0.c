/* speed.exe 004d77c0 FUN_004d77c0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004d77c0(int param_1,int param_2)

{
  if (param_2 < 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    return;
  }
  if (0x3ff < param_2) {
    param_2 = 0x3ff;
  }
  *(int *)(param_1 + 0x30) = param_2;
  return;
}

