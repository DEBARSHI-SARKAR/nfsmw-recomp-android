/* speed.exe 0077c580 FUN_0077c580; analysis pseudocode, not buildable source.
 * calls 00779ea0 FUN_00779ea0
 */

void __fastcall FUN_0077c580(int param_1)

{
  FUN_00779ea0(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}

