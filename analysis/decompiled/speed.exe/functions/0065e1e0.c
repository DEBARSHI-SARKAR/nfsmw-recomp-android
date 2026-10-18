/* speed.exe 0065e1e0 FUN_0065e1e0; analysis pseudocode, not buildable source.
 * calls 0065d120 FUN_0065d120
 */

void __fastcall FUN_0065e1e0(int param_1)

{
  FUN_0065d120(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}

