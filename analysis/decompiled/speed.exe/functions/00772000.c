/* speed.exe 00772000 FUN_00772000; analysis pseudocode, not buildable source.
 * calls 0076b7d0 FUN_0076b7d0
 */

void __fastcall FUN_00772000(int param_1)

{
  FUN_0076b7d0(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}

