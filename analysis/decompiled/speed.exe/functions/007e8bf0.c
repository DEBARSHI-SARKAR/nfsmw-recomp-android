/* speed.exe 007e8bf0 FUN_007e8bf0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007e8bf0(int param_1,int param_2)

{
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    return;
  }
  *(int *)(param_1 + 4) = param_2 - param_1;
  return;
}

