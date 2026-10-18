/* speed.exe 007e99f0 FUN_007e99f0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007e99f0(int param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  *(int *)(param_1 + 8) = param_2 - param_1;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}

