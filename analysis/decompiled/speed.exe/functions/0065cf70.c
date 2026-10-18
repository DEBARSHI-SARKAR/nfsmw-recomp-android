/* speed.exe 0065cf70 FUN_0065cf70; analysis pseudocode, not buildable source.
 * calls 00655bf0 FUN_00655bf0
 */

void __fastcall FUN_0065cf70(int param_1)

{
  FUN_00655bf0(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}

