/* speed.exe 005f33e0 FUN_005f33e0; analysis pseudocode, not buildable source.
 * calls 005f2530 FUN_005f2530
 */

void __fastcall FUN_005f33e0(int param_1)

{
  FUN_005f2530(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}

