/* speed.exe 007ee477 FUN_007ee477; analysis pseudocode, not buildable source.
 * calls 007ee3f3 FUN_007ee3f3
 */

void __thiscall FUN_007ee477(int param_1,int param_2,int param_3)

{
  if (param_2 == 0) {
    FUN_007ee3f3(param_3);
  }
  else {
    if (*(int *)(param_2 + 8) == 0) {
      *(int *)(param_1 + 4) = param_3;
    }
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 **)(param_2 + 8) = (undefined4 *)(param_3 + 8);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  return;
}

