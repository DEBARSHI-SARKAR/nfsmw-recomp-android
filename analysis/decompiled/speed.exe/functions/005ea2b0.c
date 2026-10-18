/* speed.exe 005ea2b0 FUN_005ea2b0; analysis pseudocode, not buildable source.
 * calls 005e5f90 FUN_005e5f90
 */

void __fastcall FUN_005ea2b0(int param_1)

{
  FUN_005e5f90(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}

