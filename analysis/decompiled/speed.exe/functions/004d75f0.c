/* speed.exe 004d75f0 FUN_004d75f0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004d75f0(int param_1,int param_2)

{
  if (param_2 < -0x2000) {
    *(undefined4 *)(param_1 + 8) = 0xffffe000;
    return;
  }
  if (0x2000 < param_2) {
    param_2 = 0x2000;
  }
  *(int *)(param_1 + 8) = param_2;
  return;
}

