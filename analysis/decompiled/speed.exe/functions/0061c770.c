/* speed.exe 0061c770 FUN_0061c770; analysis pseudocode, not buildable source.
 * calls 00619cb0 FUN_00619cb0
 */

void __fastcall FUN_0061c770(int param_1)

{
  FUN_00619cb0(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}

