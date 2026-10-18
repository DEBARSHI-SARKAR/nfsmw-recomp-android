/* speed.exe 0072b590 FUN_0072b590; analysis pseudocode, not buildable source.
 * calls 007263f0 FUN_007263f0
 */

void __fastcall FUN_0072b590(int param_1)

{
  FUN_007263f0(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}

