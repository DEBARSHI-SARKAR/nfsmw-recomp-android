/* speed.exe 0077a170 FUN_0077a170; analysis pseudocode, not buildable source.
 * calls 00772180 FUN_00772180
 */

void __fastcall FUN_0077a170(int param_1)

{
  FUN_00772180(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}

