/* speed.exe 004d76a0 FUN_004d76a0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004d76a0(int param_1,int param_2)

{
  if (param_2 < 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    return;
  }
  if (0x400 < param_2) {
    param_2 = 0x400;
  }
  *(int *)(param_1 + 0x18) = param_2;
  return;
}

