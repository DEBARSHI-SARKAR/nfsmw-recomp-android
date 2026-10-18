/* speed.exe 006f3780 FUN_006f3780; analysis pseudocode, not buildable source.
 * calls 006efc40 FUN_006efc40
 */

void __fastcall FUN_006f3780(int param_1)

{
  FUN_006efc40(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}

