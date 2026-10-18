/* speed.exe 0057f280 FUN_0057f280; analysis pseudocode, not buildable source.
 * calls 0056be80 FUN_0056be80
 * calls 005730a0 FUN_005730a0
 * calls 00460ca0 FUN_00460ca0
 */

void __thiscall FUN_0057f280(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0056be80(param_1 + 0x304,0x100,param_1 + 0x100);
  if (*(int *)(param_1 + 0x404) == 5) {
    FUN_005730a0(param_2,param_3,param_1 + 0x100);
    return;
  }
  FUN_00460ca0(param_2,param_1 + 0x304,param_3);
  return;
}

