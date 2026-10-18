/* speed.exe 00771cf0 FUN_00771cf0; analysis pseudocode, not buildable source.
 * calls 0076b3a0 FUN_0076b3a0
 */

void __fastcall FUN_00771cf0(int param_1)

{
  FUN_0076b3a0(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}

