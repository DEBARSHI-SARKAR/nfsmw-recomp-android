/* speed.exe 005fa070 FUN_005fa070; analysis pseudocode, not buildable source.
 * calls 005f9b50 FUN_005f9b50
 */

void __fastcall FUN_005fa070(int param_1)

{
  FUN_005f9b50(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}

