/* speed.exe 007975a0 FUN_007975a0; analysis pseudocode, not buildable source.
 * calls 00794ef0 FUN_00794ef0
 */

void __fastcall FUN_007975a0(int param_1)

{
  FUN_00794ef0(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}

