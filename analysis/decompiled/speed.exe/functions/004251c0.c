/* speed.exe 004251c0 FUN_004251c0; analysis pseudocode, not buildable source.
 * calls 0041cab0 FUN_0041cab0
 */

void __fastcall FUN_004251c0(int param_1)

{
  FUN_0041cab0(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}

