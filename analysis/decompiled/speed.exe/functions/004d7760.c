/* speed.exe 004d7760 FUN_004d7760; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004d7760(int param_1,int param_2)

{
  if (param_2 < 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    return;
  }
  if (0x7fff < param_2) {
    param_2 = 0x7fff;
  }
  *(int *)(param_1 + 0x28) = param_2;
  return;
}

