/* speed.exe 0059c650 FUN_0059c650; analysis pseudocode, not buildable source.
 * calls 005946b0 FUN_005946b0
 */

void __fastcall FUN_0059c650(int param_1)

{
  FUN_005946b0(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}

