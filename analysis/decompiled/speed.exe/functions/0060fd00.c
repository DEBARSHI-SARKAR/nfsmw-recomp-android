/* speed.exe 0060fd00 FUN_0060fd00; analysis pseudocode, not buildable source.
 * calls 0060c630 FUN_0060c630
 */

void __fastcall FUN_0060fd00(int param_1)

{
  FUN_0060c630(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}

