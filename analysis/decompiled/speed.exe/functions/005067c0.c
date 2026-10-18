/* speed.exe 005067c0 FUN_005067c0; analysis pseudocode, not buildable source.
 * calls 00504a20 FUN_00504a20
 */

void __fastcall FUN_005067c0(int param_1)

{
  FUN_00504a20(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}

