/* speed.exe 00679840 FUN_00679840; analysis pseudocode, not buildable source.
 * calls 00674b20 FUN_00674b20
 */

void __fastcall FUN_00679840(int param_1)

{
  FUN_00674b20(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}

