/* speed.exe 0059c5f0 FUN_0059c5f0; analysis pseudocode, not buildable source.
 * calls 00594610 FUN_00594610
 */

void __fastcall FUN_0059c5f0(int param_1)

{
  FUN_00594610(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}

