/* speed.exe 0077a1f0 FUN_0077a1f0; analysis pseudocode, not buildable source.
 * calls 00772240 FUN_00772240
 */

void __fastcall FUN_0077a1f0(int param_1)

{
  FUN_00772240(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}

