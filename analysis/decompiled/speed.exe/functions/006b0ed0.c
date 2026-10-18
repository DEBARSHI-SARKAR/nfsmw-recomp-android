/* speed.exe 006b0ed0 FUN_006b0ed0; analysis pseudocode, not buildable source.
 * calls 006a6070 FUN_006a6070
 */

void __fastcall FUN_006b0ed0(int param_1)

{
  FUN_006a6070(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}

