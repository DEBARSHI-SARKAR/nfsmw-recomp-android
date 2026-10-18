/* speed.exe 00754490 FUN_00754490; analysis pseudocode, not buildable source.
 * calls 0074ca20 FUN_0074ca20
 */

void __fastcall FUN_00754490(int param_1)

{
  FUN_0074ca20(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}

