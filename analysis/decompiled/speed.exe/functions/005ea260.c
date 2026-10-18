/* speed.exe 005ea260 FUN_005ea260; analysis pseudocode, not buildable source.
 * calls 005e5ed0 FUN_005e5ed0
 */

void __fastcall FUN_005ea260(int param_1)

{
  FUN_005e5ed0(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}

