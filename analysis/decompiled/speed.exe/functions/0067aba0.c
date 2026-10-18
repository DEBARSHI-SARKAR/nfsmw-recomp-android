/* speed.exe 0067aba0 FUN_0067aba0; analysis pseudocode, not buildable source.
 * calls 00675d70 FUN_00675d70
 */

void __fastcall FUN_0067aba0(int param_1)

{
  FUN_00675d70(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}

