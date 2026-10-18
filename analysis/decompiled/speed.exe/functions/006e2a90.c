/* speed.exe 006e2a90 FUN_006e2a90; analysis pseudocode, not buildable source.
 * calls 006e2930 FUN_006e2930
 */

void __fastcall FUN_006e2a90(int param_1)

{
  FUN_006e2930(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}

