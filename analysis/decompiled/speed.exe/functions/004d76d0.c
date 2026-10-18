/* speed.exe 004d76d0 FUN_004d76d0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004d76d0(int param_1,int param_2)

{
  if (param_2 < -100) {
    *(undefined4 *)(param_1 + 0x1c) = 0xffffff9c;
    return;
  }
  if (100 < param_2) {
    param_2 = 100;
  }
  *(int *)(param_1 + 0x1c) = param_2;
  return;
}

