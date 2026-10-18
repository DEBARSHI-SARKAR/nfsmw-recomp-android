/* speed.exe 008311d4 FUN_008311d4; analysis pseudocode, not buildable source.
 * calls 0081962e FUN_0081962e
 */

undefined4 __thiscall FUN_008311d4(int param_1,undefined4 param_2)

{
  FUN_0081962e(param_2);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return 0;
}

