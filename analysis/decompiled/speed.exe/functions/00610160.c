/* speed.exe 00610160 FUN_00610160; analysis pseudocode, not buildable source.
 * calls 0060ce50 FUN_0060ce50
 */

void __fastcall FUN_00610160(int param_1)

{
  FUN_0060ce50(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}

