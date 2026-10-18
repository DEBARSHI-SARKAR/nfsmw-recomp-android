/* speed.exe 005ea300 FUN_005ea300; analysis pseudocode, not buildable source.
 * calls 005e6020 FUN_005e6020
 */

void __fastcall FUN_005ea300(int param_1)

{
  FUN_005e6020(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}

