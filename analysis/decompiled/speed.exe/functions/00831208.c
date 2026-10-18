/* speed.exe 00831208 FUN_00831208; analysis pseudocode, not buildable source.
 * calls 0081962e FUN_0081962e
 */

undefined4 __thiscall FUN_00831208(int param_1,undefined4 param_2)

{
  FUN_0081962e(param_2);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return 0;
}

