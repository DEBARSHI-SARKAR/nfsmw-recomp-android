/* speed.exe 0073b940 FUN_0073b940; analysis pseudocode, not buildable source.
 * calls 00501570 FUN_00501570
 */

void __thiscall FUN_0073b940(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  if ((*(int *)(param_1 + 8) == 0) &&
     ((*(int *)(param_1 + 0x10) == 0 ||
      (*(int *)((*(int *)(param_1 + 0x14) + 1) * 0x10 + *(int *)(param_1 + 0x10)) == 0)))) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    return;
  }
  FUN_00501570(param_2,param_3);
  return;
}

