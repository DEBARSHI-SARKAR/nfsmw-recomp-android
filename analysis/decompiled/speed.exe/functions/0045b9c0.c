/* speed.exe 0045b9c0 FUN_0045b9c0; analysis pseudocode, not buildable source.
 * calls 0045b9f0 FUN_0045b9f0
 */

void __fastcall FUN_0045b9c0(int param_1)

{
  FUN_0045b9f0(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}

