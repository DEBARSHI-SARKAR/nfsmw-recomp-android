/* speed.exe 0065e160 FUN_0065e160; analysis pseudocode, not buildable source.
 * calls 0065d0a0 FUN_0065d0a0
 */

void __fastcall FUN_0065e160(int param_1)

{
  FUN_0065d0a0(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}

