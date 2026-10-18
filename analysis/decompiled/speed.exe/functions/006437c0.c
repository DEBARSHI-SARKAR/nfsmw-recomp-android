/* speed.exe 006437c0 FUN_006437c0; analysis pseudocode, not buildable source.
 * calls 0063fe40 FUN_0063fe40
 */

void __fastcall FUN_006437c0(int param_1)

{
  FUN_0063fe40(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}

